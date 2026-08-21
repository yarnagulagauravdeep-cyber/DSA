//  left rotate an array
#include <iostream>
#include <vector>
using namespace std;

class Array{
    public:
        vector<int> LeftRotateAnArray(vector<int> nums , int k){
            k = k % nums.size();
            int i = 0;
            int j = k-1;
            while(i<j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
            i=k;
            j=nums.size()-1;
            while(i<j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;

            }
            i = 0;
            j = nums.size()-1;
            while(i<j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;

            }
            return nums;
            
            
        }

};
