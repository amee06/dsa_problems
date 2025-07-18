#include <iostream>
using namespace std;

int LinearSearch(int arr[] , int size , int target){

    for(int i = 0; i < size ; i++){
        if(arr[i] == target){
            return i; //return if target is in array
        }
        cout << endl;
    }
    return -1; //return if target is not in array
}

int main(){
   int arr[] = {42 , 23 , 56 , 85 , 23 , 47};
   int size = 6;
   int target = 50;

   cout << "Targeted element index = " << LinearSearch(arr , size , target);

   return 0;
}