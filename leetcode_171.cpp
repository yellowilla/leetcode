class Solution {
public:
    int titleToNumber(string s) {
        int i, sum = 0;
        for(i = 0; i < s.length(); i++) //s.length()等价于s.size()
        {
            sum += (s[i] - 64) * pow(26, s.length() - 1 - i);
        }
        return sum;
    }
};
