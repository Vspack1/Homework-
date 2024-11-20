//Chuong trinh kiem tra so nguyen duong co phai la so hoan thien hay ko
#include <iostream>
using namespace std;

int main() {
    int n;
    int tongUoc = 0;

    // Kiem tra so 
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap so nguyen duong!\n";
        }
    } while (n <= 0);

    // Tim tong uoc
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tongUoc += i;
        }
    }

    // Kiem tra so hoan thien
    if (tongUoc == n) {
        cout << n << " la so hoan thien" << endl;
        cout << "Vi tong cac uoc so nho hon " << n << " la: " << tongUoc;
    }
    else {
        cout << n << " khong phai la so hoan thien" << endl;
        cout << "Vi tong cac uoc so nho hon " << n << " la: " << tongUoc;
    }

    return 0;
}