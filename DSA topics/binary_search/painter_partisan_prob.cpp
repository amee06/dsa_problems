#include <iostream>
#include <vector>
using namespace std;

int isPossible(vector<int> &arr,int n,int m,int maxTime){
    int painter = 1, boat = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxTime){
            return false;
        }

        if(arr[i] + boat <= maxTime){
            boat += arr[i];
        }

        else{
            painter++;
            boat = arr[i];
        }
    }
    return painter > m ?false:true;
}

int maxArray(vector<int> &arr,int n){
    int large = 0;
    for(int i = 0; i < n; i++){
        if(large < arr[i]){
            large = arr[i];
        }
        cout << "Large element = " << large << endl;
    }
    return large;
}

int paintTime(vector<int> &arr,int n,int m){
    if(m > n){
        return false;
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i]; 
    }

    int start = maxArray(arr,n) , end = sum;
    int ans = -1;
    
    while(start <= end){
       int mid = (start + end) / 2;
       cout << "trying mid = " << mid << endl;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1; //try to get more small number
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4 ,m =2;

    cout << "Answer = " << paintTime(arr,n,m) << endl;

    return 0;
}