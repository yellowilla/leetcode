class Solution {
public:
    int Divide(int n)
    {
        int tmp = 0;
        while(n)
        {
            tmp += (n % 10) * (n % 10);
            n /= 10;
        }
        return tmp;
    }
    
    bool isHappy(int n) {
        if(n <= 0)
            return false;
        if((n = Divide(n)) == 1)
            return true;
        int map[600] = {0};//输入为10^6内的整数时
        while(!map[n])
        {
            map[n] = 1;
            if(n == 1)
                return true;
            else
                n = Divide(n);
        }
        return false;
    }
};
