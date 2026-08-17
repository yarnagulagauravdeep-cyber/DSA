#include <iostream>
#include <vector>
using namespace std;

class Array{
    public:
        int SecondLargest(vector<int>& nums){
            int max = nums[0];
            int second_max = -1;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] > max){
                    second_max = max;
                    max = nums[i];
                }
                else if(nums[i] > second_max && nums[i] < max){
                    second_max = nums[i];
                }
            }
            return second_max;
        }
};

