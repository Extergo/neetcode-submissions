impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        let mut record = HashSet::new();
        for num in nums {
            if record.contains(&num) {
                return true;
            } else {
             record.insert(num);
            }
        }

        false
    }
}