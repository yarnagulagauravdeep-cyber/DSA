//find the number that appears once and other numbers appear twice
#include <iostream>
#include <vector>
using namespace std;

class Array{
    public:
        int FindThatAppearsOnce(vector<int> nums){
            int i = 0;
            for( auto num : nums){
                i ^= num;
            }
            return i ;
            
        }
};