#include <iostream>
using namespace std;

int total_kandang = 10;

// bebek[i] menyatakan banyaknya bebek pada kandang nomor i.
int bebek[11]; // Indeks 0 tidak digunakan

void kosongkan_kandang() {
    for (int i = 1; i <= total_kandang; i++) {
        bebek[i] = 0; // Mengosongkan kandang
    }
}

// Fungsi untuk mengisi bebek ke dalam kandang
void isi_bebek_ke_dalam_kandang(int awal, int akhir, int jumlah_bebek) {
    for (int i = awal; i <= akhir; i++) {
        bebek[i] += jumlah_bebek; // Menambahkan jumlah bebek ke kandang
    }
}

int bebek_terbanyak_dalam_suatu_kandang() {
    int bebek_terbanyak = bebek[1]; // Mulai dengan kandang 1
    for (int i = 2; i <= total_kandang; i++) {
        bebek_terbanyak = max(bebek_terbanyak, bebek[i]); // Mengambil nilai maksimum
    }
    return bebek_terbanyak; // Mengembalikan jumlah bebek terbanyak
}

int main() {
    kosongkan_kandang(); // Mengosongkan semua kandang

    // Mengisi kandang-kandang sesuai instruksi
    isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 1);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);

    // Menampilkan jumlah bebek terbanyak dalam satu kandang
    cout << bebek_terbanyak_dalam_suatu_kandang() << endl;

    return 0; // Mengembalikan 0 untuk menandakan program selesai
}
