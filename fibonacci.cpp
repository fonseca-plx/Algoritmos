#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n < 3) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int n, seq;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        seq = fib(i);
        cout << seq << ", ";
    }
    cout << endl;

    return 0;
}