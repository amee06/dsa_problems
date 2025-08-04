#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of line = ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "  * " ;
            // cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    //print characters
    //loop strat from 0
    for(int i = 0; i < n; i++){
        char ch = 'A';  //first letter is A in every line

        for(int j = 0; j <= n; j++){
            cout << ch << " ";
            ch = ch+1; // acrroding ASCII value if a = 60 then , a + 1 = 61 ==> b
        }
        cout << endl;
    }

    cout << endl;

    //print continu number
    int num = 1;
    char alpabate = 'a';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // cout << num << " ";
            // num++;
            cout << alpabate << " ";
            alpabate = alpabate + 1;
        }
        cout << endl;
        
    }

    cout << endl;

    //triangle partten
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){   //why i+1 ? ==> if j = i then when i = 0 and first condition will be wrong j < i so that j = 0 loops never runs and it give one less line then n so that if j=0 and 0 < 0+1 then the condition is true

            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;

    //tringle same number
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << i+1;
        }
        cout << endl;
    }

    cout << endl;

    //char partten
    char a = 'a';
    for(int i = 0; i < n; i++){
       
        for(int j = 0; j < i+1; j++){
            cout << a;
            // a = a+1;
        }
        cout << endl;
        a = a+1;
    }

    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < i+2; j++){
            cout << j << " ";
        }
        cout <<endl;
    }

    cout <<endl;

    //backword loop

    for(int i = 0; i < n; i++){
        for(int j = i +1; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    //floyd's triangle partten
    int number = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    cout << endl;

    //inverted triangle
    for(int i = 0; i < n; i++){ //outter loop
        for(int j = 0; j < i; j++){ //space loop
            cout << " ";
        }
        for(int j = 0;j < n-i;j++){ //number loop
            // cout << j;
            cout << i+1; //print like 1111 / 222 / 33 //4
        }
        cout << endl;
    }

    cout << endl;

    //character inverted triangle

    char chara = 'a';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < n-i; j++){
            cout << chara;
        }
        cout << endl;
        chara = chara + 1;
    }

    cout << endl;

    //pyramid pattern
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 1; j <= i+1; j++){
            cout << j;
        }
        //for(int j = 1; j <= i; j++)
        for(int j = i; j >=1; j--){
            cout << j;
        }
        cout << endl;
    }

    cout << endl;

    //hollow pyramid
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
            // cout << "*";
        }
        cout << "*";
        if(i!=0){
            for(int j = 0; j < 2*i-1; j++){
                cout << " ";
                // cout << "*";
            }
            cout << "*";
        }
        cout << endl;
    }
    
}