//find the length of max consecutive ones
#include <iostream>
#include <vector>
using namespace std;

class Array{
    public:
        int MaxConsecutiveOnes(vector<int> nums){
            int max = -1;
            int count = 0;
            for ( auto num : nums){
                if(num==1){
                    count++;
                    if(count>max){
                        max = count ;
                    }
                }
                else{
                    count = 0;
                }
            }
            return max;
        }
};