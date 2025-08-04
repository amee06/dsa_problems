#include <iostream>
using namespace std;

void Message(){
    cout << "Hello from function \n";

}

void DisplyNum(int num){
    cout << "This is number = " << num;
}



void sum(int num1,int num2){
    cout << "\nSUM = " << num1 + num2;
}
//other way of function int function type
int add(float a, float b){
    return (a + b); //it did not print anything you have to make a variable and store this function in that variable and print that variable to diaply this function
}
void DifferentData(int,float); //prototype ==> if you want to use function after delecration you have to use protype and after that you can able to write function after delecration

int Factorial(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial*i;
    }
    return factorial;
}

void changeX(int x){
    x = 2*x;
    cout << x;
}

void digitSum(int num){
    int digiSum = 0;

    while(num > 0){
        int lastDigit = num % 10;   //remainder apse //get the last digit
        num = num/10;       //last number ne kadse //remove the last digit

        digiSum += lastDigit;
    }
    cout << "\n Sum of digit = " << digiSum << endl;

}

void ncr(int n, int r){
     int factorial_n = Factorial(n);
     int factorial_r = Factorial(r);
    int minus = Factorial(n-r);

    int ncr = factorial_n/(factorial_r * minus);

    cout << "nCr  = " << ncr << endl;

}
void PrintPrimeNum(int n){
    cout << "Prime number of " << n << " = ";
    for(int i = 2; i <= n; i++){
        cout << i;
    }
}
void CheckPrimeNum(int num){
    if(num > 0 && num > 1){
        cout << "\n Number " <<num << " is prime number.";
    }else{
        cout << "\n Number " << num << " is not prime number.";
    }
}
int power(){
    int a,b;
    cout << endl << "Enter two number to find the power of them = ";
    cin >> a >> b;
    int ans = 1;
   

    for(int i = 0; i < b; i++){
        ans = ans * a;
    }

    return ans;
}
int FindAp() {
    int n;
    cout << "enter n = ";
    cin >> n;

    int Ap = (3*n) + 7;
    return Ap;
}
int PassByValue(int q){
   q++;
    cout << "Q used in function = " << q << endl;
}

int SumOfArray(){
    int n;
    cout << "Enter the size of array";
    cin >> n;

    int sum = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
         sum = sum + arr[i];
    }

     
    return sum;
}

int main(){

    Message();
    DisplyNum(58956);
    DifferentData(56,4887.545);
    int number1 = 9;
    int number = 10;
    sum(number1,number);
    //function by int datatype
    cout << "\n sum of int function = "<< add(3,2) << endl;
    cout << "factorial = " << Factorial(5) << endl;
    int x = 15;
    changeX(x);
    
    changeX(10);

    digitSum(333);
    ncr(8,2);
    PrintPrimeNum(5);
    CheckPrimeNum(-59);

    cout << "Answer = " << power() << endl;

    cout << FindAp() << endl;

    int q = 5;
    cout << PassByValue(5);
    cout << "Q in main function = " << q << endl;
    
   cout << "Sum od array = " << SumOfArray() << endl;

    return 0;
}

//function after delecration
void DifferentData(int num, float num2){
    cout << "\n this is integer = " << num;
    cout << "\n this is float = " << num2;
}


//types of function
// 1.call by value ==> copy of function (with different memory address) it is just copy of the function you can modify it's value by your own way.

// 2.call by referance ==> pass the original function (same memory address) if you modify or change anything it will change in original function too.
