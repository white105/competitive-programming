#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> nums;

    int p;
    cin >> p;

    for (int i=0; i<p; i++) {
        int p_level;
        cin >> p_level;

        nums.insert(p_level);
    }

    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int q_level;
        cin >> q_level;

        nums.insert(q_level);
    }

    for (int i=1; i<=n; i++) {
        if (nums.count(i) == 0) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
    return 0;

}
