#include <iostream>
using namespace std;

int main(){
    int a,b;
    
    cout << "Enter first number =>";
    cin >> a;
    cout << "\n Enter secound number =>";
    cin >> b;
    cout << "\n a + b = " << a + b;
    cout << "\n a - b = " << a - b;
    cout << "\n a * b = " << a * b;
    cout << "\n a / b = " << a / b;

    auto w = "amee";
    cout << "\nauto keyword auto matically trate w as a string";

    //eaxample
    int item = 50;
    float cost_per_item = 9.5;
    double total_cost = item * cost_per_item;
    char currancy = '$';

    cout << "Number od item = " << item ;
    cout << "\n Cost per item = " << cost_per_item ;
    cout << "\n Total cost = " << total_cost ;
    cout << "\n currancy = " << currancy;
}