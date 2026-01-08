#include <iostream>
using namespace std;

int biaya(int total_bebek) {
    int harga_bebek;

    if (total_bebek < 10) {
        harga_bebek = 100000;
    } else if (total_bebek <= 50) {
        harga_bebek = 75000;
    } else {
        harga_bebek = 50000;
    }

    return harga_bebek * total_bebek;
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};
    int biaya_jantan_dan_betina[4]; // Mendeklarasikan array

    // Menghitung biaya untuk jantan dan betina
    for (int i = 0; i < 4; i++) {
        biaya_jantan_dan_betina[i] = biaya(jantan[i]) + biaya(betina[i]);
        cout << biaya_jantan_dan_betina[i] << endl; // Menampilkan hasil
    }

    return 0; // Mengembalikan 0 untuk menandakan program selesai
}
