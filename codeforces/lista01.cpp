// Soma simples
/*
#include <iostream>
using namespace std;

int main() {
    int a, b, soma;

    cin >> a;
    cin >> b;

    soma = a + b;

    cout << soma << endl;
    return 0;
}
*/

// Ajuste de nota
/*
#include <iostream>
using namespace std;

int main() {
    double n, x;
    int nota_normalizada;

    cin >> n >> x;
    nota_normalizada = (x*100)/n;

    cout << nota_normalizada << endl;
    return 0;
}
*/

// Perímetro do retângulo
/*
#include <iostream>
using namespace std;

int main() {
    long long l1, l2, p;

    cin >> l1 >> l2;
    l1 = l1;
    l2 = l2;
    p = (2*l1)+(2*l2);
    cout << p << endl;

    return 0;
}
*/

// Mergulho

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, r, contador;

    cin >> n >> r;

    vector <int> retornaram(r);

    for (int i = 0; i < r; i++) {
        cin >> retornaram[i];
    }

    vector <int> n_retornaram;

    if (n != r) {
        for (int i = 1; i <= n; i++) {
            contador = count(retornaram.begin(), retornaram.end(), i);
            if (contador == 0) {
                n_retornaram.push_back(i);
            }
        }
        for (int i = 0; i < n_retornaram.size(); i++) {
            cout << n_retornaram[i] << " ";
        }
        cout << endl;
    } else {
        cout << "*" << endl;
    }

    return 0;
}