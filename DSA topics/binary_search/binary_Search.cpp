#include <iostream>
using namespace std;

int BinarySearch(int arr[] , int size , int key) {
    int start = 0;
    int end = size-1;
    int mid = (start + end ) / 2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid-1;
        }
        else {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1; //if key is not found
}


int main() {
    int arr[] = {2,4,19,36,45,78};
    int size = 6;
    int key = 36;

   cout <<"Index of 36 is = " << BinarySearch(arr , size , key);

    return 0 ;
}