#include <iostream>
using namespace std;

int main(){
    string fn = "Amee";
    string ln = "Buddh";

    cout << fn + " " + ln;

    string num1 = "10";
    string num2 = "20";
    string sum = num1 + num2;
    cout << "\n" << sum;

    // string name = "amee";            it will give error
    // int num = 5;
    // cout << num + name;

    string name = "dhanashree Buddh";
    cout << "\nlenght of the string is = " << name.length();
    cout << "\n check if string is empty = " <<name.empty(); //return 0(flase) and 1(true).
    // name.clear();
    cout << "\n clear the string = " << name;
    cout << "\n my string = " << name[name.length() - 1];


    // Topics will be covered
    
// s.length()	Get string length
// s.empty() Check if string is empty
// s.clear() Clear content
// s.substr(pos, len) Get substring
// s.find("abc") Find substring position
// s.compare(s2) Compare strings
// s.append("abc")	Add to end
// s + "abc" Concatenation  == done
// s.erase(pos, len) Remove characters
// s.insert(pos, "abc") Insert substring
// reverse(s.begin(), s.end())

}
