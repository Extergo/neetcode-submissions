impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        let mut record = HashMap::new();
        for num in nums {
            if record.contains_key(&num) {
                return true;
            } else {
             record.insert(num, num);
            }
        }

        false
    }
}