//sub-array of programe
#include <iostream>
using namespace std;

int main(){
    int arr1[] = {10,16,13,19,50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {19,10,16,50,47};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    for(int i = 0; i < size2; i++)
    {
        bool found = false; 

        for(int j = 0; j < size1 ; j++)
        {   
            if(arr2[i] == arr1[j]){
               found = true;
            } 
        }
        
            if(!found){
              cout << "false"; 
              return 0;     //if element is not found in array2 then immaditanly stop the program and return false only 
            }
    }
    cout << "true";
    
    return 0;
}