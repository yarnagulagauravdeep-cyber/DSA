#include <iostream>
#include <vector>
using namespace std;

class Array {
    public:
        int PrintLargestElement(vector<int>& nums){
            int max_ele = nums[0];
            for ( int i = 0 ; i < nums.size() ; i++){
                if( nums[i] > max_ele ){
                    max_ele = nums[i];
                }
            }

            return max_ele;

        }
};

