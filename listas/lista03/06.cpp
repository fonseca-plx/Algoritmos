// resolve com pitágoras a² = b² + c² (hypot)
#include <iostream>
#include <iomanip>
#include <cmath>

struct coordenada {
    double x, y;
};

double menor_distancia(coordenada pontos[], int n) {
    double d;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; i++) {
            double cordx = pontos[i].x - pontos[j].x;
            double cordy = pontos[i].y - pontos[j].y;
            if ()
        }
    }
    return d;
}

int main() {
    int n;
    std::cin >> n;
    coordenada pontos[n];
    for (int i = 0; i < n; i++) {
        std::cin >> pontos[i].x >> pontos[i].y;
    }
    double distancia = menor_distancia(pontos, n);
    std::cout << std::fixed << std::setprecision(4) << distancia << std::endl;
    return 0;
}