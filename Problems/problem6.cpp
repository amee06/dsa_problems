#include <iostream>
using namespace std;

int main(){

    int num = 2446;
    int org = num;
    int count = 0;

     while(num != 0){
        int digit = num % 10;
        num = num/10;
        if( digit != 0 && org % digit == 0){
            count++;
        }
        cout << count;
    }
    
    return 0;
}

 