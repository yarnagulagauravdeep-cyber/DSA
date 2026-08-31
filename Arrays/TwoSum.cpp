# two sum (unsorted array)
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // value -> original index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if complement already exists in map
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            
            // Record the current number with its original index
            seen[nums[i]] = i;
        }
        
        return {};
    }
};