#include <iostream>
using namespace std;

int FindPivot (int arr[], int size) {
    int low = 0 , high = size -1;

    while(low < high) {
        if(arr[low] < arr[high]){
            return arr[low];
        }
        int mid = (low + high) / 2;

        if(arr[mid] > arr[high]){
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return arr[low];
}

int main() {
    int arr[] = {5,6,1,2,3,4};
    int size = 6;
    cout << FindPivot(arr , size) << endl;
    return 0;
}