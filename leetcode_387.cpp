class Solution {
public:
 int firstUniqChar(string s) {
     int ct[256]={0};
     int len=s.length();
     int i=0,j=0;
     for(;i<len;++i)
         ct[s[i]]++;
     while(ct[s[j]]!=1&&j<len)
        j++;
     if(j<len)
        return j;
     else
        return -1;
    }
};
