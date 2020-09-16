#include <iostream>
using namespace std;

int main() {
   string s;
   cin >> s;

   string t;
   cin >> t;

   int s_len = s.length();
   int t_len = t.length();

   if (s_len != t_len) {
       cout << "NO";
       return 0;
   } else {
       int i = 0;
       int j = s_len-1;

       while (i < s_len && j >= 0) {
           if (s.at(i) != t.at(j)) {
               cout << "NO";
               return 0;
           }
           i++;
           j--;
       }

       cout << "YES";
   }
}

