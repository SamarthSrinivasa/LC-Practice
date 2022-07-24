//First Solution

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums.at(i) == nums.at(i - 1)) {
                return true;
            }
        }
        return false;
    }
};

//Success
//Details 
//Runtime: 191 ms, faster than 16.70% of C++ online submissions for Contains Duplicate.
//Memory Usage: 46.7 MB, less than 78.99% of C++ online submissions for Contains Duplicate.
