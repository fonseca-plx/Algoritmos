#include <iostream>

int soma(unsigned int a, unsigned int b) {
    unsigned int r = a + b;
    return r;
}

int main() {
    unsigned int a, b;
    std::cin >> a >> b;
    unsigned int s = soma(a, b);
    std::cout << s << std::endl;
    return 0;
}