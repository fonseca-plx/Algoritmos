#include <iostream>
using namespace std;

int main() {
    int lista[2];

    lista[0] = 5;
    lista[1] = 27;

    for (int i = 0; i < 2; ++i) {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}