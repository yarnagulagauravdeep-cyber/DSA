// Remove duplicates from the sorted array
#include <iostream>
using namespace std;

class Array {
    public:
        vector<int> RemoveDuplicates(vector<int> nums){
            int n = 0 ;
            for(num : nums){
                if(nums[n]!=num){
                    n++;
                    nums[n]=num;
                }
            }
            return nums;
            

        }

};