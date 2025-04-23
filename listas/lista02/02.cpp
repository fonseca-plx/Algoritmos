#include <iostream>
using namespace std;

unsigned int perimetro(int l1, int l2) {
    unsigned int per = (l1*2)+(l2*2);
    return per;
}

int main(){
    unsigned int l1, l2, per;

    cin >> l1 >> l2;

    per = perimetro(l1, l2);

    cout << per << endl;

    return 0;
}