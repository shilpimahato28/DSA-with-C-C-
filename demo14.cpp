#include <bits/stdc++.h>
using namespace std;

void palindrome(int x) {
    int dup = x;
    int revNum = 0;

    while (x > 0) {
        int ld = x % 10;
        revNum = (revNum * 10) + ld;
        x = x / 10;
    }

    if (dup == revNum) {
        cout << "true";
    } else {
        cout << "false";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    palindrome(n);
}
