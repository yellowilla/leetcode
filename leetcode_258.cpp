class Solution {
public:
    int addDigits(int num) {
        if(num < 10)
            return num;
        int temp;
        int sum;
        temp = 0;
        sum = num;
        while(sum / 10)
        {
            num = sum;
            sum = 0;
            while(num)   
            {
            temp = num % 10;
            sum += temp;
            num = num / 10;
            }
        }
        return sum;
    }
};
