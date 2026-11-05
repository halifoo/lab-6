#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    for(int i = 0; i < text.length(); i++) {
        text[i] = toupper(text[i]);
    }

    cout << "Uppercase String: " << text;

    return 0;
}
