#include<iostream>
using namespace std;

class Person {

	//成员变量和成员函数分开存储
	int m_a;//非静态成员，属于类上
	int m_c;
	static int b;//静态成员函数，不属于类上
	void func(){}//非静态成员函数，不属于类上
	static void func01() {}//非静态成员函数，不属于类上
};

int b = 10;

void test01() {
	Person p;
	//空对象占用空间为：1(类为空)
	//c++编译器也会为空对象分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个杜伊无谓的地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test02() {
	Person p;
	cout << "size of p = " << sizeof(p) << endl;

}

int main() {
	//test01();
	test02();
	system("pause");

}