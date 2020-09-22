#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    int time_left = 240 - k;
    
    int num_problems = 0;
    int problem_num = 1;

    while (time_left > (5 * num_problems) && problem_num <= n) {
        time_left = time_left - (problem_num * 5);
        problem_num++;
        num_problems++;

    }
    
    if (time_left < 0) cout << num_problems-1;
    else cout << num_problems;
    return 0;
}
