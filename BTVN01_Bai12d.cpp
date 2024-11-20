//Tam giac vuong can ben tren goc phai, dac ben trong
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

    cout << "\nTam giac vuong nguoc co chieu cao " << h << ":\n";
    cout << "-------------------\n";

    // In nguoc giong bai 12c
    for (int i = h; i >= 1; i--) {
        // In khoang trang truoc *
        for (int j = 1; j <= h - i; j++) {
            cout << " ";
        }
        // Roi den *
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "-------------------\n";

    return 0;
}