#include<iostream>
using namespace std;

class Base1 {
public:
	Base1():m_A(100){}

	int m_A;
};

class Base2 {
public:
	Base2() :m_B(200),m_A(10) {}
	int m_A;
	int m_B;
};

//������Ҫ�̳�Base1��Base2
//�﷨��class ���� : �̳з�ʽ ����, �̳з�ʽ ����1...{};
class Son :public Base1, public Base2 {
public:
	Son():m_C(300),m_D(400) {}
	

	int m_C;
	int m_D;
};

void test01() {
	Son s;
	cout << "size of Son = " << sizeof(Son) << endl;
	//������
	cout << "m_A  1 =  " << s.Base1::m_A << endl;
	cout << "m_A  2 =  " << s.Base2::m_A << endl;
}


int main() {
	test01();
	system("pause");
	return 0;
}