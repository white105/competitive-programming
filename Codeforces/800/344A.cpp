#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }

    int num_groups=0;

    string last_num;

    for (int i=0; i<n; i++) {
        string current_num;
        cin >> current_num;

        if (current_num != last_num) {
            num_groups++;
        }

        last_num = current_num;
    }

    cout << num_groups;
    return 0;
}
