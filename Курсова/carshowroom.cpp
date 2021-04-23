#include "carshowroom.h"

void AVTO::Print()
{
	cout << "????? ??????????, " << name << " " << surname << " " << sum << "" << num << endl;
}

void AVTO::Prints()
{
	cout << "?????? ??????? " << num << ". " << name << " " << surname << " ??????????: " << sum << endl;
}

void AVTO::Car()
{
	cout << "??????? ?????: " << endl;
	cin >> carmake;
	cout << "??????? ??????: " << endl;
	cin >> model;
	cout << "??????? ????: " << endl;
	cin >> color;
	cout << "??????? VIN: " << endl;
	cin >> VIN;
	cout << "??????? ????: " << endl;
	cin >> price;
}

void AVTO::Client()
{
	
	cout << "??????? ???: " << endl;
	SetConsoleCP(1251);
	cin >> name;
	SetConsoleCP(866);
	cout << "??????? ???????: " << endl;
	SetConsoleCP(1251);
	cin >> surname;
	SetConsoleCP(866);
	cout << "??????? ??????" << endl;
	cin >> sum;
}

void AVTO::scars()
{
	ofstream fout;
	fout.open("cars.txt", ofstream::app);
	if (!fout.is_open())
	{
		cout << "?????? ???????? ?????..." << endl;
	}
	else
	{
		fout << carmake << " " << model << " " << color << " " << VIN << " " << price << endl;
	}
	fout.close();
}

void AVTO::pcars()
{
	ifstream fin;
	fin.open("cars.txt");
	if (!fin.is_open())
	{
		cout << "?????? ???????? ??????..." << endl;
	}
	else
	{
		cout << endl;
		cout << "?????" << "\t\t??????" << "\t\t????" << "\t\tVIN" << "\t\t????" << endl;
		while (!fin.eof())
		{
			carmake = "";
			model = "";
			color = "";
			VIN = "";
			price = NULL;
			fin >> carmake >> model >> color >> VIN >> price;
			cout << carmake << "\t\t" << model << "\t\t" << color << "\t\t" << VIN << "\t" << price << endl;
		}
	}
	fin.close();
}

void AVTO::sclient()
{
	ofstream fout;
	fout.open("clients.txt", ofstream::app);
	if (!fout.is_open())
	{
		cout << "?????? ???????? ??????..." << endl;
	}
	else
	{
		fout << num << " " << name << " " << surname << " " << sum << endl;
	}
	fout.close();
}

void AVTO::pclient()
{
	ifstream fin;
	fin.open("clients.txt");
	if (!fin.is_open())
	{
		cout << "?????? ???????? ??????..." << endl;
	}
	else
	{
		cout << endl;
		cout << "???" << "\t\t\t???????" << "\t\t??????" << endl;
		while (!fin.eof())
		{
			name = "";
			surname = "";

			fin >> num >> name >> surname >> sum;
			cout << num << " " << name << "\t\t\t" << surname << "\t\t" << sum << endl;
			
		}
	}
	fin.close();
}

AVTO::AVTO()
{
	name = "-----";
	surname = "------";
	sum = 0;
	num = 0;
}

AVTO::AVTO(string name, string surname, int sum, int num) : name(name), surname(surname), sum(sum), num(num)
{
	cout << "1" << endl;
}

AVTO::AVTO(const AVTO &copy) : name(copy.name), surname(copy.surname), sum(copy.sum), num(copy.num)
{
	ofstream fout;
	fout.open("vip_clients.txt", ofstream::app);
	fout << num << " " << name << " " << surname << " " << sum << endl;
	fout.close();
}

AVTO::~AVTO()
{

}

AVTO AVTO:: operator - (int x)
{
	return AVTO(name, surname, (sum - x), num);
}

AVTO AVTO:: operator + (int X)
{
	return AVTO(name, surname, (sum + X), num);
}

AVTO AVTO::operator ++ ()
{
	++num;
	AVTO temp;
	temp.num = num;
	return temp;
}
