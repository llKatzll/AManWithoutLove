#include <iostream>
#include <memory>
#include<Windows.h>

using namespace std;

string a;
string b;
string d;
int c;

struct book {
	int num;
	string name;
};

void inquiry() {
	struct book x[100];

	Sleep(1000);
	cout << "(익숙한 얼굴의 사서는 컴퓨터를 들고 오더니 물었다." << endl;
	Sleep(2000);
	cout << "몇 번째 칸에 있는 책 이었더라.." << endl;
	Sleep(2000);
	cout << "(사서는 컴퓨터를 타닥이며 중얼거렸다.)" << endl;
	Sleep(2000);

	cin >> c;

	if (x[c].name != "") {
		cout << "'책 있음'" << endl;
		Sleep(1000);
	}
	else {
		cout << "'책 없음'" << endl;
	}
	Sleep(1500);
}

void Registration() {
	struct book x[100]; //순서 책

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

	x[c].num = c;
	x[c].name = b;

	Sleep(3000);
	cout << "(어디선가 책을 꽃고 오고 달려오는 사람이 눈에 띈다.)" << endl;
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
	cout << ">> 등록" << endl;
	cout << ">> 조회" << endl;
	cout << endl;
	cin >> a;

	if (a == "등록") {
		Registration();
	}
	if (a == "조회") {
		Sleep(2000);
		cout << "아직 ㅋㅋ 그 기능은 ㅋㅋ 지원을 안하는ㅋㅋ데" << endl;
		Sleep(2000);
		cout << "아.. 한다고?" << endl;
		Sleep(1500);
		cout << "미안해.." << endl;
	}
	else {
		Sleep(2000);
		cout << "엄.." << endl;
		Sleep(1500);
		cout << "도서관을 잘못 찾아온 것 같은데.." << endl;
		Sleep(2000);
	}
}