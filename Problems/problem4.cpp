#include <iostream>
using namespace std;

int ReverceNumber(int num){
    int ans = 0;
    while(num != 0){
        int digit = num%10;
        //to insure the answer is in the range of integer
        if((ans > INT16_MAX/10) || (ans < INT16_MIN/10)){
            return 0;
        }
        ans = (ans * 10) + digit;
        num = num/10;
    }
    return ans;
   
}
int main(){
    int num = 598;
    cout << "reverce number = " << ReverceNumber(num);

    return 0;
}