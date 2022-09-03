#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Create a map that will store vector's values as it's keys and vector's indices as its values
        map<int, int> storedNumber;     
        //if storedNumber[target-nums[i]] exist we can return i and storedNumber[target-nums[i]]
        for(int i  = 0; i < nums.size(); i++) {
            if(storedNumber.find(target - nums[i]) != storedNumber.end()){      
                return {storedNumber[target - nums[i]], i};
            } 
            else{
                //if it doesnt we add vector's value as  key, add vector's indice as value to the map 
                storedNumber[nums[i]] = i;
            }                
        }
        //return error
        return {-1, 1};
    }
};