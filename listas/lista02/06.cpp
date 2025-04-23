#include <iostream>
#include <cmath>

bool primo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    int limite = static_cast<int>(sqrt(n));
    for (int i = 3; i <= limite; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    if (primo(n))
        std::cout << "É primo" << std::endl;
    else
        std::cout << "Não é primo" << std::endl;

    return 0;
}