/*"&" - 按位与，同时为"1"时才为1；
  "|" - 按位或，>=1个为"1",则为1；
  "^" - 异或， 相异为1，同为0；
  "~" - 取反， 对一个二进制数取反，0变1,1变0；
  "<<" - 左移， 对一个二进制，全部左移若干位（左边丢弃，右补0）
                a = a<<2, a的二进制位左移2，
                若舍弃高位没有1，则相当于该数乘2；
  ">>" - 右移， 正数左补0，负数左补1，相当于除2；*/
  
  
  /*按位与
    1， 奇偶性判断 - a&1;
    2, 判断是否是2的正整数幂 - (!(n&(n-1)))&&n; */ 

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n)
        {
            n = n & (n - 1);
            count++;
        }
        return count;
    }
};

//////////////////////////////////////
public:
    int hammingWeight(uint32_t n) 
    {
        int res = 0;
        uint32_t cur = n;
        while (cur)
        {
            if (cur & 1)
            {
                res++;
            }
            cur = cur >> 1;
        }
        
        return res;
    }
