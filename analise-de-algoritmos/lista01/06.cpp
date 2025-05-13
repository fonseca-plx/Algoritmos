#include <iostream>
#include <fstream>
#include <chrono>
#include <string>

bool prime(long long n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (long long d=3; d <= n/2; d += 2) {
        if (n%d==0) return false;
    }
    return true;
}

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    std::ifstream infile(filename);
    if (!infile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1;
    }

    long long n;
    while (infile >> n) {
        auto beg = std::chrono::high_resolution_clock::now();
        bool p = prime(n);
        auto end = std::chrono::high_resolution_clock::now();

        if (p)
            std::cout << n << " is prime" << std::endl;
        else
            std::cout << n << " is not prime" << std::endl;

        auto dur = end - beg;
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
        std::cerr << n << " processing time: " << duration.count()
                  << " microseconds(s)" << std::endl;
    }

    infile.close();
    return 0;
}