#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, unsigned int> whereHaveIseenIt;
       int diff;
       int index;
       
        for (size_t i = 0; i < nums.size(); i++) {            

            diff = target - nums[i];

            if (whereHaveIseenIt.contains(diff)) {
                index = whereHaveIseenIt[diff];
                return {index, (int)i};
            }

            //filling it
            whereHaveIseenIt[nums[i]] = i;
        }

       return {-1,-1};
    }
};
