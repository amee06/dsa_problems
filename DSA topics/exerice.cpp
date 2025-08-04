#include <iostream>
using namespace std;

int main(){

//Ex .1 fibonacchi serice

    // int a = 0;
    // int b = 1;
    // int number;
    // cout << "Enter the number = ";
    // cin >> number;

    // for(int i = 2;i <= number; i++){
    //     cout << a << " ";
    //     int next = a + b;
    //     a = b;
    //     b = next;
    // }

    // //Ex . = factors of number
    // int num;
    // cout << "Enter any number = ";
    // cin >> num;
    
    // cout << "Factors of " << num << "is = "; 
    // for(int i = 1; i <= num; i++){
    //      if(num % i == 0){
    //         cout << i;
    //     }
    //  }
 
    //  //profit loss calculatore
    // float buy_price,sell_price,profit,loss;

    // cout << "\n Enter your buy price = ";
    // cin >> buy_price;
    // cout << "enter your sell price = ";
    // cin >> sell_price;

    
    // if(sell_price > buy_price){
    //     profit = sell_price - buy_price;
    //     cout << "Profit = " << profit;
    //     cout << "\nprofit percentage = " << (profit/buy_price)*100;
    // }
    
    // if(buy_price > sell_price){
    //     loss = buy_price - sell_price;
    //     cout << "loss = " << loss;
    //     cout << "\n loss percentage = " << (loss/buy_price)*100;
    // }
    
    //min of number
    int a,b;
    cout << "enter first number = ";
    cin >> a;
    cout << "enter secounde number = ";
    cin >> b;

    if(a > b){
        cout << "a is max";
    } else {
        cout << "b is max";
    }
    //  else {
    //     cout << "both number are equal";
    // }
    return 0;
}