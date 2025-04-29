#include <iostream>

int conta_impares(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count += 1;
        }
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::cout << "\n" << conta_impares(a, n) << std::endl;

    return 0;
}