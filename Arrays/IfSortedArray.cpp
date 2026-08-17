#include <iostream>
#include <vector>
using namespace std;

class Array {
    public:
        bool IsSortedArray(vector<int>& nums){
            int n = 0;
            bool isSorted = true ;
            while(n < nums.size()-1){
                if(nums[n]>nums[n+1]){
                    return false;
                }
                n++;

            }
            return true

        }
};

