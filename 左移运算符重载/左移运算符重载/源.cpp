#include<iostream>
using namespace std;

class Person {
public:
	friend ostream& operator<<(ostream& cout, Person p);
	Person(int a, int b):m_a(a), m_b(b){}

	////���ó�Ա�������������
	////p.operator<<(cout) �򻯰汾 p << cout
	////���Բ������ó�Ա���������������������Ϊ�޷�ʵ��cout�����
	//void operator<<(Person) {

	//}
private:
	int m_a;
	int m_b;
};

//ע�����cout���Ը����֣���Ϊ����һ������
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