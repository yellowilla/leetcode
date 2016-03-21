class Solution {
public:
    int climbStairs(int n) {
        int *s = new int[n];
        int ways;
        if(n == 1)
        return n;
        s[0] = 1;
        s[1] = 2;
        for(int i = 2; i < n; ++i)
        {
            s[i] = s[i - 1] + s[i - 2];
        }
        ways = s[n - 1];
        return ways;
    }
};




/*
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2)
            return n;
        else
            return climbStairs(n - 1) + climbStairs(n - 2);//第一次要么跨一步，要么跨两步
    }
};
/*复杂度为O(2^n),超时*/
*/
