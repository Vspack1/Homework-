//Dem chu so le cua so nguyen duong do nguoi dung nhap vao
#include <iostream>
using namespace std;

int main() {
    int n;
    int dem = 0;  

    // Kiem tra iq nguoi dung
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap so nguyen duong!\n";
        }
    } while (n <= 0);

    // Bat dau vo chuong trinh
    int tam = n;  // Dat 1 bien bat ki
    while (tam > 0) {
        int chuSo = tam % 10;  // Lấy chữ số cuối cùng
        if (chuSo % 2 != 0) {    // Kiểm tra chữ số lẻ
            dem++;
        }
        tam /= 10;  // Bỏ chữ số cuối
    }

    // In kết quả
    cout << "So " << n << " co " << dem << " chu so le" << endl;

    return 0;
}