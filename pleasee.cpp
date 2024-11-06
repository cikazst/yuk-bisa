#include <iostream>

using namespace std;

int main() {
    int barang[4], total, kembalian, bayar;
    string nama;

    cout << "===== Selamat Datang di Kasir Wati =====" << endl;
    cout << "Silahkan Masukkan Nama Pembeli : " << endl;
   getline(cin, nama);
    cout << "masukkan harga barang 1" << endl;
    cin >> barang[0];
    cout << "masukkan harga barang 2" << endl;
    cin >> barang[1];
    cout << "masukkan harga barang 3" << endl;
    cin >> barang[2];
    cout << "masukkan harga barang 4" << endl;
    cin >> barang[3];
    total = barang[0]+barang[1] + barang[2] + barang[3];
    cout << "Totalnya adalah Rp." << total << endl;
    cout << "Silahkan bayar sesuai harga atau pas" << endl;
    cin >> bayar;
    kembalian = bayar - total;
    cout << "kembaliannya adalah Rp." << kembalian << endl;
     cout << "\n===== Detail Belanja =====" << endl;
    cout << "Nama Pembeli: " << nama << endl;
    cout << "Rincian Barang:" << endl;
    cout << barang[0]<<endl;
	cout << barang[1]<<endl;
	cout << barang[2]<<endl;
	cout << barang[3]<<endl;
	cout << ".........................................";
	cout << total <<endl;
	cout << bayar << endl;
	cout << kembalian << endl;
	cout << ".........................................";
    return 0;
}



