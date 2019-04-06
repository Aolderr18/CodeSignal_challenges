/*
A Civil Engineer got design of a water storage tank from an architect. The design is represented as an array. Each brick is of unit size (height=width=1).

The tank is completely filled, i.e. water takes up all space it can accommodate. Find the cross sectional area of water in the tank, i.e. blue part in given image 
*/

int water_area(std::vector<int> arr) {
    const int w = arr.size();
    const int m = max(arr, w);
    int barrier[m][w];
    int x, y;
    for (x = 0; x < m; x++)
        for (y = 0; y < w; y++)
            barrier[x][y] = 0;
    for (y = 0; y < w; y++)
        for (x = 0; x < arr[y]; x++) 
            barrier[x][y]++;
    int water = 0;
    for (x = 0; x < m; x++)
        for (y = 0; y < w; y++)
            if (!barrier[x][y]) {
                int left = 0, right = 0;
                int r;
                for (r = y - 1; r >= 0; r--)
                    if (barrier[x][r]) {
                        ++left;
                        break;
                    }
                for (r = y + 1; r < w; r++)
                    if (barrier[x][r]) {
                        ++right;
                        break;
                    }
                if (left * right) 
                    water++;
            }
    return water;
}

int max(const vector<int> & arr, const int & w) {
    int max = 0;
    for (int x = 0; x < w; x++)
        if (arr[x] > max)
            max = arr[x];
    return max;
}
