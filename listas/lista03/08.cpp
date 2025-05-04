#include <iostream>

bool sorted(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    if (sorted(a, n)) std::cout << "Está ordenado" << std::endl;
    else std::cout << "Não está ordenado" << std::endl;
    return 0;
}