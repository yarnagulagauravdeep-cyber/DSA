// find the given element using linear search
#include <iostream>
#include <vector>
using namespace std;

class Array{
    public:
        int MoveZerosToEnd(vector<int> nums , int ele){
            for(auto num : nums){
                if(num==ele){
                    return num;
                }
            }
            return -1;
            
        }
};