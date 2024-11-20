//Chuong trinh in ra hinh vuong nhung ma bi rong ben tron
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

    cout << "\nHinh vuong rong " << n << "x" << n << ":\n";
    cout << "-------------------\n";

    // Bat dau in vien doc
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Dieu kien in sao cho khong in ben trong (in ngoai cot,ngoai dong)
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            }
            else {
                cout << "  "; //Phan rong se duoc thay bang khoang trang
            }
        }
        cout << endl;
    }

    cout << "-------------------\n";

    return 0;
}