#include <iostream>
#include <vector>

using namespace std;

int soma_pares(vector <int> lista, int s) {
    int conta_pares = 0;

    for (int i = 0; i < lista.size(); ++i) {
        for (int j = i + 1; j < lista.size(); ++j) {
            if (lista[i] + lista[j] == s) {
                conta_pares += 1;
            }
        }
    }
    return conta_pares;
}

int main() {
    vector <int> lista = {4, 9, 7, -3, 5, 1, 6, 11, 2};
    int s;

    cin >> s;

    int resultado = soma_pares(lista, s);
    cout << resultado << endl;

    return 0;
}