// maior e menor elemento de um array
#include <iostream>

int maior_array(int a[], unsigned int n) {
    int maior = a[0];
    int indice;
    for (unsigned int i = 1; i < n; ++i) {
        if (a[i] > maior) {
            maior = a[i];
            indice = i;
        }
    }
    return indice;
}

int menor_array(int a[], unsigned int n) {
    int menor = a[0];
    int indice;
    for (unsigned int i = 1; i < n; ++i) {
        if (a[i] < menor) {
            menor = a[i];
            indice = i;
        }
    }
    return indice;
}

int main() {
    unsigned int n;
    std::cin >> n;
    int a[n];
    for (unsigned int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int maior_indice = maior_array(a, n);
    int menor_indice = menor_array(a, n);
    std::cout << "\n" << "Maior elemento: " << a[maior_indice]; 
    std::cout << "\n" << "Posição: " << maior_indice;
    std::cout << "\n" << "Menor elemento: " << a[menor_indice]; 
    std::cout << "\n" << "Posição: " << menor_indice << std::endl;
    return 0;
}