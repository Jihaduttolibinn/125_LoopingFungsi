// BEBAS 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int x;
	srand(time(0));

	do
	{
		cout << "perulangan Dengan Do..While" << endl;
		x = rand() % 10;
		cout << "Nilai X = " << x << endl;
	} while (x > 4);

	char pilihan;

	do {
		string nama;
		
		cout << "Masukan nama = ";
		cin >> nama;

		cout << "Apakah anda inggin mengulangi lagi? (y/n";
		cin >> pilihan;

	} while (pilihan == 'y' || pilihan == 'y');
}