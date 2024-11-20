//Tim cac truong hop cua 1 to tien bat ki neu ta chi co 1k, 2k, 5k de tao nen to tien do
#include <iostream>
using namespace std;

int main() {
    int tongTien;
    int demPhuongAn = 0;

    // Nhap so tien can doi
    cout << "Nhap so tien can doi: ";
    cin >> tongTien;

    cout << "\nCac phuong an co the:\n";
    cout << "------------------------\n";

    // So to tien 1000
    for (int x = 0; x <= tongTien / 1000; x++) {
        // So to tien 2000
        for (int y = 0; y <= tongTien / 2000; y++) {
            // So to tien 5000
            for (int z = 0; z <= tongTien / 5000; z++) {
                // Kiem tra so tien can doi la bao nhieu to cua 3 loai tren
                if (x * 1000 + y * 2000 + z * 5000 == tongTien) {
                    demPhuongAn++;
                    cout << "Phuong an " << demPhuongAn << ": ";
                    cout << x << " to 1000d + ";
                    cout << y << " to 2000d + ";
                    cout << z << " to 5000d = " << tongTien << "d\n";
                }
            }
        }
    }

    if (demPhuongAn == 0) {
        cout << "Khong co phuong an nao!\n";
    }
    else {
        cout << "\nTong cong co " << demPhuongAn << " phuong an\n";
    }
    cout << "------------------------\n";

    return 0;
}