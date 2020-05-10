func removeDuplicates(nums []int) int {
    length:=len(nums)
    if (length <= 1){
        return length
    }
    
    j := 0
    for i := 1 ; i < length; i++{
        if(nums[i] != nums[i - 1]){
            j++;
            nums[j] = nums[i]
        }
    }
    nums = nums[:j]
    return (j+1)
}
