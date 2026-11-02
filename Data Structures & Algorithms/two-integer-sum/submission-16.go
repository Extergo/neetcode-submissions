func twoSum(nums []int, target int) []int {
    seen := make(map[int]int, len(nums))

    for i, num := range nums {
        diff := target - num

        if index, ok := seen[diff]; ok {
            return []int{index, i}
        }

        seen[num] = i
    }

    return nil
}