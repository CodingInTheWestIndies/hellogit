
#include <iostream>
#include <string>
#include <vector>
#include "KrisClass.h"
#include "implementation.cpp"

KrisClass obj1;
vector <KrisClass> list;


using namespace std;

int main ()
{
	for (int listnum = 0; listnum < 4; listnum++)
	{
		obj1.SetName();
		obj1.SetAge();
		cin.ignore();
		list.push_back(obj1);
		cout << endl;
	}
	system("cls");
	cout << "LIST OF NAMES AND AGES" << endl;

	for (int listnum = 0; listnum < 4; listnum++)
	{
		cout << list[listnum].GetName();
		cout << ", Age: " << list[listnum].GetAge() << endl;
		
	}
	system("pause");
	return 0;
}

