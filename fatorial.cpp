#include <iostream>
using namespace std;

int fat(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fat(n - 1);
    }
}

int main() {
    int n, r;

    cin >> n;

    r = fat(n);

    cout << r << endl;
    return 0;
}