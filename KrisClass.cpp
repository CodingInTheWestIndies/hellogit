
#include <iostream>
#include <string>
#include <vector>
#include "KrisClass.h"


int linearSearch(vector <KrisClass> data, string key);



int main ()
{
KrisClass obj1;
vector <KrisClass> list;
string search_key;

int result;

	for (int listnum = 0; listnum < 4; listnum++)
	{
		obj1.SetName();
		obj1.SetAge();
		std::cin.ignore();
		list.push_back(obj1);
		std::cout << endl;
	}
	system("cls");
	std::cout << "LIST OF NAMES AND AGES" << endl;

	for (int listnum = 0; listnum < 4; listnum++)
	{
		std::cout << list[listnum].GetName();
		std::cout << ", Age: " << list[listnum].GetAge() << endl;
		
	}
	system("pause");
	system("cls");
std::cout<<"Enter a value to search for: ";


   std::cin>>search_key;
   std::cin.ignore();
    while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(list, search_key);

        std::cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          std::cout<<"not found";
        else
          std::cout<<"found at index "<<result;


        std::cout<<endl<<endl<<"Enter a value to search for: ";
        std::cin>>search_key;
	std::cin.ignore(); 
    }

   std::cout<<endl<<"Program is now finished."<<endl<<endl;

	return 0;
}

int linearSearch(vector <KrisClass> data, string key)
{
	for (int i = 0; i < 4; i++)
	{
		if(data[i].GetName() == key)
		return i;
	}
	return -1; //not found

};

