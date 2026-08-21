// find the missing number in an 1 to n given numbers of array
#include <iostream>
#include <vector>
using namespace std;

class Array{
    public:
        int FindMissingOne(vector<int> nums , int n){
            int missingOne = -1 ;
            int sum = 0;
            int Sum = 0;
            for(auto num : nums){
                sum += num;
            }
            for(int i=1 ; i<=n ; i++){
                Sum += i;

            }
            missingOne = Sum - sum;
            return missingOne;
            
        }
};