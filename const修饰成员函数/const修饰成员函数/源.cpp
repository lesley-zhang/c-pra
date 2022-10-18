#include<iostream>
using namespace std;

class Person {
public:

	Person(int a) :m_a(a) {}
	//this指针本质上是一个指针常量，指针的指向不可以修改
	//加了这个const，指针指向的值也不允许修改了
	void showPerson() const{
		//m_a = 100;
		// //Person* const this;
		//this = NULL;//this指针不能被修改，但其指向的值可以修改
		this->m_b = 200;
		cout << this->m_b << endl;
	}

	void func(){}

	int m_a;
	//加了关键字mutable就又可以修改了
	mutable int m_b;
};

void test01() {
	Person p(10);
	p.showPerson();
}

void test02() {
	//常对象只可以调用常函数
	const Person p(10);
	//在这里也可以改
	p.m_b = 30;
	////常对象不可以调用非常函数
	//p.func()
}

int main() {
	test01();
	system("pause");
}