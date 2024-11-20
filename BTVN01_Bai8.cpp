//Kiem tra ngay do neu biet truoc thang va nam
#include <iostream>
using namespace std;

int main() {
    int thang, nam;

    // Check thang
    do {
        cout << "Nhap thang (1-12): ";
        cin >> thang;
        if (thang < 1 || thang > 12) {
            cout << "Thang khong hop le! Vui long nhap lai.\n";
        }
    } while (thang < 1 || thang > 12);

    // Check nam
    do {
        cout << "Nhap nam (>0): ";
        cin >> nam;
        if (nam <= 0) {
            cout << "Nam khong hop le! Vui long nhap lai.\n";
        }
    } while (nam <= 0);

    // Check nam nhuan (366 ngay)
    bool laNamNhuan = (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);

    // Bat dau tinh ngay
    int soNgay;
    switch (thang) {
    case 4: case 6: case 9: case 11:
        soNgay = 30;
        break;
    case 2:
        if (laNamNhuan) {
            soNgay = 29;
        }
        else {
            soNgay = 28;
        }
        break;
    default:
        soNgay = 31;
    }

    // Ket qua cuoi cung
    cout << "\nKET QUA:\n";
    cout << "-------------------------\n";
    cout << "Thang " << thang << " nam " << nam << " co " << soNgay << " ngay\n";

    if (thang == 2) {
        if (laNamNhuan) {
            cout << "Day la nam nhuan\n";
        }
        else {
            cout << "Day khong phai la nam nhuan\n";
        }
    }
    cout << "-------------------------\n";

    return 0;
}