#include <iostream>
using namespace std;

void ReverceArray( int arr[] , int size) {
   
    int start = 0;
    int end = size-1;
    
    while(start <= end) {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}




int main(){
    string arr[5] = {"amee","dhara","bhumi"};
    cout << arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size;

    for(int i = 0; i < size; i++){
        cout << arr[i];
        cout << endl;
    }
    //find the smallest number in the array

    int num[] = {20,9,10,50,37};
    //give the prefect size of array
    int s = sizeof(num)/sizeof(num[0]);
    cout << "size of array = " << s << endl;

    // //give give 20 5 interger value 5*4 = 20
    // int sz = sizeof(num);
    // cout << "size array take in memory = " << sz << endl;
    int lagreNum = num[0];
    int smallNum = num [0];
    int largeIdx = 0;

    for(int i = 0; i < s; i++){
        // lagreNum = max(num[i],lagreNum);
        // smallNum = min(num[i],smallNum);

        if(num[i] > lagreNum){
            lagreNum = num[i];
            largeIdx = i;
        }
        else if(num[i] < smallNum){
            smallNum = num[i];
        }

        //in-bulit function of that
        //min 
        //max
        
    }
    cout << "Largest number = " << lagreNum << " At index :" << largeIdx << endl;
    cout << "Smallest number = " << smallNum << endl;

    int number[] = {58,65,23,78,41};
    int sz = sizeof(number)/sizeof(number[0]);

    int largeIndex = 0;

    for(int i = 0; i < sz; i++){
        if(number[i] > number[largeIndex]){
            largeIndex = i;
        }
    }
    cout << "Large number of index = " << largeIndex;

    //reverce array
    int arr[] = {8 , 10 , 50 , 48 , 25 , 66};
    int size = sizeof(arr) / sizeof(arr[0]);
    ReverceArray(arr , size );
    //print an array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}