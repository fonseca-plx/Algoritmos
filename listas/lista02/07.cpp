#include <iostream>

int menor(int a, int b) {
    if (a < b) return a;
    return b;
}

bool primos(int a, int b) {
    int n = menor(a, b);
    for (int i = 2; i <= n; i++) {
        if (a%i == 0 && b%i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    if (primos(a, b)) {
        std::cout << "São primos entre si" << std::endl;
    }
    else {
        std::cout << "Não são primos entre si" << std::endl;
    }
    return 0;
}