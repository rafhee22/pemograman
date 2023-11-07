#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;
// kapasitas gudang
#define kapasitas 200
//struct
struct barang
{
	//array nama barang
	string namabarang[kapasitas];
	//array id
	int id[kapasitas];
	int awal, akhir;
} antrean;
//inisiasi antrian
void init()
{
	antrean.awal = 0;
	antrean.akhir = 0;
}
//check apakah gudang kosong
bool checkkosong()
{
	if (antrean.akhir == 0)
	{
		return true;
	} 
	 else
	{
	 	return false;
	}
}
//check apakah gudang penuh
bool gudangpenuh()
{
	if (antrean.akhir == kapasitas)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//inqueque
void inputData(int jumlahbarang)
{
	string temp;
	for (int i = 0; i < jumlahbarang; i++)
	{
		if (antrean.akhir < jumlahbarang + antrean.akhir)
		{
			cout << "masukan barang ke " << antrean.akhir+1 << endl;
			if (i == 0)
			{
				cin.ignore();
			}
			getline(cin, temp);
			cout << " data masuk " << endl;
			antrean.namabarang[antrean.akhir] = temp;
			antrean.id[antrean.akhir] = antrean.akhir;
			antrean.akhir++;
		}
	}
}
void periksabarang()
{
	for (int i = antrean.awal; i < antrean.akhir; i++)
	{
		cout << "barang dengan id ke- " <<antrean.id[i] << " = " << antrean.namabarang[i] << endl;
	}
}
//dequeque
void barangkeluar()
{
	for (int i = 0; i < antrean.akhir; i++)
	{
		antrean.id[i] = antrean.id[i + 1];
		antrean.namabarang[i] = antrean.namabarang[i + 1];
	}
}

//Bubble sort ascending
void sortNama()
{
	string temp1;
	int temp2;
	for (int i = antrean.awal; i < antrean.akhir; i++)
	{
		for (int j = i + 1; j < antrean.akhir; j++)
		{
			if (antrean.namabarang[j] < antrean.namabarang[i]);
			{
				//untuk namaBarang
				temp1 = antrean.namabarang[i];
				antrean.namabarang[i] = antrean.namabarang[j];
				antrean.namabarang[j] = temp1;
				
				//untuk id Barang
				temp2 - antrean.id[i];
				antrean.id[i] = antrean.id[j];
				antrean.id[j] = temp2;
			}
		}
	}
}
//Bubble sort ascending
void sortID()
{
	string temp1;
	int temp2;
	for (int i = antrean.awal; i < antrean.akhir; i++)
	{
		for (int j = i + 1; j < antrean.akhir; j++)
		{
			if (antrean.id[j] < antrean.id[i]);
			{
				//untuk namaBarang
				temp1 = antrean.namabarang[i];
				antrean.namabarang[i] = antrean.namabarang[j];
				antrean.namabarang[j] = temp1;
				
				//untuk id Barang
				temp2 - antrean.id[i];
				antrean.id[i] = antrean.id[j];
				antrean.id[j] = temp2;
			}
		}
	}
}
//Bubble sort
void sortIDDescending()
{
	string temp1;
	int temp2;
	for (int i = antrean.awal; i < antrean.akhir; i++)
	{
		for (int j = i + 1; j < antrean.akhir; j++)
		{
			if (antrean.id[j] < antrean.id[i]);
			{
				//untuk namaBarang
				temp1 = antrean.namabarang[i];
				antrean.namabarang[i] = antrean.namabarang[j];
				antrean.namabarang[j] = temp1;
				
				//untuk id Barang
				temp2 - antrean.id[i];
				antrean.id[i] = antrean.id[j];
				antrean.id[j] = temp2;
			}
		}
	}
}
//Bubble sort
void sortNamaDescending()
{
	string temp1;
	int temp2;
	for (int i = antrean.awal; i < antrean.akhir; i++)
	{
		for (int j = i + 1; j < antrean.akhir; j++)
		{
			if (antrean.namabarang[j] < antrean.namabarang[i]);
			{
				//untuk namaBarang
				temp1 = antrean.namabarang[i];
				antrean.namabarang[i] = antrean.namabarang[j];
				antrean.namabarang[j] = temp1;
				
				//untuk id Barang
				temp2 - antrean.id[i];
				antrean.id[i] = antrean.id[j];
				antrean.id[j] = temp2;
			}
		}
	}
}
//squential search
void caribarang(string cari)

{
	int searchNama[kapasitas];
	int j;
	j = 0;
	for (int i = antrean.awal; i < antrean.akhir; i++)
	{
		if (antrean.namabarang[i] == cari)
		{
			searchNama[j] = i;
			j++;
		}
	}
	if (j > 0)
	{
		cout << "data yang di cari adalah ; " << cari << endl;
		cout << "data tersebut terdapat pada index array ke : ";
		{
			cout << searchNama[j] << endl;
		}
	}
	else
	{
		cout << "data tidak di temukan " << endl;
	}
}
// clear all
void hapussemuadata()
{
	antrean.akhir = 0;
}

int main()
{
	//tipe data & variabel
	int jumlahbarang;
	int menu;
	string cariNamabarang;
	//memanggil fungsi init
	init();
	//perulangan do while
	do
	{system("cls");
		cout << "=============program administrasi gudang============= "<<endl;
		cout << " silahkan pilih : " <<endl;
		cout << "\t 1. input data " <<endl;
		cout << "\t 2. lihat data " <<endl;
		cout << "\t 3. keluarkan dari gudang " <<endl;
		cout << "\t 4. urutkan data bedasarkan ID (ascending) " <<endl;
		cout << "\t 5. urutkan data bedasarkan Nama barang (ascending) " <<endl;
		cout << "\t 6. sortBy ID descending " <<endl;
		cout << "\t 7. sortBy Nama descending " <<endl;
		cout << "\t 8. cari data " <<endl;
		cout << "\t 9. bersihkan data dari gudang " <<endl;
		cout << "\t 10. keluar \n"
			 << endl;
		
		cout << "masukan pilihan : ";
		cin >> menu;
		system("cls");
		
		switch(menu)
		{
		// input data
		case 1:
			if (gudangpenuh() == true)
			{
				cout << "Gudang Sudah Penuh" << endl;
			}
			else
			{
				cout << "masukkan jumlah barang : ";
				cin >> jumlahbarang;
				inputData(jumlahbarang);
			}
			break;
		// lihat data
		case 2:
			if (checkkosong() == true)
			{
				cout << "Silahkan input barang terlebih dahulu" << endl;
			}
			else 
			{
				periksabarang();
			}getch();
			break;
		// keluarkan dari gudang
		case 3:
			if (checkkosong() == true)
			{
				cout << "Silahkan input barang terlebih dahulu" << endl;
			}
			else 
			{
				barangkeluar();
			}
periksabarang();
getch();
			break;
		// Urutkan Data berdasarkan ID secara ascending
case 4:
			if (checkkosong() == true)
			{
				cout << "Silahkan input barang terlebih dahulu" << endl;
			}
			else 
			{
				sortID();
			}
			break;
		// Urutkan Data berdasarkan Nama Barang Secara ascending
		case 5:
			if (checkkosong() == true)
			{
				cout << "Silahkan input barang terlebih dahulu" << endl;
			}
			else 
			{
				sortNama();
			}
			break;
		// SortBy ID Descending
		case 6:
			cout<<"Sorting By id Descending" <<endl;
			sortIDDescending();
			break;
		//Sort By Name Descending
		case 7:
			cout<<"Sorting By Nama Descending"<<endl;
			sortNamaDescending();
			break;
		// Cari Data
		case 8:
			cout<<"Masukan Nama Barang yang ingin di cari: ";
			cin.ignore();
			getline(cin, cariNamabarang);
			caribarang(cariNamabarang);getch();
			break;
		// Bersihkan Gudang dari barang
		case 9:
			cout<<"menghapus data . . ."<<endl;
			hapussemuadata();
			cout<<"data sudah dihapus"<<endl;
			getch();
			break;
			
		case 10:
			cout<<"keluar dari program"<<endl;
			break;
		default:
			cout<<"masukan angka sesuai di menu"<<endl;
			getch();
			break;	
		}
	}while (menu != 10);
}
