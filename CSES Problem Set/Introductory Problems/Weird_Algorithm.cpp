#include<bits/stdc++.h>

using namespace std;

long n;

int main() {
    cin >> n;

    while (n != 1) {
        cout << n << " ";

        if (n & 1)
            n = n*3 + 1;
        else
            n /= 2;
    }

    cout << 1 << " ";
}
