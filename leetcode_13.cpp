class Solution {
public:
    int romanToInt(string s) {
        int num[256];
        int sum = 0;
        num['I'] = 1; 
        num['X'] = 10; 
        num['C'] = 100; 
        num['M'] = 1000; 
        num['V'] = 5; 
        num['L'] = 50; 
        num['D'] = 500;
        for(int i = 0; i < s.length(); i++)
        {
            if(i + 1 < s.length() && num[s[i]] < num[s[i + 1]])//字符串的结尾不是NULL，不能用num[s[i+1] != NULL
                sum -= num[s[i]];
            else
                sum += num[s[i]];
        }
        return sum;
    }
};
