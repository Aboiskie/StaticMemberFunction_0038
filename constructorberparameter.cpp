#include <iostream>
using namespace std;
using namespace std;

class mahasiswa {
    public:
        mahasiswa(int nim, string nama); // constructor dengan parameter
};

//Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor dengan parameter terpanggil" << endl;
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
}

int main () {
    mahasiswa mhs(12345, "Alby"); // Pembuatan Object dengan parameter
    return 0;
}