#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string res = "";

    int min_operations = 0;
    for (int i=0; i<n-1; i+=2) {
        char first_char = s.at(i);
        char second_char = s.at(i+1);

        if (first_char == second_char) {
            if (first_char == 'a') {
                res += "ba";
            } else {
                res += "ab";
            }
            min_operations++;
        } else {
            res += first_char;
            res += second_char;
        }
        
    }

    cout << min_operations << endl;
    cout << res;
    return 0;
}

