#include <iostream>

int distintos(int a[], int n, int b[]) {
    b[0] = a[0]; // primeiro valor distinto
    int count = 1;
    bool busca_iguais;
    for (int i = 1; i < n; i++) {
        busca_iguais = false;
        for (int j = 0; j < count; j++) {
            if (a[i] == b[j]) {
                busca_iguais = true;
                break;
            }
        }
        if (!busca_iguais) {
            b[count] = a[i];
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int result = distintos(a, n, b);
    std::cout << std::endl;
    std::cout << "Quantidade de números distintos: ";
    std::cout << result << std::endl;
    std::cout << b[0];
    for (int i = 1; i < result; i++) {
        std::cout << ", " << b[i];
    }
    std::cout << std::endl;
    return 0;
}