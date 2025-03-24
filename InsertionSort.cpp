#include <iostream>
using namespace std;

int arr[20]; /// Membuat Array dengan panjang data 20
int n; // Membuat Variable Inputan n

void input()
{ // Procedure Input
    while (true)
{
cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputan Jumlah element Array
cin >> n; // Memanggil variable inputan n

if (n <= 20)
{// membuat konidsi n tidak lebih besar dari 20}
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // menampilkan Pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak per baris program
cout << "======================" << endl; // Membuat tampilan susunan data element array
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
{
cout << "Data ke-" << (i + 1) << ": "; // Memasukkan atau menginputkan nilai data n
cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
}
}

void insertionsort()
{ // Procedure Insertionsort
    
int temp; // Membuat Variable data temporer atau penyimpanan sementara
int j, i; // Membuat variable j sebagai penanda

for  (i = 1; i <= n - 1; i++)
{ // step 1

temp = arr[i]; // step 2

j = i - 1; // step 3

while (j >= 0 && arr [j] > temp) // step 4
{
arr[j + 1] = arr[j]; // step 4a
j--; // step 4b
}

arr[j + 1] = temp; // Step 5
}
}

void display()
{
cout << endl; // output baris kosong
cout << "===============================" << endl;
cout << "Total Passs =" << n-1 << endl; // cout element movement
cout << "===============================" << endl; // output ke layar
cout << "Element Array yang telah tersusun" << endl; // Output ke layar
cout << "===============================" << endl; // output ke layar
