#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	int id;
	string name;
	string department;
	string position;
public:
	Employee(string n, int i, string d, string p)
	{
		name = n;
		id = i;
		department = d;
		position = p;
	}
	Employee(string n, int i)
	{
		name = n;
		id = i;
	}
	Employee()
	{
		name = "";
		id = 0;
		department = "";
		position = "";
	}
	void setName(string n)
	{	name = n;}
	void setId(int i)
	{ id = i; }
	void setDepartment(string d)
	{
		department = d;
	}
	void setPosition(string p)
	{
		position = p;
	}
	string getName()
	{
		return name;
	}
	int getId()
	{
		return id;
	}
	string getDepartment()
	{
		return department;
	}
	string getPosition()
	{
		return position;
	}
	void displayEmployee()
	{
		cout << "Name:" << getName() << endl;
		cout << "ID:" << getId() << endl;
		cout << "Department:" << getDepartment() << endl;
		cout << "Position:" << getPosition() << endl;
	}
};


int main()
{
	Employee susan("susan meyers", 47899,"accounting","vice president" );
	Employee mark("mark jones", 39991);
	mark.setDepartment("IT");
	mark.setPosition("programmer");
	susan.displayEmployee();
	mark.displayEmployee();

    return 0;
}

