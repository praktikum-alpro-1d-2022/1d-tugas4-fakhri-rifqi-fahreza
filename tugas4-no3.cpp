#include <iostream>

using namespace std;
//Nama:Fakhri rifqi fahreza
//NPM:2210631170119
//Kelas:1D informatika
//tugas4 tahun kabisat
int main(){

    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (tahun%400 == 0){
        cout << tahun << " Adalah Tahun Kabisat\n";
    }

    else if(tahun%100 == 0){
        cout << tahun << " Bukan Tahun Kabisat\n";
    }

    else if(tahun%4 == 0){
        cout << tahun << " Adalah Tahun Kabisat\n";
    }

    else {
        cout << tahun << " Bukan Tahun kabisat\n";
    }

    return 0;
}