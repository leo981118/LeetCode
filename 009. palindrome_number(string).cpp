#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str1= to_string(x);  
        string str2= to_string(x);  
        for (int i = 0; i < str1.length(); i++){
            str2[i] = str1[str1.length() - i - 1];
        }
         
        if (str1 == str2){
            return true;
        }
        else{
            return false;
        }
    }
};