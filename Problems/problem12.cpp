//find squre root using binary search
#include <iostream>
using namespace std;

int FindRoot(int num ){
    int start = 0;
    int end = num;
    int ans = -1;
    
    while (start <= end)
    {
        int mid = (start + end) / 2;
        long long int squre = mid*mid;

        if(squre == num){
            ans = mid;
            break;
        }

        else if(squre > num){
            end = mid - 1;
        }

        else {
            
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int num = 36;
    cout << "root of " << num << " is " << FindRoot(36);

    return 0;
}