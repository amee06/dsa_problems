#include <iostream>
using namespace std;

void PrintArray(int arr[] , int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void AlternativeReverce(int arr[] , int size) {

    for(int i=0 ; i < size ; i = i+2){
        if(i+1 < size) {
        swap(arr[i] , arr[i+1]);
        }    
        // if(i+1 == size){
        //     swap(arr[i] , arr[i+1]);
        // }
    }
}

void Swap(int n1 , int n2){
    cout << "Before swapping = " << n1  << " " << n2  << " " << endl;
    

    int temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "After swapping = " << n1  << " " << n2  << " " << endl;
    
}


int main(){
    int arr[] = {14,56,23,48,98};
    int size = 5;

    AlternativeReverce(arr , size);
    PrintArray(arr,size);

    Swap(3,7);
    return 0;
}