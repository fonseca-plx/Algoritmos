#include <iostream>

struct Fracao {
    int numerador;
    int denominador;

    Fracao(int n, int d) : numerador(n), denominador(d) {}
};

int mmc(int a, int b) {
    int maior = a;
    if (a < b) {
        maior = b;
    }
    while (!(maior%a==0 && maior%b==0)) {
        maior += 1;
    }
    return maior;       
}

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fracao soma(Fracao &f1, Fracao &f2) {
    int m = mmc(f1.denominador, f2.denominador);
    int num = (f1.numerador * m / f1.denominador) + (f2.numerador * m / f2.denominador);
    int maxdiv = mdc(num, m);

    Fracao f3(num/maxdiv, m/maxdiv);
    return f3;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    Fracao f1(a, b);
    Fracao f2(c, d);

    Fracao f3 = soma(f1, f2);

    std::cout << "Soma das frações (f3): " << f3.numerador << "/" << f3.denominador << std::endl;
    return 0;
}