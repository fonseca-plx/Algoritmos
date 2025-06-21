#include <stdio.h>
#include "circulo.h" // TAD circulo

int main() {
    Circulo *c = circ_cria(5, 5, 2);
    float area = circ_area(c);
    printf("Area do circulo: %.2f\n", area);
    Ponto *p = pto_cria(4, 4);
    if (circ_interior(c, p) == 0) {
        printf("Ponto fora do círculo\n");
    } 
    else {
        printf("Ponto dentro do círculo\n");
    }
    pto_libera(p);
    circ_libera(c);
    return 0;
}