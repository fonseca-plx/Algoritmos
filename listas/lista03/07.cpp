#include <iostream>

bool igualdade(int a[], int n, int s) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] + a[j] == s) return true;
        }
    }
    return false;
}

int main() {
    int n, s;
    std::cin >> n >> s;
    int a[n];
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cout << std::endl;
    if (igualdade(a, n, s)) {
        std::cout << "Há dois números no array que somados dão igual a ";
        std::cout << s << std::endl;
    }
    else {
        std::cout << "Não há dois números no array que somados dão igual a ";
        std::cout << s << std::endl;
    }
    return 0;
}