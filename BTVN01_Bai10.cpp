//Viet chuong trinh in ra hinh vuong dac ben trong
#include <iostream>
using namespace std;

int main() {
    int n;

    // Nhap kich thuoc cua hinh vuong
    do {
        cout << "Nhap kich thuoc hinh vuong (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "Kich thuoc khong hop le! Vui long nhap lai.\n";
        }
    } while (n <= 0);

    cout << "\nHinh vuong " << n << "x" << n << ":\n";
    cout << "-------------------\n";

    // Bat dau in hinh vuong theo tung cot
    for (int i = 1; i <= n; i++) {
        // Bat dau in hinh vuong theo tung dong
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "-------------------\n";

    return 0;
}