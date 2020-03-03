class Solution 
{
public:
    int nthUglyNumber(int n) 
    {
        int res;
        
        vector<int> path(1, 1);
        int a = 0, b = 0, c = 0;
        for (int i = 1; i < n; i++)
        {
            int cur = min( path[a] * 2, min( path[b] * 3, path[c] * 5 ) );
            path.push_back(cur);
            if (cur == path[a] * 2)
            {
                a++;
            }
            if (cur == path[b] * 3)
            {
                b++;
            }
            if (cur == path[c] * 5)
            {
                c++;
            }
        }
        
        res = path.back();
        return res;
    }
};
