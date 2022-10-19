#include<iostream>
using namespace std;

//访问子类同名成员，直接访问即可
//访问父类同名成员，需要加作用域

class Base {
public:
	Base() :m_A(100){}


	int m_A;

	void func() {
		cout << "Base::func " << endl;
	}

	void func(int a) {
		cout << "Base:：func重载" << endl;
	}
};

class Son:public Base{
public:
	Son():m_A(200){}

	int m_A;
	void func() {
		cout << "Son::func " << endl;
	}
};


//同名成员属性处理方式
void test01() {
	Son s;
	cout << "m_A = " << s.m_A << endl;
	//
	cout << "Base::m_A = " << s.Base::m_A << endl;
	//s.func(100);
	//如果子类出现和父类同名的成员函数，那么子类的同名成员会隐藏掉父类中所有的同名成员，重载也会被隐藏
	s.Base::func();
}

//同名成员函数处理方式
void test02() {
	Son s1;
	s1.Base::func();

}

//子类对象可以访问子类的同名成员
//子类对象加作用域可以访问到父类中的同名成员
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}