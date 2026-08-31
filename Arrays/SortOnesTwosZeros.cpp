//sort an array of 0s , 1s and 2s using dutch flag algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Array {
    public:
        vector<int> sortonestwosandzeros(vector<int> nums){

            int l = 0;
            int mid = 0;
            int right = nums.size()-1;
            while(mid<=right){
                if(nums[mid]==0){
                    swap(nums[mid] , nums[l]);
                    mid++;
                    l++;
                }
                else if(nums[mid]==1){
                    mid++;
                }
                else{
                    swap(nums[mid] , nums[right]);
                    right--;

                }
            }

            return nums;

            

        }
};

