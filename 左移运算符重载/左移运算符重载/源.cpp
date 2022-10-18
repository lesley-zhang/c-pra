#include<iostream>
using namespace std;

class Person {
public:
	friend ostream& operator<<(ostream& cout, Person p);
	Person(int a, int b):m_a(a), m_b(b){}

	////利用成员函数重载运算符
	////p.operator<<(cout) 简化版本 p << cout
	////所以不会利用成员函数重载左移运算符，因为无法实现cout在左侧
	//void operator<<(Person) {

	//}
private:
	int m_a;
	int m_b;
};

//注意这个cout可以改名字，因为它是一个引用
ostream& operator<<(ostream& cout, Person p) {
	cout << p.m_a << endl;
	cout << p.m_b << endl;
	return cout;
}



void test01() {
	Person p(10, 10);
	cout << p << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}