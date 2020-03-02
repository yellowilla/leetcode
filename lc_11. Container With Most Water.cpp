class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        
        int length = height.size();
        if (length <= 1)
        {
            return res;
        }
        
        int l = 0; 
        int r = length - 1;
        while (l < r)
        {
            int cur_s = min(height[l], height[r]) * (r - l);
            if (res < cur_s)
            {
                res = cur_s;
            }
            
            if (height[l] >= height[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        
        return res;
    }
};
