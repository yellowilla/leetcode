class Solution {
public:
    int calculate(string s) {
        int res;
        int length = s.size();
        if (length == 0)
        {
            return res;
        }
        
        deque<int> nums;
        deque<char> ops;
        int cur_num = 0;
        for (int i = 0; i < length; i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else if (s[i] == '(' || s[i] == '+' || s[i] == '-')
            {
                ops.push_back(s[i]);
            }
            else if (isdigit(s[i]))
            {
                cur_num = cur_num * 10 + (s[i] - '0');
                if (i + 1 < length && !isdigit(s[i + 1]) || i + 1 == length)
                {
                    if (nums.empty() || !ops.empty() && ops.back() == '(')
                    {
                        nums.push_back(cur_num);
                        cur_num = 0;
                    }
                    else //ops不会为空
                    {
                        char op = ops.back();
                        int last_num = nums.back();
                        nums.pop_back();
                        if (op == '+')
                        {
                            nums.push_back(last_num + cur_num);
                        }
                        else //op == '-'
                        {
                            nums.push_back(last_num - cur_num);
                        }
                        ops.pop_back();
                        cur_num = 0;
                    }
                    
                }
            }
            else //when s[i] == ')'
            {
                
                if (ops.back() == '(')
                {
                    ops.pop_back();
                }
                
                if (!ops.empty() && ops.back() != '(')
                {
                    char op2 = ops.back();
                    int cur_1 = nums.back(); nums.pop_back();
                    int cur_2 = nums.back(); nums.pop_back();
                    if (op2 == '+')
                    {
                        nums.push_back(cur_2+ cur_1);
                    }
                    else //op2 == '-'
                    {
                        nums.push_back(cur_2 - cur_1);
                    }
                    ops.pop_back();
                }
            }
            
        }
        
        if (!ops.empty())
        {
            char op2 = ops.back();
            int cur_1 = nums.back(); nums.pop_back();
            int cur_2 = nums.back(); nums.pop_back();
            if (op2 == '+')
            {
                nums.push_back(cur_2 + cur_1);
            }
            else //op2 == '-'
            {
                nums.push_back(cur_2 - cur_1);
            }
            ops.pop_back();
        }
        
        res = nums.back();
        return res;
    }
};
