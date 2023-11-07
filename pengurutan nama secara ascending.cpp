#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int x,y,a,m,n;
	char nama[5][20] , temp[40];
	
	cout<<"Demo program pengurutan nama secara ascending"<<endl;
	cout<<"Author : muhammad abdul raafi"<<endl;
	cout<<"Nim    : 21.11.3867"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"masukkan nama "<<endl;
	
	for (x=1; x<=5; x++)
	{
		cout<<"nama ke -"<< x << "=";
		gets(nama[x]);
		if (x > 1)
		{
			for (y=1; y<=(x-1); y++)
			{
				a=(strcmp(nama[x], nama[y]));
				if (a<=0)
				{
					strcpy (temp, nama[x]);
					for (n=(x-1); n>=y; n--)
					{
						m=(n+1);
						strcpy (nama[m], nama[n]);
					}
					strcpy (nama[y], temp);
				}
			}
		}
	}
	cout<<"\nsetelah diurutkan dengan metode Ascending :"<<endl;
	for(x=1; x<=5; x++)
	{
		cout<<x<<". "<<nama[x];
		cout<<endl;
	}
	return 0;
} 
