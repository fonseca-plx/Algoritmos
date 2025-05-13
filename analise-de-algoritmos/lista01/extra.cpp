#include <iostream>
#include <fstream>
#include <chrono>
#include <string>
#include <cmath>

bool prime(long long n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    long long limite = static_cast<long long>(sqrt(n));
    for (long long d=3; d <= limite; d += 2) {
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

    std::ofstream outfile("saida_extra.txt");
    if (!outfile.is_open()) {
        std::cerr << "Error creating output file: saida_extra.txt" << std::endl;
        return 1;
    }

    long long n;
    while (infile >> n) {
        auto beg = std::chrono::high_resolution_clock::now();
        bool p = prime(n);
        auto end = std::chrono::high_resolution_clock::now();

        auto dur = end - beg;
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);

        if (p)
            std::cout << n << " is prime" << std::endl;
        else
            std::cout << n << " is not prime" << std::endl;

        std::cerr << n << " processing time: " << duration.count()
                  << " microseconds(s)" << std::endl;

        outfile << duration.count() << std::endl;
    }

    infile.close();
    outfile.close();
    std::cout << "Processing times saved to: saida_extra.txt" << std::endl;

    return 0;
}