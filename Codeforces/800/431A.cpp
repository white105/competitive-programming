#include <iostream>
#include <string>
using namespace std;

int main() {
    int a1;
    cin >> a1;
    int a2;
    cin >> a2;
    int a3;
    cin >> a3;
    int a4;
    cin >> a4;

    string s;
    cin >> s;

    int num_seconds = 0;

    for (char c : s) {
        if (c == '1') {
            num_seconds += a1;
        } else if (c == '2') {
            num_seconds += a2;
        } else if (c == '3') {
            num_seconds += a3;
        } else {
            num_seconds += a4;
        }
    }

    cout << num_seconds;
    return 0;
}
