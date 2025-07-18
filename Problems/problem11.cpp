#include <iostream>
using namespace std;

int FirstOccrence(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end) / 2;
    int ans = -1;

   while(start <= end) {

    if(arr[mid] == key){
        ans = mid;
        // start = mid +1;
        end = mid - 1;
    }
    if(arr[mid] > key){
        end = mid -1;
    }
    else if(arr[mid] < key){
        start = mid +1;
    }
    mid = (start + end) / 2;
   }
   return ans;
    
}

int LastOccrence(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end) / 2;
    int ans = -1;

   while(start <= end) {

    if(arr[mid] == key){
        ans = mid;
        start = mid +1;
        // end = mid - 1;
    }
    if(arr[mid] > key){
        end = mid -1;
    }
    else if(arr[mid] < key){
        start = mid +1;
    }
    mid = (start + end) / 2;
   }
   return ans;
    
}

int main(){
    int arr[] = {1,2,3,3,3,3,3,3,4,5};
    int size = 10;
    int key = 3;

    int first = FirstOccrence(arr , size , key) ;
    int last = LastOccrence(arr , size , key) ;

    int total = (last - first) + 1;
    cout << "Total number of occrence  = " << total << endl;
    cout << "First Occrence of 3 is in index of = " << first << endl;
    cout << "Last Occrence of 3 is in index of = " << last << endl;

}