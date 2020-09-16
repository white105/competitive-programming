#include <iostream>
using namespace std;

int main() {
    string user_name;
    cin >> user_name;

    int chars[26];
    for (int i=0; i<26; i++) {
        chars[i] = 0;
    }

    for (char c : user_name) {
        chars[c-'a']++;
    }

    int distinct_chars = 0;
    for (int i=0; i<26; i++) {
        if (chars[i] >= 1) distinct_chars++;
    }

    if (distinct_chars % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}
