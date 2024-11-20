//Tam giac can, dac ben trong
#include <iostream>
using namespace std;

int main() {
    int h;

    // Nhap chieu cao cua tam giac
    do {
        cout << "Nhap chieu cao tam giac (h > 0): ";
        cin >> h;
        if (h <= 0) {
            cout << "Chieu cao khong hop le! Vui long nhap lai.\n";
        }
    } while (h <= 0);

    cout << "\nTam giac deu co chieu cao " << h << ":\n";
    cout << "-------------------\n";

    // Bat dau lam tam giac deu
    for (int i = 1; i <= h; i++) {
        // In khoang trang tu ben phai truoc moi cot
        for (int j = 1; j <= h - i; j++) {
            cout << " ";
        }
        // Sau do den * va "khoang trong" sen ke
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "-------------------\n";

    return 0;
}