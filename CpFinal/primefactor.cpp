
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to find its unique prime factors: ";
    cin >> n;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1) cout << n << endl;

    return 0;
}
