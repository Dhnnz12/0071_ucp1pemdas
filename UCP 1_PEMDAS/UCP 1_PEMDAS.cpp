// 1.Berikan Contoh deklarasi variable.Berikan minimal 3 variable dengan tipe data yang berbeda.?
//   -INTEGER,BOOLEAN,STRING
// 2.Berikan contoh minimal satu impementasi dari conditional statement?
//     #include <iostream>
//using namespace std;

//int main() {
  //  int nBilangan;
  //  string cStatus;

   // srand(time(0));
   // nBilangan = rand() % 10;
    //cout << "Bilangannya adalah = " << nBilangan << endl;

    //if (nBilangan % 2 == 0) {
      //  cStatus = "Genap";
   // }
    //else {
      //  cStatus = "Ganjil";
    //}
   // cout << "Statusnya adalah = " << cStatus << endl;
   // return 0;
//}
// 3.Berikan contoh implementasi dari struct
// // #include <iostream>
//    using namespace std;

//struct DetailAlamat {
 //   string desa;
   // string kota;
//    };

//struct Mahasiswa {
  //   string nim;
   //  string nama;
    // DetailAlamat alamat;
    // int umur;
//     };

//     int main() {
  //   Mahasiswa mhs;
    // cout << "Nomor Mahasiswa : ";
    // getline(cin, mhs.nim);
   //  cout << "Nama Mahasiswa : ";
   //  getline(cin, mhs.nama);

   //  cout << "Alamat Mahasiswa : " << endl;
    // cout << "\t Nama Desa : ";
    // cin >> mhs.alamat.desa;
    // cout << "\t. Nama Kota : ";
    // cin >> mhs.alamat.kota;
    // cout << "Umur Mahasiswa : ";
    // cin >> mhs.umur;

    // cout << endl;
    // cout << "\n NIM : " << mhs.nim;
    // cout << "\n Nama :" << mhs.nama;
    // cout << "\n Alamat : ";
    // cout << "\n \t Desa : " << mhs.alamat.desa;
    // cout << "\n \t Kota : " << mhs.alamat.kota;
  //   cout << "\n Umur : " << mhs.umur;
//     }

// 4.Berikan contoh implementasi dari prosedur dan fungsi.
//  // Deklarasi prosedur
//    void greet() {
//    cout << "Hello, selamat pagi!" << endl;
//    }

//     int main() {
    // Memanggil prosedur greet
  //   greet();

 //   return 0;
//    }

// Deklarasi fungsi
//    int addNumbers(int a, int b) {
   // return a + b;
//    }

//     int main() {
    // Memanggil fungsi addNumbers dan menyimpan nilai kembalian ke dalam variabel
   //  int result = addNumbers(5, 3);

    // Menampilkan hasil
    // cout << "Hasil penjumlahan: " << result << endl;
   //  return 0;
//     }

// 5.Berikan contoh implementasi dari Looping.
//     #include <iostream>
//     using namespace std;

//      int main() {

   //   char pilihan;
  
  //      do {
   //     cout << "Berangkat ambil takjil " << endl;
     //   cout << "Antri takjil " << endl;
      //  cout << "Ambil Takjil" << endl;
       // cout << "Apakah mau antri kembali ? " << endl;
       // cin >> pilihan;
    //    } while (pilihan == 'y' || pilihan == 'Y');
//        }

// 6.Pada Penerimaan mahasiswa baru tercatat ada 20 kandidat yang telah terdaftar.kemudian diadakan tes tertulis untuk 2 mata pelajaran yaitu matematika dan
//   Bahasa inggris.Nilai dafri hasil tes tersebut kemudian diolah dengan menggunakan bantuan program komputer,dengan ketentuan sebagai berikut:
//  A.Seorang kandidat dinyatakan diterima jika nilai rata-rata dari kedua tes tersebut tidak kurang dari 70 atau nilai matematikanya lebih dari 80.
//  B.Nama pendaftar dan status diterima/tidaknya dari 20 kandidat tersebut disimpan kemudian ditampilkan seperti berikut:
//   Nama      Status
//   Asroni    Diterima
//   Lia       Diterima
//   Joko      Ditolak
//  C.Terdapat sebuah kondisi dimana apakah akan mengulang program atau tidak.


#include <iostream>
#include <string>
using namespace std;

struct CalonMahasiswa {
    string nama;
    int matematika;
    int bahasaInggris;
    double rataRata() {
        return (matematika + bahasaInggris) / 2.0;
    }
};

int main() {
    int jumlahCalonMahasiswa = 3;

    for (int i = 0; i < jumlahCalonMahasiswa; i++) {
        CalonMahasiswa calon;
        cout << "Masukkan nama calon mahasiswa ke-" << i+1 << ": ";
        cin >> calon.nama;
        cout << "Masukkan nilai matematika: ";
        cin >> calon.matematika;
        cout << "Masukkan nilai bahasa Inggris: ";
        cin >> calon.bahasaInggris;
        CalonMahasiswa push_back(calon);
    }

    cout << "\nNama\tStatus\n";

    for (CalonMahasiswa calon : CalonMahasiswa ) {
        string status = calon.rataRata() >= 70 || calon.matematika > 80 ? "Diterima" : "Ditolak";
        cout << calon.nama << "\t" << status << "\n";
    }

    cout << "\nApakah Anda ingin mengulang program? (y/n) ";
    char jawab;
    cin >> jawab;
    if (jawab == 'y' || jawab == 'Y') {
        main();
    }

    return 0;
}