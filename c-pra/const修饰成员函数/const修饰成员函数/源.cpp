#include<iostream>
using namespace std;

class Person {
public:

	Person(int a) :m_a(a) {}
	//thisָ�뱾������һ��ָ�볣����ָ���ָ�򲻿����޸�
	//�������const��ָ��ָ���ֵҲ�������޸���
	void showPerson() const{
		//m_a = 100;
		// //Person* const this;
		//this = NULL;//thisָ�벻�ܱ��޸ģ�����ָ���ֵ�����޸�
		this->m_b = 200;
		cout << this->m_b << endl;
	}

	void func(){}

	int m_a;
	//���˹ؼ���mutable���ֿ����޸���
	mutable int m_b;
};

void test01() {
	Person p(10);
	p.showPerson();
}

void test02() {
	//������ֻ���Ե��ó�����
	const Person p(10);
	//������Ҳ���Ը�
	p.m_b = 30;
	////�����󲻿��Ե��÷ǳ�����
	//p.func()
}

int main() {
	test01();
	system("pause");
}