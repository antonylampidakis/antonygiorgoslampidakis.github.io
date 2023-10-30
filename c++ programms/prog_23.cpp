// ConsoleApplication23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;


class Implementation
{

public:


	// constructor
	Implementation(int v)
		: value(v) // initialize value with v
	{
		// empty body

	} // end construct



	// set value to v
	void setValue(int v)
	{
		value = v; // should validate v
	} // end function setValue



	// return value
	int getValue() const
	{
		return value;
	} // end function getValue


private:
	int value; // data that we would like to hide from the client

}; // end class Implementation



class Interface
{
public:

	Interface(int); // constructor

	void setValue(int); // same public interface as
	int getValue() const; // class Implementation has

	~Interface(); // destructor


private:

	Implementation* ptr;
}; // end class Interface



// constructor
Interface::Interface(int v) : ptr(new Implementation(v)) // initialize ptr to point to a new Implementation object
{
	// empty body
} // end Interface constructor


// call Implementation's setValue function
void Interface::setValue(int v)
{
	ptr->setValue(v);
} // end function setValue



// call Implementation's getValue function
int Interface::getValue() const
{
	return ptr->getValue();
} // end function getValue




// destructor
Interface::~Interface()
{
	delete ptr;
} // end ~Interface destructor




int main()
{
	Interface i(5); // create Interface object

	cout << "Interface contains:" << i.getValue() << " before setValue" << endl;

	i.setValue(10);

	cout << "Interface contains:" << i.getValue() << " after setValue" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
