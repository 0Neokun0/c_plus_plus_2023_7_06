/*

*/
#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1;
    string s2 {"Nishant"};
    string s3 {s2};
    string s4 {"Nishant", 3};
    string s5 {s3, 0, 2};
    string s6 (3, 'X');
    
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s4 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;



    return 0;
}