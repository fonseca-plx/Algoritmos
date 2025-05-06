#include <iostream>
#include <chrono>

bool prime(long long n) {
    int qty_divs = 0;
    for (long long d=1; d <= n; ++d) {
        if (n%d==0) qty_divs++;
    }
    if (qty_divs==2) return true;
    else return false;
}

int main() {
    long long n;
    std::cin >> n;

    auto beg = std::chrono::high_resolution_clock::now(); // início do cronômetro
    bool p = prime(n);
    auto end = std::chrono::high_resolution_clock::now(); // fim do cronômetro

    if (p) std::cout << n << " is prime" << std::endl;
    else std::cout << n << " is not prime" << std::endl;

    auto dur = end - beg; // tempo gasto para verificar se n é primo
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
    std::cerr << n << " processing time: " << duration.count() 
            << " microseconds(s)" << std::endl;
    return 0;
}