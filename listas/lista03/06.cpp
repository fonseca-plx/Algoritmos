#include <iostream>
#include <iomanip>
#include <cmath>

struct coordenada {
    double x, y;
};

double menor_distancia(coordenada pontos[], int n) {
    double cordx = pontos[0].x - pontos[1].x;
    double cordy = pontos[0].y - pontos[1].y;
    double d = hypot(cordx, cordy);
    for (int i = 1; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            cordx = pontos[i].x - pontos[j].x;
            cordy = pontos[i].y - pontos[j].y;
            if (hypot(cordx, cordy) < d) {
                d = hypot(cordx, cordy);
            }
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
    std::cout << std::fixed << std::setprecision(4) << "\n" << distancia << std::endl;
    return 0;
}