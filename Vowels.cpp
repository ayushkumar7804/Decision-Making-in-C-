/* Ayush Yadav
 24070123028*/

#include<iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter the character to check" << endl;
    cin >> a;

    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) {
        if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' ||
            a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            cout << "The character is " << a << " & Vowel" << endl;
        else
            cout << "The character is " << a << " & Consonant" << endl;
    } else {
        cout << "The character is not an alphabet letter" << endl;
    }

    return 0;
}

// OUTPUT
// Enter the character to check
// I
// The character is I & Vowel

// Enter the character to check
// 23
// The character is not an alphabet letter
