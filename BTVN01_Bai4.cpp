//Tim tong cua n can lan
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    double S;

    // Nhap n va so lan can k
    do {
        cout << "Nhap n: ";
        cin >> n;
        cout << "Nhap so lan can k (k > 0): ";
        cin >> k;
        if (k <= 0) {
            cout << "So lan can phai lon hon 0!\n";
        }
    } while (k <= 0);

    // Tinh tong dau tien voi 1 so
    S = n;

    // Bat dau tang so lan k
    for (int i = 1; i <= k; i++) {
        S = sqrt(n + S);
    }

    // Ket qua la
    cout << "Ket qua S = " << S << endl;

    return 0;
}