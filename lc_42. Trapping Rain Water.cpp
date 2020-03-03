class Solution 
{
public:
    int trap(vector<int>& height) 
    {
        int res = 0;
        int length = height.size();
        if (length <= 2)
        {
            return res;
        }
        
        deque<int> path;
        for (int i = 0; i < length; i++)
        {
            while (!path.empty() && height[i] > height[path.back()])
            {
                int end = path.back();
                path.pop_back();
                
                if (path.empty())
                {
                    break;
                }
                
                int end_2 = path.back();
                res = res + (min(height[end_2], height[i]) - height[end]) * (i - end_2 - 1);
            }
            
            path.push_back(i);
        }
        
        return res;
    }
};
