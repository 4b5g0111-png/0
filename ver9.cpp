#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        string ans = "";

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 1) {
                ans += to_string(i);
                ans += "+";
            } else if (i % 3 == 2) {
                ans += to_string(i);
                ans += "--";
            } else {
                ans += to_string(i);
                ans += "***";
            }
        }

        cout << ans << endl;
    }

    return 0;
}