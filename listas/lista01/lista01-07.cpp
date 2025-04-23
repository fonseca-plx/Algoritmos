#include <iostream>
#include <vector>

using namespace std;

bool soma_pares(vector <int> lista, int s) {
    for (int i = 0; i < lista.size(); ++i) {
        for (int j = i + 1; j < lista.size(); ++j) {
            if (lista[i] + lista[j] == s) {
                return true; // Par encontrado (interrompe o laço)
            }
        }
    }
    return false; // Nenhum par encontrado
}

int main() {
    vector <int> lista = {4, 9, 7, -3, 5, 1};
    int s;

    cin >> s;

    bool teste = soma_pares(lista, s);
    cout << (teste ? "true" : "false") << endl;

    return 0;
}