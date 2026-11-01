impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        for outer_state in 0..nums.len() {
            
            for i in outer_state + 1..nums.len() {
                if nums[outer_state] == nums[i] {
                    return true;
                }
            }
        }
        false
    }
}