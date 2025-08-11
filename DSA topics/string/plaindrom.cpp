#include <iostream>
using namespace std;

int main(){
    string name = "racecar"; //string in c++ like array of character
    int start = 0;  //it can access like name[0],name[1],name[start]...etc
    int end = name.size() - 1;
    bool isPalindrom = false;

    while(start < end){
        if(name[start] == name[end]){
            isPalindrom = true;
            break;
        }
        start ++;
        end --;
    }
    if(isPalindrom){   //that meance isPalindrom == true
        cout << name << " is plaindrom";
    } else {
        cout << name << " is not plaindrom";
    }

    return 0;
    
}