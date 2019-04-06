/*
You're given a substring s of some cyclic string. What's the length of the smallest possible string that can be concatenated to itself many times to obtain this cyclic string?
*/

int cyclicString(String s) {
    final int slen = s.length();
    int len = 1;
    while (len < slen) {
        boolean is_cyclic = true;
        String sub = s.substring(0, len);
        int start = len;
        while (start < slen) {
            int r = 0;
            while (r < len && start + r < slen) {
                if (s.charAt(start + r) != sub.charAt(r)) {
                    is_cyclic = false;
                    break;
                }
                r++;
            }
            if (!is_cyclic) 
                break;
            start += len;
        }
        if (is_cyclic) 
            return len;
        len++;
    }
    return slen;
}
