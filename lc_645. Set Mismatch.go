func findErrorNums(nums []int) []int {
    res := make([]int, 2, 2)
    length := len(nums)
    path := make([]int, length + 1, length + 1)
    for _, value := range nums{
        if (path[value] != 1){
            path[value] = 1
        } else{
            res[0] = value
        }
    }
    
    for i := 1; i <= length; i++{
        if (path[i] != 1){
            res[1] = i
            //fmt.Println(i, path[i])
            break
        }
    }
    
    return res
}
