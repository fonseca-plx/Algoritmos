#include <iostream>
#include <cmath>

bool primo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    int limite = static_cast<int>(sqrt(num));
    for (int i = 3; i <= limite; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int conta_primos(int a[], int n, int primos[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (primo(a[i])) {
            primos[count] = a[i];
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    int a[n], primos[n]; // n corresponde a maior quantidade possível de primos
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int resultado = conta_primos(a, n, primos);
    std::cout << "\nQuantidade de n primos: " << resultado << std::endl;
    if (resultado > 0) {
        std::cout << primos[0];
        for (int i = 1; i < resultado; i++) {
            std::cout << ", " << primos[i];
        }
        std::cout << std::endl;
    }
    return 0;
}