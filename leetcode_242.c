bool isAnagram(char* s, char* t) {
    if(strlen(s) != strlen(t))
        return false;
    char *c;
    int mask[256]  = {};//新版ascii码表有256个，此题用128就够了
    c = s;
    while(*c)
        mask[*c ++] ++;//字符char本质上就是数字表示的
    c = t;
    while(*c)
    {
        if(mask[*c]>0)
            mask[*c++]--;
        else
            return false;
    }
    return true;
}


