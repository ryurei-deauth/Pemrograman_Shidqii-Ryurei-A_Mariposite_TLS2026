# Tugas Pemrograman Dasar TLS 2026

Nama: Shidqii Ryurei Alifardra  
Kelompok: Mariposite

Repository ini berisi jawaban dua soal Pemrograman Dasar TLS 2026. Di fase 1, soal The Last Astronaut dijelaskan dengan pseudocode dan soal Alien-In-The-Middle dengan flowchart. Penjelasan cara kerjanya ada di PDF. Kedua program C++ ada di file terpisah untuk fase 2.

## Isi repository

| File | Isi |
| --- | --- |
| `Fase_1.pdf` | Pseudocode, flowchart, penjelasan logika, dan contoh perhitungan. |
| `problem1.cpp` | Menampilkan urutan eliminasi dan astronot yang tersisa. |
| `problem2.cpp` | Melakukan enkripsi dan dekripsi pesan. |

Kedua program hanya memakai `<iostream>`. Program menggunakan array, perulangan, percabangan, serta operasi hitung dasar. Fungsi enkripsi dan dekripsi dibuat sendiri. Panjang pesan dan perubahan huruf kecil ke huruf besar juga dihitung secara manual.

## Problem 1: The Last Astronaut

Masukkan jumlah astronot `N`, kemudian nilai awal `K`. Penghitungan pertama dimulai dari astronot nomor 1. Setelah eliminasi, penghitungan dilanjutkan dari astronot berikutnya. Jika nomor yang keluar genap, K bertambah 2; jika ganjil, K berkurang 1. Nilai K tetap minimal 2.

Contoh masukan:

```text
5
2
```

Hasil:

```text
Urutan eliminasi: 2 1 5 4
Astronot terakhir: 3
```

Program memakai array berkapasitas 1000 astronot. Rentang input yang didukung adalah `1 <= N <= 1000` dan `2 <= K <= 1000000000`. Nilai K memakai `long long` agar penambahan selama proses tidak melampaui kapasitas `int`. Batas input ini merupakan batas implementasi; soal tidak memberikan batas ukuran input. Jika N = 1, tidak ada eliminasi.

## Problem 2: Alien-In-The-Middle

Masukkan pesan terlebih dahulu, kemudian pilih `1` untuk enkripsi atau `2` untuk dekripsi. Pesan berisi 1 sampai 1000 huruf tanpa spasi atau tanda baca. Huruf kecil akan diubah menjadi huruf besar. Program membatasi input ke huruf karena soal hanya menjelaskan aturan untuk A-Z.

Contoh enkripsi:

```text
ALIENS
1
```

Hasil: `AMUNSG`.

Contoh dekripsi:

```text
AMUNSG
2
```

Hasil: `ALIENS`.

Huruf pertama tidak berubah. Enkripsi memakai nilai huruf asli sebelumnya. Dekripsi memakai nilai huruf asli yang sudah ditemukan pada langkah sebelumnya. Pilihan dekripsi ditambahkan untuk membaca kembali pesan sandi.
```
