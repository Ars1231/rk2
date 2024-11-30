#include <iostream>
#include <map>
#include <string>
#include <cctype>
using namespace std;

map<char, int> letters(const string &str) {
    map<char, int> letter;
    for (char ch : str) {
        if (isalpha(static_cast<unsigned char>(ch))) {
            ch = tolower(static_cast<unsigned char>(ch));
            letter[ch]++;
        }
    }
    return letter;
}

int main() {
    string str;
    cout << "Введите строку: ";
    getline(cin, str);
    map<char, int> result = letters(str);
    cout << "Количество букв:" << "\n";
    for (const auto &pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
