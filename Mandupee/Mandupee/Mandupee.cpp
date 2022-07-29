#include <iostream>
#include <memory>

using namespace std;

//포인터만 사용

// return a
int q1() {
	int* a;
	int a = 2;
	*a = 1;

	return *a;
}

// return a + b + c;
int q2() {
	int* a;
	int* b;
	int* c;

	*a = 1;
	*b = 2;

	return *a + *b + *c;
}

// a = b + c;
// b = a + c;
// c = a + b;
// return a + b + c;
int q3() {
	int* a;
	int* b;
	int* c;

	*a = 2;
	*b = 4;
	*c = 3;

	*a = *b + *c;
	*b = *a + *c;
	*c = *a + *b;

	return *a + *b + *c;
}

// if (a == 2) {
//   return b;
// }
// else {
//   return c;
// }
int q4() {
	
}

// pointa는 b를 참조한다
// pointb는 c를 참조한다
// pointc는 a를 참조한다
// return a + b + c;
int q5() {

}


int a = 0;
int b = 1;
int c = 2;

int* pointa;
int* pointb;
int* pointc;


int main()
{
	pointa = &a;
	pointb = &b;
	pointc = &c;

	cout << q1() << endl;
	cout << q2() << endl;
	cout << q3() << endl;
	cout << q4() << endl;
	cout << q5() << endl;
}


