class Solution {
public:
    char findTheDifference(string s, string t) {
    int sum_s=0, sum_t=0;
    for(int i=0;i<s.length();i++)   //此处不能用strlen(s),因为strlen()传入的参数是char*不是string
        sum_s+=(int)s[i];
    for(int j=0;j<t.length();j++)
        sum_t+=(int)t[j];
    char res=(char)(sum_t-sum_s);
    return res;
    }
};


