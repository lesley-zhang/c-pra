#include<iostream>
using namespace std;

class Person {
public:
	//静态成员变量
	//1.所有对象共享一份内存
	//2.编译阶段就分配内存
	//3.类内声明，类内初始化操纵

	static int m_a;
	int m_b;

	//静态成员函数


	//静态成员变量也是有访问权限的 private：
	//1.所有对象共享一个函数
	//2.静态成员函数只能访问静态成员变量
	static void func() {
		cout << "static void func调用" << endl;
		m_a = 100;
		//静态成员函数不可以访问非静态成员变量,不知道到底属于哪个对象的m_b
		//m_b = 200;
	}
private:
	static void func2() {
		cout << "调用static void func2" << endl;
	}
};

void test02() {
	//有两种访问方式
	//1.通过对象访问
	Person p;
	p.func();
	//2.通过类名
	Person::func();
}


int Person::m_a = 100;

void test01() {
	Person p;
	cout << p.m_a << endl;

	Person p1;
	//200
	p.m_a = 200;
	//静态成员函数访问的两种方式:
	//1.通过对象
	cout << p.m_a << endl;
	//2.通过类名
	cout << Person::m_a << endl;
	//静态成员函数不可以访问非静态成员变量
	//Person::func2();//类外访问不到私有静态成员函数
	
}

int main() {
	test01();
	test02();
	return 0;
}