func moveZeroes(nums []int) {
    length := len(nums)
    l1 := 0
    l2 := 0
    for ; l1 <= l2 && l2 < length; {
        if (nums[l2] == 0){
            l2++
            continue
        }
        
        if (nums[l1] == 0) {
            nums[l1] = nums[l2]
            nums[l2] = 0
            l1++
            l2++
        } else{
            l1++
            if (l2 < l1) {
                l2++
            }
        }
    }
}
