//cancle the same number from array

#include <iostream>
#include <vector>
using namespace std;

int SingleNumber(vector <int> nums){
    int ans = 0;

    for(int val : nums){
        ans = ans ^ val;
    }

    return ans;
}

int main(){
    vector<int> nums = {1,4,2,1,2 ,4 ,9};
    cout << "Answer = " << SingleNumber(nums);

    return 0;
}