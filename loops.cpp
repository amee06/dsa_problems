#include <iostream>
using namespace std;

//for loop

int main(){

    for(int i = 0; i <= 15; i++){
        cout << i << endl;
    }
    for(int i = 1; i <= 5; i++){
        cout << "Hello world\n";
    }
   
    // int sum = 0;
    // int num;
    // cout << "enter the number = ";
    // cin >> num;

    // for(int i = 1; i <= num; i++){
    //     sum = sum + i;
    // }

    // cout << "Sum of natural number = " << sum << endl;


//while loop

    int i = 1;
    while(i <= 5){
       cout << i++ << endl;
    }

    //sum of only positive nummber

    // int number;
    // int sumn = 0;
   
    // cout << "Enter the number = ";
    // cin >> number;

    // while(number >= 0){
        
    //     sumn += number;
    //     cout << "Enter the number = " ;
    //     cin >> number;
    // }
    
    // cout << "Sum of only positivi number = " << sumn << endl;
    

    //do while loop

    int j = 0;
    do{
        cout << j << endl;
        j++;
    } while (j <= 5);
    
    //sum of positivi number only

    int add = 0;
    int number;
    cout << "Enter the number = ";
    cin >> number;

    do{
        add+=number;
        cout << "Enter the number = ";
        cin >> number;
    } while(number >= 0);

    cout << "Sum of positive number = " << add << endl;

    return 0;
}