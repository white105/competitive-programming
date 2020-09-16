#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string games;
    cin >> games;

    int anton_wins = 0;
    int danik_wins = 0;

    for (char c : games) {
        if (c == 'A') anton_wins++;
        if (c == 'D') danik_wins++;
    }

    if (anton_wins > danik_wins) cout << "Anton";
    else if (anton_wins == danik_wins) cout << "Friendship";
    else cout << "Danik";
}
