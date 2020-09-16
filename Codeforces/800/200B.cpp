#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    float total = 100 * n;
    float fraction  = 0;
    for (int i=0; i<n; i++) {
        int current_drink;
        cin >> current_drink;

//        cout << "current_drink - " << current_drink << "\n";

        fraction += current_drink;
    }
    
    float res = (fraction / total) * 100;
    cout << res;
}
