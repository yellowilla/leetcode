class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res;
        
        deque<int> path;
        int lth = tokens.size();
        int m, n;
        for (int i = 0; i < lth; i++)
        {
            if (tokens[i] == "+")
            {
                m = path.back(); path.pop_back();
                n = path.back(); path.pop_back();
                path.push_back(m + n);
            }
            else if (tokens[i] == "-")
            {
                m = path.back(); path.pop_back();
                n = path.back(); path.pop_back();
                path.push_back(n - m);
            }
            else if (tokens[i] == "*")
            {
                m = path.back(); path.pop_back();
                n = path.back(); path.pop_back();
                path.push_back(m * n);
            }
            else if (tokens[i] == "/")
            {
                m = path.back(); path.pop_back();
                n = path.back(); path.pop_back();
                path.push_back(n / m);
            }
            else
            {
                path.push_back(stoi(tokens[i]));
            }
        }
                                   
        res = path.front();
        return res;
    }
};
