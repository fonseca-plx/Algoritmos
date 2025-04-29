#include <iostream>

long long maior_soma(long long a[], long long n, long long& n1, long long& n2) {
    long long somador = a[0] + a[1];
    for (int i = 0; i < n; i++) {
        if ((i+1) < n && a[i] + a[i+1] > somador) {
            somador = a[i] + a[i+1];
            n1 = a[i];
            n2 = a[i+1];
        }
    }
    return somador;
}

int main() {
    long long n, n1 = 0, n2 = 0;
    std::cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    long long resultado = maior_soma(a, n, n1, n2);
    std::cout << "\nMaior soma consecutiva: " << n1 << " + ";
    std::cout << n2 << " = " << resultado << std::endl;
    return 0;
}