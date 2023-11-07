#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char nama[50],jenis[10];
	int NIM;
	float  anak;
	
	cout<<"===IMPUT DATA MAHASISWA===\n\n\n";
	cout<<"masukan nama mahasisawa  : ";
	cin.getline(nama,50);
	cout<<"masukan jenis kelamin(L/P) : ";
	cin>>jenis;
	cout<<"masukan Nomor Induk Mahasiswa : ";
	cin>> NIM;
	cout<<"masukan anak ke : ";
	cin>>anak;
	cout<<"\n\n\n";
	cout<<"TAMPILAN DATA \n";
	cout<<"====MAHASISWA====\n";
	cout<<"\nNama mahasiswa \t: "<<nama;
	cout<<"\nJenis kelamin \t:"<<jenis;
	cout<<"\nNomor Induk Mahasiswa \t:"<<NIM;
	cout<<"\nAnak ke \t"<<anak <<" dari 5 bersaudara";
	
	getch();
}
