#include "head.h"
#include <iostream>
using namespace std;

int command;
int hp, dmg;
double level;





void gra()
{
	menu();
	baza();
	
}

void menu()
{
	system("cls");
	cout << "Witaj w grze -tytul gry-, wybierz opcje" << endl << endl;
	cout << "1. Nowa gra" << endl;
	cout << "2. Wyjscie z gry" << endl;
	cin >> command;

	switch (command)
	{
	case 1: 
	{
		klasa();
	} break;

	case 2:
	{
		cout << "Gra zostanie wylaczona, dzieki za gre"; Sleep(2000);
		exit(0);
	} break;

	default: 
	{
		cout << "Co ty klikasz? Nie ma takiej opcji" << endl; Sleep(2000);
		menu();
	}	break;
	}
}

void baza()
{
	system("cls");
	cout << "Znajdujesz sie teraz w siedzibie glownej!" << endl << endl;
	stats();
	cout << endl << "Co chcesz zrobic?" << endl << endl;
	cout << "1. Misja" << endl;
	cout << "2. Sklep " << endl;
	cout << "3. Odpoczynek" << endl;
	cout << "4. *do wymyslenia*" << endl;
	cin >> command;

	switch (command)
	{
	case 1:
	{

	}
	break;

	case 2:
	{

	}
	break;

	case 3:
	{

	}
	break;

	case 4:
	{

	}
	break;

	case 5:
	{
		
	}
	break;

	default:
	{

	}
	break;

	}

}

void stats()
{
	cout << "HP: " << hp << endl << "Obrazenia: " << dmg << endl;
}

void klasa()
{
	system("cls");
	cout << "Wybierz klase postaci!" << endl << endl;
	cout << "1. Wilkolak" << endl;
	cout << "2. Wrozka" << endl;
	cout << "3. Healer" << endl;
	cout << "4. Ewelina" << endl;
	cin >> command;

	switch (command)
	{
	case 1:
	{
		hp = 30;
		dmg = 10;
		baza();
	}
	break;
	case 2:
	{
		hp = 20;
		dmg = 15;
		baza();
	}
	break;
	case 3:
	{
		hp = 15;
		dmg = 20;
		baza();
	}
	break;
	case 4:
	{
		hp = 20;
		dmg = 20;
		baza();
	}
	break;
	default:
	{
		cout << "Nie ma takiej klasy"; Sleep(2000);
		klasa();
	}
	break;
	}
}
