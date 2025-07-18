#include <iostream>
#include <vector>
using namespace std;

int main(){
    
vector<int> vec = {5,4,12,98,6,3};
cout << "size of vector = " << vec.size() << endl;

for(int val : vec) {
    cout << val << endl;
}

vec.push_back(25); //add new element in last in array
vec.push_back(5);

cout << "after push back size = " << vec.size() << endl;
vec.pop_back(); //remove last element from array
vec.pop_back();
cout << "after pop back size = " << vec.size() << endl;

cout << "print first value of array = " << vec.front() << endl;
cout << "print last number of array = " << vec.back() << endl;

cout << "to print vector element by index = " << vec.at(3) << endl ;



//difference between size vs capacity

vector<int> vec;
vec.push_back(3);
vec.push_back(15);
vec.push_back(6);
vec.push_back(96);
vec.push_back(66);

cout << "Size of vector = " << vec.size() << endl;
cout << "Capacity of vactor = " << vec.capacity() << endl;

return 0;

}