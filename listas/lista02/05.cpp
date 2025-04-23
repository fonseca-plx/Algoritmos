#include <iostream>
#include <vector>
using namespace std;

vector<int> encontrar_divisores(int n) {
    vector<int> divs;

    if (n % 2 != 0) {
        for (int i = 1; i <= n / 2; i += 2) { // se n for ímpar o loop desconsidera números pares uma vez que números ímpares só possuem divisores ímpares
            if (n % i == 0) {
                divs.push_back(i);
            }
        }
    } else {
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                divs.push_back(i);
            }
        }
    }

    divs.push_back(n); // todo número é divisível por si mesmo
    return divs;
}

int main() {
    int n;
    cin >> n;

    vector<int> divisores = encontrar_divisores(n);

    cout << "Quantidade de divisores: " << divisores.size() << endl;
    cout << "Divisores: ";
    for (int d : divisores) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}