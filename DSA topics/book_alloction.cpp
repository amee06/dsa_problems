#include <iostream>
#include <vector>
using namespace std;

int isValid(vector<int> &arr , int n , int m, int maxAllowedPage) {
    int student = 1 , pages = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxAllowedPage) {   //more page then maxpage then false
            return false;
        } 

        if(pages + arr[i] <= maxAllowedPage) {
            pages += arr[i]; //give this to current student
        } 
        else {
            student ++;  //give this to next student
            pages = arr[i];  //continu from n
        }
    }
    return student > m ?false : true;  //if student > allowstudent(m)=>false
}



int allocateBooks(vector<int> &arr , int n , int m){
    if(m > n) {   //student is greater then pages
        return -1;
    }

    int sum = 0;
    for(int i =0; i < n; i++){
        sum += arr[i];
    }

    int ans = -1;
    int start = 0, end = sum; //range of possible ans

    while(start <= end){
        int mid = (start + end) / 2;
        cout << "Trying maxAllowedPage = " << mid << endl;

        if(isValid(arr,n,m,mid)){
            ans = mid; 
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return  ans;
}


int main(){

    vector<int> arr = {10,10,10,10};
    int n = 4, m = 2;

    cout << allocateBooks(arr,n,m) << endl;
    return 0;
}