#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << endl;
        int n;
        cin >> n;

        string num = to_string(n);

        int num_zeros = 0;

        for (int i=0; i<num.length(); i++) {
           char c = num.at(i);
           if (c == '0') {
                num_zeros++;
            } 
            
        }

        int res = num.length() -  num_zeros;
        cout << res << endl;


        for (int i=0; i<num.length(); i++) {
            char c = num.at(i);
            if (c != '0') {
                int p = c-'0';
                cout << p * pow(10, (num.length()-1-i)) << " ";
            } 
        }

    }

    return 0;
}
