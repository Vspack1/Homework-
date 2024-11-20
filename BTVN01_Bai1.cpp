//Tinh tong cac so
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, n;
    double S = 0;

    // Nhap gia tri x va n
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    // Tinh tong S
    for (int i = 1; i <= n; i++) {
        S += pow(x, i);
    }

    // In ket qua cua S
    cout << "Tong S = x^1 + x^2 + ... + x^" << n << " = " << S << endl;

    return 0;
}