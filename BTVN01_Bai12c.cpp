//Tam giac vuong can lech ve goc tren ben trai, dac ben trong
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

    // Bat dau in nguoc tam giac ( in lui )
    for (int i = h; i >= 1; i--) {
        // In dau * cho tung dong
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "-------------------\n";

    return 0;
}