class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        int left = 0; 
        int right = nums.size() - 1;
        int tmp;
        while(left != right)
        {
            while(nums[left] != val && left < right)
                left++;
            if(left == right)
                break;
            else{
                while(nums[right] == val && left < right)
                    right--;
                tmp = nums[left];
                nums[left] = nums[right];
                nums[right] = tmp;
            }
        }
        if(nums[nums.size() - 1] != val) left++;
        return left;
    }
};
