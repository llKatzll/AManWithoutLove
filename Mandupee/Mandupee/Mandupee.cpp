#include <iostream>
#include <memory>
#include<Windows.h>

using namespace std;

string a;
string b;
int c;

struct book {
	int num;
	string name;
};

void Registration() {


	Sleep(1000);
	cout << "오.. 알았어.." << endl;
	Sleep(1000);
	cout << "무슨 책 등..록하러 왔는지. 알려줄 수 있..어?" << endl;
	Sleep(3000);

	cin >> b;

	Sleep(2000);
	cout << b + " 라는 책이라.. 이걸 등록해달라고?" << endl;
	Sleep(2000);
	cout << "오.. 알았오..." << endl;

	Sleep(2000);
	cout << "알다싶이 여기 도서관은 매우 넓은 공간이라 책을 수납할 수 있는 장소가 가득해" << endl;
	Sleep(3000);
	cout << "(속삭이며) 사실 신설된 도서관이라 아직 책이 한 개도 없어" << endl;
	Sleep(2000);
	cout << "이 불쌍한 피주원 도서관에게 큼.  아까 " + b + " 라는 책을 등록하러 왔다고 했었지?" << endl;
	Sleep(2000);
	cout << "몇 번째 책장에 등록 해줄래?" << endl;
	Sleep(4000);
	cout << "아.. 나보고 하라고?" << endl;
	Sleep(1000);
	cout << "알았오... 몇 번째야?" << endl;
	Sleep(2000);

	cin >> c;

	Sleep(2000);
	cout << "(익숙하게 생긴 사람은 책을 받더니 금새 어디론가 달려갔다.)" << endl;
}

int main() {
	cout << "===================피주원 도서관========================" << endl << endl;
	Sleep(2000);
	cout << "피주원의 도서관에 오신걸 환영합니다" << endl;
	Sleep(2000);
	cout << "(익숙한 얼굴을 한 사람이 문을 열어준다)" << endl;
	Sleep(4000);
	cout << "(익숙한 사람의 얼굴을 한 사람의 뒤를 따라 걷고 있다.)" << endl;
	Sleep(2000);
	cout << "(침묵도 잠깐, 그 사람이 입을 열었다.)" << endl;
	Sleep(2000);
	cout << "ㅇ..여긴 뭐하러 왔어?" << endl;
	Sleep(3000);
	cout << ">> 책 등록하러" << endl;
	cout << ">> 책 조회하러" << endl;
	cout << endl;
	cin >> a;

	if (a == "책 등록하러") {
		Registration();
	}
}