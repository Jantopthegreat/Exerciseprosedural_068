#include <iostream>
#include <string>
using namespace std;

// fungsi untuk menentukan status kandidat diterima/tidak
void getStatus(int mat, int bing, char& status) {
    if ((mat + bing) / 2 >= 70 || mat > 80) {
        status = 'L';  
    }
    else {
        status = 'TL'; 
    }
}

int main() {
    const int jumlahkandidat = 20;
    string nama[jumlahkandidat];

    int mat, bing, diterima = 0, ditolak = 0;
    char status;
    cout << "Masukkan nilai matematika dan bahasa Inggris dari 20 kandidat: " << endl;
    for (int i = 0; i <= jumlahkandidat; i++) {
        cout << "Masukkan nama Kandidat = " << i + 1 << ";";
        cin >> nama[i];
        cout << "Nilai matematika: ";
        cin >> mat;
        cout << "Nilai bahasa Inggris: ";
        cin >> bing;
        getStatus(mat, bing, status);
        if (status == 'D') {
            diterima++;
        }
        else {
            ditolak++;
        }
        cout << endl;
    }
    cout << "Total kandidat yang diterima: " << diterima << endl;
    cout << "Total kandidat yang tidak diterima: " << ditolak << endl;
    cout << "Nama\tStatus" << endl;
    cout << "-------------------" << endl;

    // menampilkan nama pendaftar dan status diterima/tidak
    for (int i = 1; i <= 20; i++) {
        string nama = "Kandidat " + to_string(i);
        getStatus(mat, bing, status);
        if (status == 'D') {
            cout << nama << "\tDiterima" << endl;
        }
        else {
            cout << nama << "\tDitolak" << endl;
        }
    }
    return 0;
}
