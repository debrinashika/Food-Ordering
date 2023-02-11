#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct Food
{
    string name;
    float sum;
    string MenuFood[10] = {"Nasi Goreng","Ayam Goreng","Bebek Goreng", "Ayam Geprek", "Ayam Teriyaki", "Ayam Saos Padang", "Es Teh Manis", "Lemon Tea","Milo", "Es Jeruk"};
};
Food info;

struct receipt
{
    float PricePerFood[10];
    int quantity[10];
};
receipt price;

void OrderFood();
void Calculation();
void PrintReceipt();
int Exit();


int main(){ 
    cout << setw(70) << "Selamat Datang di Ayam Bang Jali" << endl;
    cout << "\nDengan kakak siapa nih:";
    getline(cin, info.name);
    cout << "Hello " << info.name << endl;
    cout << "\nKakak Penjual apa pembeli nih";
    int pilihan;
    cout << "\n 1 Penjual, 2 Pembeli" << endl;
    cin >> pilihan;
    switch (pilihan)
    {
        case 1: cout << "\nMau Tutup Resto?" << endl;
        int tutup;
        cout << "\n 1 Ya, 2 Tidak" << endl;
        cin >> tutup;
        switch (tutup)
        {
            case 1: cout << "\nToko Ditutup" << endl;
            break;
            case 2: cout << "\nOke" << endl;
            return 0;
            break;
            default:
            Exit();
        }
        break;
        case 2: 
        int selection;
        
        cout << "\n 1 untuk Order, 2 Liat Menu, 3.Keluar" << endl;
        cin >> selection;

        switch (selection)
        {
            case 1: cout << "\nOrder Food" << endl;
            OrderFood();
            break;
            case 2: cout << "\nMenu Ayam Bang Jali:\n " << endl;
            cout << "1. Nasi Goreng: Rp." << 12000 << endl;
            cout << "2. Ayam Goreng: Rp." << 12000 << endl;
            cout << "3. Bebek Goreng: Rp." << 14000 << endl;
            cout << "4. Ayam Geprek: Rp." << 12000 << endl;
            cout << "5. Ayam Teriyaki: Rp." << 15000 << endl;
            cout << "6. Ayam Saos Padang: Rp." << 15000 << endl;
            cout << "7. Es Teh Manis: Rp." << 4000 << endl;
            cout << "8. Lemon Tea: Rp." << 4000 << endl;
            cout << "9. Milo: Rp." << 5000 << endl;
            cout << "10. Es Jeruk: Rp." << 4000 << endl;
            cout << "\n" << endl;
            case 3: cout << "\nTerima Kasih" << endl;
            return 0;
            break;
            default:
            Exit();
        }
    }
    
}

void OrderFood()
{
    float ArrayPrice[11] = {10000,12000,14000,12000,15000,15000,14000,4000,4000,5000,4000};
    int number;
    float sum = 0;
    int quantity;
    bool loop = 1;
    int HaveMemberID;


    while (loop)
    {
    cout << "\nMenu Ayam Bang Jali:\n " << endl;
    //cout << Food().MenuFood[0] << ArrayPrice[0] << endl;
    cout << "1. Nasi Goreng: Rp." << ArrayPrice[1] << endl;
    cout << "2. Ayam Goreng: Rp." << ArrayPrice[1] << endl;
    cout << "3. Bebek Goreng: Rp." << ArrayPrice[2] << endl;
    cout << "4. Ayam Geprek: Rp." << ArrayPrice[3] << endl;
    cout << "5. Ayam Teriyaki: Rp." << ArrayPrice[4] << endl;
    cout << "6. Ayam Saos Padang: Rp." << ArrayPrice[5] << endl;
    cout << "7. Es Teh Manis: Rp." << ArrayPrice[6] << endl;
    cout << "8. Lemon Tea: Rp." << ArrayPrice[7] << endl;
    cout << "9. Milo: Rp." << ArrayPrice[8] << endl;
    cout << "10. Es Jeruk: Rp." << ArrayPrice[9] << endl;
    cout << "\n" << endl;

    cout << "Mau Beli Apa? (pilih nomor makanan di atas)" << endl;
    cin >> number;



    switch (number)
    {
        case 1: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[0] * quantity;
                price.PricePerFood[0] += ArrayPrice[0] * quantity;
                price.quantity[0] += quantity;
                break;
        case 2: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[1] * quantity;
                price.PricePerFood[1] += ArrayPrice[1] * quantity;
                price.quantity[1] += quantity;
                break;
        case 3: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[2] * quantity;
                price.PricePerFood[2] += ArrayPrice[2] * quantity;
                price.quantity[2] += quantity;
                break;
        case 4: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[3] * quantity;
                price.PricePerFood[3] += ArrayPrice[3] * quantity;
                price.quantity[3] += quantity;
                break;
        case 5: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[4] * quantity;
                price.PricePerFood[4] += ArrayPrice[4] * quantity;
                price.quantity[4] += quantity;
                break;
        case 6: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[5] * quantity;
                price.PricePerFood[5] += ArrayPrice[5] * quantity;
                price.quantity[5] += quantity;
                break;
        case 7: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[6] * quantity;
                price.PricePerFood[6] += ArrayPrice[6] * quantity;
                price.quantity[6] += quantity;
                break;
        case 8: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[7] * quantity;
                price.PricePerFood[7] += ArrayPrice[7] * quantity;
                price.quantity[7] += quantity;
                break;
        case 9: cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[8] * quantity;
                price.PricePerFood[8] += ArrayPrice[8] * quantity;
                price.quantity[8] += quantity;
                break;
        case 10:cout << "Jumlah?:";
                cin >> quantity;
                info.sum += ArrayPrice[9] * quantity;
                price.PricePerFood[9] += ArrayPrice[9] * quantity;
                price.quantity[9] += quantity;
                break;
        default: cout << "Unidentified Number" << endl;
                 loop == 1;
    }
    cout << "\nTekan 1 untuk menambah pesanan dan 0 untuk mengakhiri" << endl;
    cin >> loop;
    }
	Calculation();
}

void Calculation()
{
    PrintReceipt();
}

void PrintReceipt()
{
    fstream StoreReceipt;
    StoreReceipt.open("receipt.dat", ios::app);
    cout << "-----------------------------------------------" << endl;
    cout << "\nAyam Bang Jali" << endl;
    cout << "Jl. Dipati Ukur no. 10 Bandung" << endl;
    cout << "This Receipt Belong To " << info.name << endl;
    cout << "-----------------------------------------------" << endl;
    StoreReceipt << "\nAyam Bang Jali" << endl;
    StoreReceipt << "Jl. Dipati Ukur no.10 Bandung" << endl;
    StoreReceipt << "This Receipt Belong to " << info.name << endl;
    StoreReceipt << "-----------------------------------------------" << endl;
   
    for (int i = 0; i < 10; i++)
    {
        if (price.PricePerFood[i] > 0)
            {
                cout << Food().MenuFood[i] << " Rp." << price.PricePerFood[i] << " Jumlah: " << price.quantity[i] << endl;
                StoreReceipt << Food().MenuFood[i] << " Rp." << price.PricePerFood[i] << " Jumlah: " << price.quantity[i] << endl;
            }
    } 
    cout << "\nTOTAL: Rp." << info.sum << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Terima Kasih";
}

int Exit()
{
    return 0;
}