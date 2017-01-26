#include <iostream>
#include <string>
#include "KrisClass.h"


using namespace std;

void KrisClass::SetName()
{
	cout << "Enter your name: ";
	getline(cin, name);
	cout << endl;
}

void KrisClass::SetAge()
{
	cout << "Enter age: ";
	cin >> age;
	cout << endl;
	cout << "Entry confirmed." << endl;
}

string KrisClass::GetName()
{
	return name;
}

int KrisClass::GetAge()
{
	return age;
}