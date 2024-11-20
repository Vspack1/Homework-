//Kiem tra so doi xung
#include <iostream>
using namespace std;

int main() {
    int n;
    int soDaoNguoc = 0;

    // Nhap so can check var
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap so nguyen duong!\n";
        }
    } while (n <= 0);

    // 1 bien trung gian de lam mau
    int tam = n;

    // Uno bien trung gian 
    while (tam > 0) {
        int chuSo = tam % 10;
        soDaoNguoc = soDaoNguoc * 10 + chuSo;
        tam /= 10;
    }

    // Xu li 
    if (n == soDaoNguoc) {
        cout << n << " la so doi xung" << endl;
        cout << "Vi doc tu trai sang phai: " << n << endl;
        cout << "Doc tu phai sang trai: " << soDaoNguoc << endl;
    }
    else {
        cout << n << " khong phai la so doi xung" << endl;
        cout << "Vi doc tu trai sang phai: " << n << endl;
        cout << "Doc tu phai sang trai: " << soDaoNguoc << endl;
    }

    return 0;
}