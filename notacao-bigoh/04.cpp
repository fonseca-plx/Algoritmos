#include <iostream>

int sublista(int a[], int n) {
    int somador = 1, len_sublista = 1;
    for (int i = 0; i < n-1; i++) {
        if (a[i+1] >= a[i]) {
            somador += 1;
        }
        else {
            somador = 1;
        }
        if (somador > len_sublista) {
            len_sublista = somador;
        }
    }
    return len_sublista;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cout << sublista(a, n) << std::endl;
    return 0;
}