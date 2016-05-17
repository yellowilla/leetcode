class Solution {
public:
    string reverseString(string s) {
        int n = s.length() - 1, m = 0;
        while(m < n)
            swap(s[m++], s[n--]);
        return s;
    }
};
