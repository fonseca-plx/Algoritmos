#include <iostream>
using namespace std;

int main() {
    int m, p, qtd, df;

    cin >> m >> p;

    if (m%p==0) {
        qtd = (m/p) + 1;
        df = p;
    } 
    else {
        qtd = (m/p) + 2;
        df = m%p;
    }

    cout << qtd << "\n" << df << endl;

    return 0;
}