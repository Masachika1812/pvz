#include <iostream>
#include <cstdlib> // untuk system cls
#include <ctime>
using namespace std;

int main()
{
    int baris;
    cout << "baris: ";
    cin >> baris;
    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }



    cout << "While loop dasar: ";
    int count = 1;
    while (count <= 5) {
        cout << count << " ";
        count++;  // increment wajib untuk menghindari infinite loop
    }
    cout << endl;

    // While loop untuk input validation
    cout << "Contoh validasi input (masukkan angka 1-10): ";
    int input;
    cin >> input;

    while (input < 1 || input > 10) {
        cout << "Input tidak valid! Masukkan angka 1-10: ";
        cin >> input;
    }


    cout << "Do-while (minimal 1x eksekusi): ";
    int num = 6;  // kondisi sudah false dari awal
    do {
        cout << num << " ";  // tetap dieksekusi sekali
        num++;
    } while (num <= 5);
    cout << endl;
    int ctr = 0;
    while(true){
        if(ctr >3){
            break;
        }else {
            cout<< ctr << " ";
        }
        ctr++;
    }
    // Contoh menu dengan do-while

     int menu;

    cout << "===== GAME MENU =====" << endl;

    // WHILE LEVEL 1: Menu Utama
    while (true) {
        cout << "\n=== MENU UTAMA ===" << endl;
        cout << "1. Play" << endl;
        cout << "2. Exit" << endl;
        cout << "Pilih: ";
        cin >> menu;

        if (menu == 1) {
            // WHILE LEVEL 2: Pilih Level
            while (true) {
                cout << "\n=== PILIH LEVEL ===" << endl;
                cout << "1. Level 1" << endl;
                cout << "2. Level 2" << endl;
                cout << "3. Level 3" << endl;
                cout << "0. Back" << endl;
                cout << "Pilih: ";

                int level;
                cin >> level;

                if (level == 1) {
                    cout << "\n>>> LEVEL 1 <<<" << endl;
                    cout << "Selamat bermain di Level 1!" << endl;

                    int back;
                    do {
                        cout << "\nTekan 0 untuk kembali: ";
                        cin >> back;
                        if (back != 0) {
                            cout << "Input harus 0!" << endl;
                        }
                    } while (back != 0);

                } else if (level == 2) {
                    cout << "\n>>> LEVEL 2 <<<" << endl;
                    cout << "Selamat bermain di Level 2!" << endl;

                    int back;
                    do {
                        cout << "\nTekan 0 untuk kembali: ";
                        cin >> back;
                        if (back != 0) {
                            cout << "Input harus 0!" << endl;
                        }
                    } while (back != 0);

                } else if (level == 3) {
                    cout << "\n>>> LEVEL 3 <<<" << endl;
                    cout << "Selamat bermain di Level 3!" << endl;

                    int back;
                    do {
                        cout << "\nTekan 0 untuk kembali: ";
                        cin >> back;
                        if (back != 0) {
                            cout << "Input harus 0!" << endl;
                        }
                    } while (back != 0);

                } else if (level == 0) {
                    break; // BACK ke menu utama
                } else {
                    cout << "Pilihan tidak valid!" << endl;
                }
            }

        } else if (menu == 2) {
            cout << "\nTerima kasih sudah bermain!" << endl;
            break; // Keluar program
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }




    int pilihan, komputer, skorPemain = 0, skorKomputer = 0;
    char mainLagi;

    srand(time(0)); // Inisialisasi random seed
    do{

        do {

//            system("cls");

            // Tampilkan skor
            cout << "================================" << endl;
            cout << "   GAME BATU GUNTING KERTAS" << endl;
            cout << "================================" << endl;
            cout << "Skor Anda: " << skorPemain << " | Skor Komputer: " << skorKomputer << endl;
            cout << "================================" << endl << endl;

            // Menu pilihan
            do{
                cout << "Pilih salah satu:" << endl;
                cout << "1. Batu" << endl;
                cout << "2. Gunting" << endl;
                cout << "3. Kertas" << endl;
                cout << "Pilihan Anda (1-3): ";
                cin >> pilihan;
            }while(pilihan > 3 || pilihan <1);

            // Generate pilihan komputer (1-3)
            komputer = (rand() % 3) + 1;

            // Tampilkan pilihan
            cout << "\nAnda memilih: ";
            if (pilihan == 1) cout << "Batu";
            else if (pilihan == 2) cout << "Gunting";
            else cout << "Kertas";

            cout << "\nKomputer memilih: ";
            if (komputer == 1) cout << "Batu";
            else if (komputer == 2) cout << "Gunting";
            else cout << "Kertas";

            cout << endl << endl;

            // Tentukan pemenang
            if (pilihan == komputer) {
                cout << "HASIL: SERI!" << endl;
            }
            else if ((pilihan == 1 && komputer == 2) ||
                     (pilihan == 2 && komputer == 3) ||
                     (pilihan == 3 && komputer == 1)) {
                cout << "HASIL: ANDA MENANG!" << endl;
                skorPemain++;
            }
            else {
                cout << "HASIL: KOMPUTER MENANG!" << endl;
                skorKomputer++;
            }


        } while (skorKomputer <3 && skorPemain<3);

        // Tampilkan skor akhir
        system("cls");
        cout << "================================" << endl;
        cout << "      GAME BERAKHIR!" << endl;
        cout << "================================" << endl;
        cout << "Skor Akhir:" << endl;
        cout << "Anda      : " << skorPemain << endl;
        cout << "Komputer  : " << skorKomputer << endl;
        cout << "================================" << endl;

        if (skorPemain > skorKomputer) {
            cout << "SELAMAT! ANDA PEMENANGNYA!" << endl;
        }
        else if (skorKomputer > skorPemain) {
            cout << "KOMPUTER MENANG! COBA LAGI!" << endl;
        }

        cout << endl;
        cout << endl;
        cout<< "ingin bermain lagi? ";
        cin >> mainLagi;

    }while (mainLagi == 'Y' || mainLagi == 'y') ;
        cout << "\nTerima kasih telah bermain!" << endl;

    return 0;
}
