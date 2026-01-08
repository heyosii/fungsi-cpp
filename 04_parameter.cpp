#include <iostream>
using namespace std;

// Fungsi tanpa main

// Data jumlah jantan dan betina
int jantan[4] = {0, 10, 50, 60};
int betina[4] = {7, 80, 9, 40};

// Fungsi untuk menghitung selisih antara dua angka
int selisih(int a, int b) {
    if (a > b) {
        return a - b; // Mengembalikan selisih jika a lebih besar
    } else {
        return b - a; // Mengembalikan selisih jika b lebih besar
    }
}

// Fungsi untuk menghitung denda berdasarkan hari
int denda_pada_hari(int hari) {
    int denda_pada_hari = 1000; // Denda per hari
    return denda_pada_hari * selisih(jantan[hari], betina[hari]); // Menghitung total denda
}

// Fungsi untuk menghitung total denda
int total_denda() {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += denda_pada_hari(i);
    }
    return total;
}

int main() {
    cout << total_denda() << endl;
}
