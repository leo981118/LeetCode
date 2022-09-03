#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> storedNumber;
        for(int i  = 0; i < nums.size(); i++) {
            if(storedNumber.find(target - nums[i]) != storedNumber.end()){
                return {storedNumber[target - nums[i]], i};
            } 
            else{
                storedNumber[nums[i]] = i;
            }                
        }
        return {-1, 1};
    }
};