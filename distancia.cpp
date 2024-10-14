#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, x2;
    double y, y2;
    double distancia;
    cout << "x: ";
    cin >> x;
    cout << "x2: ";
    cin >> x2;
    cout << "y: ";
    cin >> y;
    cout << "y2: ";
    cin >> y2;

    distancia = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));

    cout << "La distancia es : " << distancia << endl;

    return 0;
}
