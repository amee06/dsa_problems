#include <iostream>
using namespace std;

void DecimalTo(int desNum){
    int ans = 0;
    int power = 1;

    while(desNum > 0){
       int remainder = desNum % 2;
       desNum = desNum/2;
       
       ans += (remainder*power);
       power = power*10;

       //code explain for decimal 5
       // 5/2 = 2 => 1
       // 2/2 = 1 => 0
       // 1/2 = 0 => 1

       //ans = remainder * power
       // ans = 1 * 1 => 1
       //power*10
       // ans = 0*10 =>10
       //power*10*10
       // ans = 1*100 =>100
       
       //final answer ==> 100 10 1
       //                  1   0  1
    }
    cout << "Binary conversion = " << ans << endl;
}

void BinaryTo(int BinNum){
    int ans,power;
    ans = 0;
    power = 1; 

    while(BinNum > 0){
        int remainder = BinNum % 10;
        ans += remainder*power;
        //code explain for binary 101
       // remainder = binnum % 10;
       // 101%10 = give a single number as a remainder 
       // power = power*2
       //1*1  + 0*2  +  1*4 = 5

        //updated
        BinNum = BinNum/10; //remove one last number 
        power = power*2; // incress its power with 2
    }
    cout << "Decimal conversion = " << ans << endl;
}

int main(){

    DecimalTo(86);
    BinaryTo(1000110);
    return 0;
}