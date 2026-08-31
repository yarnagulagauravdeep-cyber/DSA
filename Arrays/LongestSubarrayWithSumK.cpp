//longestSubarray with length k (only for positive array)
class LongestSubarray {
public:
    int LongestSubarrayWithSumK(vector<int>& nums, int k) {
        
        int left = 0;
        int sum = 0;
        int longestSubarray = 0;

        for (int right = 0; right < nums.size(); right++) {
            
            sum += nums[right];

            while (sum > k && left <= right) {
                sum -= nums[left];
                left++;
            }

            if (sum == k) {
                longestSubarray = max(longestSubarray, right - left + 1);
            }
        }

        return longestSubarray;
    }
};