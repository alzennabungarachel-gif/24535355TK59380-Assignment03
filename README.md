# Assignment 03: Arrays & Algorithm Analysis

Name: Alzenna Bunga Rachel
Student ID: 24/535355/TK/59380

Problem 2 (problem2.cpp): Implementasi array dinamis menggunakan "struct" dan fungsi prosedural sesuai spesifikasi. Kode ini mencakup manajemen memori manual melalui "initArray" dan "freeArray", serta logika penggandaan kapasitas otomatis resizing saat melakukan penambahan elemen.
Problem 3 (problem3.cpp): Implementasi perbandingan antara Linear Search dan Binary Search secara iteratif. Program ini memvalidasi hasil pencarian pada array yang dihasilkan secara dinamis untuk memastikan efisiensi algoritma pada berbagai ukuran data.


# Compilation commands for each source file
Sesuai dengan instruksi poin 1 dan 2, kode dikompilasi menggunakan standar C++17;

Problem 2:
 g++ -std=c++17 -Wall -Wextra problem2.cpp -o problem2
Problem 3:
 g++ -std=c++17 -Wall -Wextra problem3.cpp -o problem3

Untuk memeriksa kebocoran memori (sesuai instruksi poin 7 dan 24):
 g++ -g -fsanitize=address [filename].cpp -o [output]

Validasi Indeks: Fungsi seperti "insertAt", "removeAt", "getAt", dan "setAt" mengasumsikan indeks yang diberikan berada dalam rentang valid ($0 \le \text{index} < \text{size}$) sesuai batasan problem.
Syarat Binary Search: Algoritma pencarian biner hanya akan berfungsi dengan benar jika array dalam kondisi terurut (sorted).
Manajemen Memori: Caller bertanggung jawab untuk membebaskan memori array yang dialokasikan oleh "generateSortedArray" menggunakan "delete[]".


### Time spent on the assignment
* [cite_start]**Total Time Spent**: 3 Days 14 Hours [cite: 234]
