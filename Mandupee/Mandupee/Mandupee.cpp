#include <iostream>
#include <memory>

using namespace std;

//포인터만 사용

// return a
int q1() {

}

// return a + b + c;
int q2() {

}

// a = b + c;
// b = a + c;
// c = a + b;
// return a + b + c;
int q3() {

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


