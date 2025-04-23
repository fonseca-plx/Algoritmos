// calculo da raiz de um número (método babilônico)
#include <iostream>
#include <cmath>

double raiz_q_rec(double rc, double r, double n) {
    double dif = std::abs(rc - r);
    if (dif < 0.000001) {
        return r;
    }
    rc = r;
    return raiz_q_rec(rc, (rc + n/rc) / 2.0, n);
}

double raiz_q(double n) {
    double rc = n/2.0;
    double r = (rc + n/rc) / 2.0;
    return raiz_q_rec(rc, r, n);
}

int main() {
    double n;
    std::cin >> n;
    std::cout << raiz_q(n) << std::endl;
    return 0;
}