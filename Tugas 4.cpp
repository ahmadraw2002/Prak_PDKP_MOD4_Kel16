// Tugas 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

class Anggota {
public:
    void kelompok(string kelompok) {
        cout << "Halo, kami dari kelompok " << kelompok;
        cout << ". Shift 1" << endl; 
        cout << "1. Ahmad Raditya Alrazi Wibowo" << endl;
        cout << "2. Dimas Satria Permana" << endl;
        cout << "3. Faizal Tri Ardani Wijaya" << endl;
        cout << "4. Nurmusid Iqbal Hertanto" << endl;
    }
};

void pembuka() {
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++\n"
        << "\t      Bank Kelompok 16\n"
        << "\t      Selalu Sedia Menemani Anda\n"
        << "\t      JL UNDIP NO1\n"
        << "+++++++++++++++++++++++++++++++++++++++++++++++++\n";
}
void penutup() {
    cout << "=====================================================\n"
        << " =      Terima Kasih atas kunjungan anda            =\n"
        << " =\tSemoga Anda Senang Dengan Pelayanan Kami :) =\n"
        << "=====================================================\n";
}
void pertama() {
    string pilihpromo; 
    for (int i = 1; i <= 3; i++) {
        cout << "PROMO MENARIK DARI KAMI " << i << endl;
    }
    cout << "silahkan pilih dari promo diatas" << endl;
    cin >> pilihpromo;
    if (pilihpromo == "1") {
        cout << "Selamat!!! Anda Mendapat Hadiah Mobil" << endl;
    }
    else if (pilihpromo == "2") {
        cout << "Selamat!!! Anda Mendapat Umrah Gratis" << endl;
    }
    else if (pilihpromo == "3") {
        cout << "Selamat!!! Anda Mendapat Liburan ke Bali" << endl;
    }
}
void kedua() {
    int rekening[3];
    rekening[0] = 1000000;
    rekening[1] = 2000000;
    rekening[2] = 3000000;
    string rek;
    cout << "Silahkan Pilih Rekening anda" << endl;
    cout << "Rekening 1" << endl;
    cout << "Rekening 2" << endl;
    cout << "Rekening 3" << endl;
    cin >> rek;
    if (rek == "1") {
        cout << "Rekening 1 berjumlah Rp " << rekening[0] << endl;
    }
    else if (rek == "2") {
        cout << "Rekening 2 berjumlah Rp " << rekening[1] << endl;
    }
    else if (rek == "3") {
        cout << "Rekening 3 berjumlah Rp " << rekening[2] << endl;
    }
}
void ketiga() {
    int penarikanuang;
    int rekening[3];
    rekening[0] = 1000000;
    rekening[1] = 2000000;
    rekening[2] = 3000000;
    string rek;
    cout << "Silahkan Pilih Rekening anda" << endl;
    cout << "Rekening 1" << endl;
    cout << "Rekening 2" << endl;
    cout << "Rekening 3" << endl;
    cin >> rek;
    if (rek == "1") {
        cout << "rekening 1 berjumlah Rp " << rekening[0] << endl;
        cout << "Silahkan masukkan nominal yang akan anda tarik" << endl;
        cin >> penarikanuang;
        cout << "Uang sejumlah " << penarikanuang << " telah terambil dari rekening anda" << endl;
    }
    else if (rek == "2") {
        cout << "rekening 2 berjumlah Rp " << rekening[1] << endl;
        cout << "Silahkan masukkan nominal yang akan anda tarik" << endl;
        cin >> penarikanuang;
        cout << "Uang sejumlah " << penarikanuang << " telah terambil dari rekening anda" << endl;
    }
    else if (rek == "3") {
        cout << "rekening 3 berjumlah Rp " << rekening[2] << endl;
        cout << "Silahkan masukkan nominal yang akan anda tarik" << endl;
        cin >> penarikanuang;
        cout << "Uang sejumlah " << penarikanuang << " telah terambil dari rekening anda" << endl;
    }
}


int main()
{
    string Username, Password, jawaban, pilihpromo;
    int kelompok;
    Anggota myObj;
    myObj. kelompok ("16");
    pembuka();
    cout << "===Selamat Datang Silahkan Masukkan Username dan Password Anda===" << endl;
    cout << "Username: ";
    cin >> Username;
    cout << "Password: ";
    cin >> Password;
    if (Username == "Kelompok16") {
        if (Password == "DKP") {
            cout << "Selamat Datang" << endl;
        }
        else {
            cout << "Password salah, coba lagi!" << endl;
            penutup();
            exit(0);
        }
    }
    else {
        cout << "Anda tidak terdaftar" << endl;
        penutup();
        exit(0);
    }
  
    cout << "===== Bank Kelompok 16 =====" << endl;
    cout << "===== Silahkan Pilih Menu Dibawah ini : =====" << endl;
    cout << "== 1. Promo Menarik ==" << endl;
    cout << "== 2. Cek Saldo == " << endl;
    cout << "== 3. Penarikan Uang == " << endl;
    cout << "== 4. Keluar ATM == " << endl;
    cout << "Ketik nomor menu yang ingin anda lihat : " << endl;
    cin >> jawaban;

    if (jawaban == "1") {
        pertama();
    }
    else if (jawaban == "2") {
        kedua();
    }
    else if (jawaban == "3") {
        ketiga();
    }
    else if (jawaban == "4") {
        penutup();
    }  
}