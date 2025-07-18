#include <iostream>
using namespace std;

void array_search( int arr[] ,int size , int target){

    for(int i = 0; i < size ; i++){
        if(arr[i] == target) {
            cout << i;
        } 
       
        cout << endl;
    }
    
    
}

int main(){

    int arr[] = {5 , 15 , 13 , 5 , 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    array_search(arr , size , target);
}