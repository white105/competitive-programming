#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    int total = 0;
    int richest = 0;

    int accounts[n];
    for (int i=0; i<n; i++) {
        int amount;
        cin >> amount;
        accounts[i] = amount;
        richest = max(richest, amount);
        total += amount;
    }

    int spend = 0;
    for (int i=0; i<n; i++) {
        spend += richest - accounts[i];
    }

    cout << spend;
    return 0;
}
