class Solution {
    public boolean hasDuplicate(int[] nums) {
        for (int o = 0; o < nums.length; o++) {
            for (int i = o + 1; i < nums.length; i++) {
                if (nums[o] == nums[i]) {
                    return true;
                }
            }
        }
        return false;
    }
}