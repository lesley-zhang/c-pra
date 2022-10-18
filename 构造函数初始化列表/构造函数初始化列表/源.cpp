#include<iostream>
using namespace std;

class Person {
public:
	/*Person(int a, int b, int c){
		m_a = a;
		m_b = b;
		m_c = c;
	}*/

	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c){}

	int m_a;
	int m_b;
	int m_c;
};

void test01() {
	Person p(10, 20, 30);
	cout << "m_a= " << p.m_a << endl;
}

int main() {
	test01();
}