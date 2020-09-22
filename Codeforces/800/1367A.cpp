#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        string b;
        cin >> b;

        string res = "";
        
        for (int i=0; i<b.length(); i+=2) {
            res += b.at(i);
        }

        res += b.at(b.length()-1);
        cout << res << endl;
    }
    
    return 0;
}
