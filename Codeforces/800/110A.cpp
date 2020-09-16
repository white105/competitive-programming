#include <string>
#include <iostream>
using namespace std;

int main() {
    string  n;
    cin >> n;
    
    bool isLucky = true;
    for (char c : n) {
        if (c != '4' || c != '7') {
            isLucky = false;
        }
    }

    if (isLucky) {
        cout << "NO";
        return 0;
    }

    int lucky_nums = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            lucky_nums++;
            //cout << "lucky_nums : " << lucky_nums << "\n";
        }
    }   

    if (lucky_nums == 4 || lucky_nums == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
