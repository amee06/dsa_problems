#include <iostream>
using namespace std;

int main(){
    cout << "c++\n";

    //DATATYPES
    int num = 5;
    num = 15;
    char MyChar = 'a\n';
    cout << MyChar;
    double floteNum = 15.236;
    cout << floteNum << "\n";
    bool Mybool = true;
    cout << Mybool;
    cout << endl;
    string Mytext = "Hello \n";
    cout << Mytext;


    //types of delacring variable
    string name = "Amee";
    int age = 19;

    cout << "My name is " << name << " I am " << age << " year old. \n"; 


    //variables 

    //sum of 2 variable
    int a = 10;
    int b = 20;
    int sum = a + b;

    cout << "sum = " << sum;         //we have to use diuble " " because ' ' not valid for this.

    int x,y,z;
    x = y = z = 20;
    cout << endl;
    cout << "Sum of treee number = " << x + y + z << "\n";

    //change and update their value
    int q = 1;
    cout << "befor update = " << q;
    cout << endl;
    q =  10;
    cout << "after update =" << q;
    cout << endl;
    
    //const variable

    // const int x = 1111;
    // cout << x;
    // x = 2222;        //const variable did not update their value
    // cout << x;

    //user input
    int p ;
    cout << "Enter the number => ";
    cin >> p;
    cout << "your number is :" << p;
    return 0;
}