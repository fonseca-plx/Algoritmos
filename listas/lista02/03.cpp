#include <iostream>
using namespace std;

double area_circulo(double diametro) {
    double pi = 3.14159;
    double area = pi*(diametro/2);
    return area;
}

int main() {
    double d, area;

    cin >> d;

    area = area_circulo(d);

    cout << area << endl;
    
    return 0;
}