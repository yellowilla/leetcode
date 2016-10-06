class Solution {
public:
int longestPalindrome(string s) {
    int ct[256]={0};//ascii码表为0到255
    int len=s.length();
    for(int i=0;i<len;i++)
        ct[s[i]]++;
    int odd=0,even=0;
    int res=0;
    for(int i=65;i<=90;i++)//大写字母从65到90
    {
        if(ct[i]==1)
            odd++;
        else if(ct[i]%2==1&&ct[i]/2!=0)
        {
            odd++;
            even+=(ct[i]-1);
        }
        else
            even+=ct[i];
    }
    for(int i=97;i<=122;i++)//大写字母从65到90
    {
       if(ct[i]==1)
            odd++;
        else if(ct[i]%2==1&&ct[i]/2!=0)
        {
            odd++;
            even+=(ct[i]-1);
        }
        else
            even+=ct[i];
    }
    if(!odd)
        res=even;
    else
        res=(even+1);
    return res;
}
};
