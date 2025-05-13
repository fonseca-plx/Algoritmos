#include <iostream>
#include <cmath>

int maior_dif(int a[], int n) {
    int maior = std::abs(a[0]-a[1]);
    for (int i = 1; i < n-1; i++) {
        if (std::abs(a[i]-a[i+1]) > maior) {
            maior = std::abs(a[i]-a[i+1]);
        }
    }
    return maior;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cout << "\n" << maior_dif(a, n) << std::endl;
    return 0;
}