#include <iostream>
using namespace std;

int main() {
    int x;
    int a, b;

    cin >> a >> b;

    x = a + 1;

    if (a<b) {
        x = b + 1;
    }

    while (!(x%a==0 && x%b==0)) {
        x+=1;
    }

    cout << x << endl;

    return 0;   
}