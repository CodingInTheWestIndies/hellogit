
#ifndef KRISCLASS_H_
#define KRISCLASS_H_
#include <string>

using namespace std;

class KrisClass
{
private:
	int age = 0; //attributes
	string name = " ";

public: //methods (member functions)

	void SetName();
	void SetAge();
	string GetName();
	int GetAge();

};

#endif