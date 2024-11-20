// Liet ke tat ca cac so nguyen le tu ban phim 
#include <iostream>
using namespace std;

int main() {
    int n;
    int dem = 0; 

    // Kiem tra nguoi dung nhap
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap so nguyen duong!\n";
        }
    } while (n <= 0);

    cout << "\nCac uoc so le cua " << n << " la:\n";

    // Tim va xuat so le
    for (int i = 1; i <= n; i += 2) {
        if (n % i == 0) {
            cout << i << " ";
            dem++;
        }
    }

    // So luong uoc le
    cout << "\n\nSo luong uoc le la: " << dem << endl;

    return 0;
}