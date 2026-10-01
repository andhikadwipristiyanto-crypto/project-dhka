#include <iostream>

using namespace std;

int main() {
    // Deklarasi konstanta PHI dengan tipe data float
    const float PHI = 3.14f;
    float r, luas, keliling;

    cout << "=========================================" << endl;
    cout << "KALKULATOR LUAS & KELILING LINGKARAN" << endl;
    cout << "=========================================" << endl;

    cout << "Masukkan jari-jari lingkaran (r) : ";
    cin >> r;

    // Rumus perhitungan (menggunakan PHI huruf kapital)
    luas = PHI * r * r;
    keliling = 2 * PHI * r;

    cout << "\nHASIL PERHITUNGAN " << endl;
    cout << "Luas Lingkaran     = " << PHI << " * " << r << " * " << r << " = " << luas << endl;
    cout << "Keliling Lingkaran = 2 * " << PHI << " * " << r << " = " << keliling << endl;

    return 0;
}