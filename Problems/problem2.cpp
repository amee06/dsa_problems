//find the missing number from array

#include <iostream>
#include <vector>
using namespace  std;

int MissingNum(vector<int> nums) {
    int ans = 0;
    int size = nums.size();
    int n = size = 1; 

    for(int i = 0; i <= n; i++){
        ans = ans ^ i;
    }

    for(int val : nums){
        ans = ans ^ val;
    }

    return ans;
}

int main(){

    vector<int> nums = {1,2,3,5};
    cout << "Answer = " << MissingNum(nums);

    return 0;
}

