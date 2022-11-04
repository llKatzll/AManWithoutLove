#include <iostream>
#include <memory>
#include <Windows.h>

using namespace std;	

int q10(int factorial) {
    int done = 1;
    for (int i = 2; i <= factorial; i++){
        done *= i;
	}
    return done;
}


void q11(int& c, int& d) {
    int swwap;
    swwap = c;
    c = d;
    d = swwap;
}


//12. 값 스왑
void q12(int* c, int* d) {
    int swap;
    swap = *c;
    *c = *d;
    *d = swap;
}

int q13(int arr[10]) {

    int note = 0;
    //for 문 안에다가 0을 새겨버리면 반복할 때마다 0으로 초기화를 시켜버림

    for (int i = 0; i < 10; i++) {
        if (arr[i] > note) {
            note = arr[i];
        }
    }
    return note;
}

void q14(int* arr) {
    //c = b;
    //b = a;
    //a = c;
    int c;
    int b = 0;
    int o = 9;

    for (int a = 0; a < 6; a++) {

        c = arr[b];
        arr[b] = arr[o];
        arr[o] = c;
        b++;
        o--;
    }
}

int q15(int arr[8]) {
    
    int a = 0;
    int b = 1;
    int c = 2;
    int d;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    for (int i = 0; i < 20; i++) {

        d = a + b + c;
        cout << d << endl;
        a = b;
        b = c;
        c = d;
    }
    return c;
    
    
}

bool q16(int a) {
    int b;

    b = a % 13;

    if (b == 0) {
        return true;
    }
    else {
        return false;
    }
    
}

void q17(string a) {

}

int q18(int a, int b) {
    int note = 0;
    int c;
    for (int i = 0; i <= a; i++) {
        c = i % b;
        if (c == 0) {
            note += i;
        }
        
    }
    return note;
}

int main() {

    int p = 13;
    int o = 3;
    int l;

    l = p % o;

    if (l == 0) {
        cout << "true" << endl;
    }
    else {
        cout << "익사해라" << endl;
    }


	cout << "Q10: " << endl;
	cout << q10(8) << endl;;
	cout << endl;

    {
        int a = 10;
        int b = 20;
        cout << "Q11: " << endl;
        q11(a, b);
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
        cout << endl;
    }

    {
        int a = 10;
        int b = 20;
        cout << "Q12: " << endl;
        q12(&a, &b);
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
        cout << endl;
    }

    {
        cout << "Q13: " << endl;
        int temp[] = { 3, 4, 8, 1, 342, 9, 10, 1, 3, 8 };
        cout << q13(temp) << endl;
        cout << endl;
    }

    {
        cout << "Q14: " << endl;
        int temp[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        q14(temp);
        for (int x = 0; x < 10; x++) {
            cout << temp[x] << endl;
        }
        cout << endl;
    }

    {
        cout << "Q15: " << endl;
        int temp[] = { 1, 0, 0, 0, 1, 1, 1, 0 };
        cout << q15(temp) << endl;
        cout << endl;
    }

    {
        cout << "Q16: " << endl;
        cout << q16(26) << endl;
        cout << endl;
    }

    {
        cout << "Q17: " << endl;
        q17("BC");
        cout << endl << endl;
    }

    {
        cout << "Q18: " << endl;
        cout << q18(15 ,3) << endl;
        cout << endl;
    }
}



/*
10. 팩토리얼 계산기
11. (보류)숫자 스왑하기. a와 b의 숫자를 스왑한다
12. 숫자 스왑하기. c/d 포인터를 이용하여 a와 b의 숫자를 스왑한다
13. 배열 안에 가장 높은 숫자 리턴하기
14. 배열 스왑. 배열 안에 숫자들 순서를 거꾸로 만든다
15. 배열 안에 2진수 숫자이다 eg: {1, 0, 0, 0, 1, 1, 1, 0}는 2진수로 10001110 2진수 숫자를 10진수로 리턴하라
16. 핀 확인. int a가 입력 받은 핀 숫자이다. 핀이 13의 배수인지 확인하고 배수이면 true 리턴, 아니면 false 리턴
 */