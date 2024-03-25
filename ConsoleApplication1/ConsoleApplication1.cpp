// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//1.BubleSort berproses sebanyak 4 kali, dan membandingkan secara berurutan dari indeks terkecil hingga terbesar.
//2.dalam proses ShelSort memindahkan bilangan yang belum urut dan jika data sudah berurutan maka akan lanjut ke bilangan selanjutnya.
//3.Angka yang harus dipilih yaitu angka yang belum urut untuk dipindahkan di atau kedalam kolom yang kosong dan akan ditempatkan jika bilangan lebih kecil maka akan diletakan di sebelum bilangan tersebut.


#include <iostream>
using namespace std;

int fidz[22];
int n;

void input() {
    while (true) {
        cout << "masukkan banyaknya elemen pada fidz :";
        cin >> n;
        if (n <= 22)
            break;
        else {
            cout << "nFidz dapat mempunyai maksimal 22 elemen \n";

        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "masukan Elemen Fidz" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ":";
        cin >> fidz[i];

    }
}

void bubbleSortFidz() {

    int pass = 1;

    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (fidz[j] > fidz[j + 1]) {
                int temp = fidz[j];
                fidz[j] = fidz[j + 1];
                fidz[j + 1] = temp;

            }
        }
        pass = pass + 1;

    } while (pass <= n);
}

void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Fidz yang telah tersusun" << endl;
    cout << "===================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << fidz[j] << endl;

    }
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    input();  // menginput data
    bubbleSortFidz();  // proses mengurutkan data
    display();// menampilkan data yang telah urut
    system("pause");


    return 0;
}
