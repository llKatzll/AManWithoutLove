#include <iostream>
#include <memory>

using namespace std;



int main()
{
	int* a = new int;
	a = 123;
	
	int* b = new int;

	*b = 4;
	
	*b = *a + *b;

	cout << *b << endl;

	delete a;

	*a = &b;

	cout << *a << endl;

	int c;

	*c = &a;

	delete a;

	cout << c << endl;
}


