#include <iostream>
#include <string>
using namespace std;

bool aplanumeric(char ch){
    if((ch >= '0' && ch <= '9') || 
    (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    }
    return false;
}

int palindrom(string name){
    
    int start = 0;
    int end = name.size() - 1;

    while(start < end){
        if(!aplanumeric(name[start])){ //not alpanumeric then move next
            start++;
            continue;
        }
         if(!aplanumeric(name[end])){
            end--;
            continue;
        }
        if(tolower(name[start]) != tolower(name[end])){
            return false;
        }
        //if alpanumeric then incress
            start++;
            end--;
        

    }
    return true;
}

int main(){
    string name = "Ac3?e3c&a";
    cout << palindrom(name);
    return 0;
}

//1 == true
//0 == false