#include<unordered_set>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> hashSet;
        for (auto num : nums) {
            auto result = hashSet.insert(num);
            if (!result.second) {
                return true;
            }
        }
        return false;
    }
};