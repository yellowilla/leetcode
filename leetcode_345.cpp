class Solution {
public:
    bool isVowel(char m)
    {
        switch(m){
            case'a':
            case'e':
            case'i':
            case'o':
            case'u':
            case'A':
            case'E':
            case'I':
            case'O':
            case'U':{return true; break;}
            default:{return false; break;}
        }
    }
    
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        while(left < right)
        {
            while(!isVowel(s[left]) && left < right)
                left++;
            if(left == right)
                break;
            while(!isVowel(s[right]) && left < right)
                right--;
            if(left == right)
                break;
            swap(s[left++], s[right--]);
        }
        return s;
    }
};
