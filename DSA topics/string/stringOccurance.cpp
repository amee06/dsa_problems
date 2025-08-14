#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "daabcbaabcbc";
    string part = "abc";
    
        while(str.length() > 0 &&  str.find(part) < str.length()){
            // int start = str.find(part);
            // int end = part.length();
    
            // str.erase(start,end);
            str.erase(str.find(part),part.length()); //same output
        }

        cout << str;
        
    
    
    
       return 0;
    
}