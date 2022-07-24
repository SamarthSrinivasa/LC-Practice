//First Solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(i) + nums.at(j) == target) {
                     vector<int> ans = {i, j};
                    return ans;
                }
            }
        }
        return nums;
    } 
};

//Success
//Details 
//Runtime: 793 ms, faster than 12.65% of C++ online submissions for Two Sum.
//Memory Usage: 10.2 MB, less than 71.85% of C++ online submissions for Two Sum.
