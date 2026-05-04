#include <iostream>
using namespace std;

class mahasiswa {
    public:
        mahasiswa(); // constructor
};

mahasiswa::mahasiswa() {
    cout << "Constructor terpanggil" << endl; // Definisi constructor
};

int main () {
    mahasiswa mhs; // Pembuatan Object
    return 0;
}