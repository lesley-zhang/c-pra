#include<iostream>
using namespace std;

class Base {
public:
	static int m_A;
	static void func() {
		cout << "Base static func" << endl;
	}
};

int Base::m_A = 100;

class Son :public Base {
public:
	static int m_A;

	static void func() {
		cout << "Son static func" << endl;
	}
};

int Son::m_A = 200;

void test01() {
	Son s1;
	cout << s1.m_A << endl;
	cout << s1.Base::m_A << endl;
	cout << Son::m_A << endl;
	//第一个代表类名方式访问，第二个是作用域
	cout << Son::Base::m_A << endl;
}

void test02() {
	Son s;
	s.func();
	s.Base::func();
	Son::func();
	Son::Base::func();
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}