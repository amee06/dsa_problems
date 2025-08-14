#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str = "The pen";
    int size = str.length();
    string ans = "";

    reverse(str.begin(),str.end());   //reverce the string ==> nep ehT
    cout << str << endl;

    for(int i = 0; i < size; i++) {
        string word = " ";
        while(i < size && str[i] != ' ') {
            word = word + str[i];
            i++;    //first itreaction = nep
                    //secound itreaction = ehT
        }
        cout << word << endl;

        reverse(word.begin() , word.end());
        if(word.length() > 0){
            ans += "" + word;
        }
        cout << "answer in loop : " << ans << endl;
    }

    cout << "Final reverse string = " << ans << endl;
    
    return 0;
}