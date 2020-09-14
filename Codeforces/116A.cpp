#include <iostream>
using namespace std;

int main() {
    int num_stops;
    cin >> num_stops;

    int current_passengers = 0;
    int max_passengers = 0;
    for (int i=0; i<num_stops; i++) {
        int exit;
        cin >> exit;
        int enter;
        cin >> enter;

        current_passengers -= exit;
        current_passengers += enter;

        max_passengers = std::max(max_passengers, current_passengers);
    }

    cout << max_passengers;
}
