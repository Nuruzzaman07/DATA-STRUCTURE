#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    string str;
    cout << "Enter a string of characters: ";
    getline(cin, str);

    cout << "Vowels in the string are: ";
    for (int i = 0; i < str.length(); i++) {
        if (isVowel(str[i])) {
            cout << str[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
