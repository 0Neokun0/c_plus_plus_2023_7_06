/*
Sequence of characters
    - contiguous in memory
    - terminated by a null character
String literal
    - constant 
    - terminated with null character
    - sequence of characters in double quotes , e.g "this"

*/
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    //Start from below
    char first_name[20]{};
    char middle_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    cout << "Please Enter your first name: ";
    cin >> first_name;
    cout << "Please Enter your middle name: ";
    cin >> middle_name;
    cout << "Please Enter your last name: ";
    cin >> last_name;

    cout << "---------------------------------------" << endl;

    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters " << endl;
    cout << "your middle name, " << middle_name << " has " << strlen(middle_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, middle_name);
    strcat(full_name, " " );
    strcat(full_name, last_name);

    cout << "Your full names is : " << full_name << endl;

    return 0;
}