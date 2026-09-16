#include <iostream>
using namespace std;

char enkripsi(char sekarang, char sebelumnya) {
    int nilai = sekarang - 'A' + 1;
    int geser = sebelumnya - 'A' + 1;
    nilai = nilai + geser;

    if (nilai > 26) {
        nilai = nilai - 26;
    }

    return 'A' + nilai - 1;
}

char dekripsi(char sekarang, char sebelumnya) {
    int nilai = sekarang - 'A' + 1;
    int geser = sebelumnya - 'A' + 1;
    nilai = nilai - geser;

    if (nilai < 1) {
        nilai = nilai + 26;
    }

    return 'A' + nilai - 1;
}

int main() {
    char pesan[1001];
    char hasil[1001];
    int pilihan;
    int panjang = 0;

    cout << "Masukkan pesan (huruf saja, maksimal 1000 huruf): ";
    if (!cin.getline(pesan, 1001)) {
        cout << "Pesan tidak dapat dibaca atau terlalu panjang.\n";
        return 0;
    }

    // hitung panjang dan ubah huruf kecil manual
    while (pesan[panjang] != '\0') {
        if (pesan[panjang] >= 'a' && pesan[panjang] <= 'z') {
            pesan[panjang] = pesan[panjang] - 'a' + 'A';
        }

        if (pesan[panjang] < 'A' || pesan[panjang] > 'Z') {
            cout << "Pesan hanya boleh berisi huruf A-Z tanpa spasi.\n";
            return 0;
        }
        panjang++;
    }

    if (panjang == 0) {
        cout << "Pesan tidak boleh kosong.\n";
        return 0;
    }

    cout << "1. Enkripsi\n2. Dekripsi\nPilih: ";
    if (!(cin >> pilihan) || (pilihan != 1 && pilihan != 2)) {
        cout << "Pilihan harus 1 atau 2.\n";
        return 0;
    }

    hasil[0] = pesan[0];

    for (int i = 1; i < panjang; i++) {
        if (pilihan == 1) {
            // enkripsi memakai huruf asli sebelumnya
            hasil[i] = enkripsi(pesan[i], pesan[i - 1]);
        } else {
            // dekripsi memakai huruf asli yang ditemukan
            hasil[i] = dekripsi(pesan[i], hasil[i - 1]);
        }
    }

    hasil[panjang] = '\0';
    cout << "Hasil: " << hasil << "\n";
    return 0;
}
