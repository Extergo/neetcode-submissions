class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for (int num : nums) {
            auto result = seen.insert(num);

            if (result.second == false) {
                return true;
            }
        }

        return false;
    }
};