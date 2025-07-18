//remove the duplicate element

#include <iostream>
using namespace std;

int RemoveDup(int arr[] , int size){

    int ans = 0; 
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i]; 
    }
    return ans;
}


int main(){

    int arr[] = {23,23,45,89,89,45,1};
    int size = 7;

   cout << RemoveDup(arr , size);
}

