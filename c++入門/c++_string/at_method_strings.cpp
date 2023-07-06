/*

*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s1;
   string s2 {"Frank"};

   cout << s2[0] << endl; // F
   cout << s2.at(0) << endl; // F

   s2[0] = 'F';
   s2.at(0) = 'P';

   cout << s2 << endl;

   for (char c: s2)
        cout << c << endl;



    return 0;
}