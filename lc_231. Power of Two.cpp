class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        return n && (! (n & (n - 1)));//&是按位与
    }
};

/////////////////////////////////////////////////
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
        {
            return false;
        }
        
        while (n > 1)
        {
            if (n % 2 != 0)
            {
                return false;
            }
            
            n = n / 2;
        }
        
        return true;
    }
