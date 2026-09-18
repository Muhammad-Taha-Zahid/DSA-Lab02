#include <iostream>
#include <string>
using namespace std;

int main() {
    string* text = new string; //dynamic string of undefined length

    cout << "Enter a string: ";
    getline(cin, *text); //reads full line without length restrictions

    int length = (*text).length();
    for (int i = 0; i < length / 2; ++i) {
        char temporary = (*text)[i];
        (*text)[i] = (*text)[length - 1 - i];
        (*text)[length - 1 - i] = temporary;
    }

    cout << "Reversed string: " << *text << endl;

    // free heap memory
    delete text;
    text = nullptr; // set pointer to nullptr after deletion for safety
    return 0;
}