void moveZeroes(int* nums, int numsSize) {//数组为nums[]
    int i, j;
    for(i = 0, j = 0; j < numsSize; j++)
        {
            if(nums[i])
                i++;
            else if(nums[j])
           {
               nums[i] = nums[j];
               nums[j] = 0;
               i++;
           }
        }
}
