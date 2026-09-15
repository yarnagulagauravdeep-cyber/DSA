class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int min_ele = nums[0];
        int max_price = 0;
        for (int j = 0 ;j<nums.size();j++){

            max_price = max(max_price , nums[j]-min_ele);
            min_ele = min(min_ele , nums[j]);
            
        }
        
     return max_price;
    }
};
   