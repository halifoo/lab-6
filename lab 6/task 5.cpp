#include <iostream>
#include <string>
using namespace std;

int main() {

    string firstName, lastName, fullName;

    cout << "Enter First Name: ";
    getline(cin, firstName);

    cout << "Enter Last Name: ";
    getline(cin, lastName);

    fullName = firstName + " " + lastName;

    cout << "Full Name: " << fullName;

    return 0;
}
