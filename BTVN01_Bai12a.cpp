//Hinh tam giac rong voi h = 5
#include <iostream>
using namespace std;

int main() {
    int h;

    // Nhap chieu cao tam giac theo de bai
    do {
        cout << "Nhap chieu cao tam giac (h > 0): ";
        cin >> h;
        if (h <= 0) {
            cout << "Chieu cao khong hop le! Vui long nhap lai.\n";
        }
    } while (h <= 0);

    cout << "\nTam giac co chieu cao " << h << ":\n";
    cout << "-------------------\n";

    // In tam giac
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            // In dau * cho cac truong hop sau
            if (i == 1 || i == h || j == 1 || j == i) {
                cout << "*";
            }
            else {
                cout << " "; // In khoang trang ben trong
            }
        }
        cout << endl;
    }

    cout << "-------------------\n";

    return 0;
}