#include <iostream>
using namespace std;

int main(){
    int age = 18;
    cout << "Enter Your age : ";
    cin >> age;
    if(age > 18){
        cout << "You are adult";
    } else if(age > 0 && age < 18) {
        cout << "You are child";
    }
    else{
        cout << "Not a valid age";
    }


    //SWITCH CASE EX - 1 
    int day = 2;
    switch(day) {
        case 1 : cout << "Monday";
        break;
        case 2 : cout << "Tuesday";
        break;
        case 3 : cout << "Wednesday";
        break;
        case 4 : cout << "Thrusday";
        break;
    }
    //ex - 2
    int choise;
    cout << "\n Enter your fav color => ";
    cin >> choise;

    switch(choise){
        case 1 :
            cout << "Your fav color is pink";
                break;
        case 2 : 
            cout << "Your fav color is purple";
                break;
        case 3 :
            cout << "Your fav color is yello";
                break;
        default :
            cout << "You like all colors";
    }

    if(choise == 1){
        cout << "\nMay be you are cute girl";
    } else if(choise == 2){
        cout << "\n Are you a fan of BTS army ?";
    } else if (choise == 3){
        cout << "\n very Aesthetic choise";
    } else {
        cout << "\n you are very awsome!!";
    }

    //ex 3
    char opr;
    float num1,num2;
    cout << "Enter any two number \n num1 = \n num2 = ";
    cin >> num1 >> num2;
    cout << "\nEnter operator to perform calculation = ";
    cin >> opr;

    switch (opr)
    {
    case '+':
        cout << num1 << "+" << num2 << " = " << num1+num2;
        break;
    case '-' :
        cout << num1 << "-" << num2 << " = " << num1-num2;
        break;
    case '*' :
        cout << num1 << "*" << num2 << " = " << num1*num2;
        break;
    case '/':
        cout << num1 << "/" << num2 << " = " << num1/num2;
        break;
    default:
        cout << "enter the valid operator";
        
    }

    return 0;
}