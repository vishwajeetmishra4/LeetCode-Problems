// TWO  SUM 
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You can assume that each input would have exactly one solution, and you may not use the same element twice. 
// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> ixs;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(ixs.find(complement) != ixs.end()){
                return vector<int> {i, ixs[complement]};
            }
            ixs[nums[i]] = i;
        }
        return vector<int> {};
    }
};