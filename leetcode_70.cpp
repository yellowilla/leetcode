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
