#include <iostream>
using namespace std;

int main() {
   int t;
   cin >> t;

   while (t--) {
       int a;
       cin >> a;

       int b;
       cin >> b;

       int min_moves = 0;
       if (a >= b) {
         double remainder = a % b;
         cout << remainder << "\n";
       } else {
         double diff = abs(b-a);
         cout << diff << "\n";
       }

   }
}
