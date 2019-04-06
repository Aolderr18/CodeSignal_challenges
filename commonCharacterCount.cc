/*
Given two strings, find the number of common characters between them.
*/

int commonCharacterCount(std::string s1, std::string s2) {
    const unsigned n = s1.length();
    const unsigned m = s2.length();
    bool s2_matched[m];
    unsigned i, j;
    for (j = 0; j < m; j++)
        s2_matched[j] = 0;
    int common = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            if (s2_matched[j])
                continue;
            if (s1.at(i) == s2.at(j)) {
                ++common;
                s2_matched[j] = 1;
                break;
            }
        }
    return common;
}
