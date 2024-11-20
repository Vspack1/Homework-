//Chuong trinh tam giac la gi ?
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    // Nhap vao 3 canh cua 1 tam giac
    cout << "Nhap 3 canh cua tam giac:\n";
    cout << "Canh a = "; cin >> a;
    cout << "Canh b = "; cin >> b;
    cout << "Canh c = "; cin >> c;

    // Dieu kien kien quyet de la 1 tam giac
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Loi: Canh tam giac phai lon hon 0!\n";
        return 0;
    }

    if (a + b <= c || b + c <= a || a + c <= b) {
        cout << "Loi: Ba canh khong tao thanh tam giac!\n";
        return 0;
    }

    // Check lai 
    cout << "\nKet qua: ";

    // Kiem tra tam giac dac biet: Tam giac vuong bang Pytago
    bool laVuong = false;
    if (abs(a * a + b * b - c * c) < 0.0001 ||
        abs(b * b + c * c - a * a) < 0.0001 ||
        abs(a * a + c * c - b * b) < 0.0001) {
        laVuong = true;
    }

    //Kiem tra cac tam giac dac biet con lai
    if (a == b && b == c) {
        cout << "Tam giac deu\n";
    }
    else if (a == b || b == c || a == c) {
        if (laVuong) {
            cout << "Tam giac vuong can\n";
        }
        else {
            cout << "Tam giac can\n";
        }
    }
    else if (laVuong) {
        cout << "Tam giac vuong\n";
    }
    else {
        cout << "Tam giac thuong\n";
    }

    return 0;
}