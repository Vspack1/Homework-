//Tam giac vuong can phai, dac ben trong
#include <iostream>
using namespace std;

int main() {
    int h;

    // Nhap chieu cao
    do {
        cout << "Nhap chieu cao tam giac (h > 0): ";
        cin >> h;
        if (h <= 0) {
            cout << "Chieu cao khong hop le! Vui long nhap lai.\n";
        }
    } while (h <= 0);

    cout << "\nTam giac vuong co chieu cao " << h << ":\n";
    cout << "-------------------\n";

    // Bat dau in
    for (int i = 1; i <= h; i++) {
        // In khoang trang truoc
        for (int j = 1; j <= h - i; j++) {
            cout << " ";
        }
        // Roi moi den * sau cung
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "-------------------\n";

    return 0;
}