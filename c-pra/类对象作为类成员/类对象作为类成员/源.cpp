#include<iostream>
#include<string>
using namespace std;

class Phone {
public:
	Phone(string name) :pName(name) {

	}

	string pName;
};

class Person {
public:
	Person(string name, string pName):m_name(name), m_phone(pName){}//Phone m_phone = pName//��ʽת��
	string m_name;

	Phone m_phone;
};

void test01() {
	Person p("zhangsan", "apple");//�ȵ��ö����Ա�Ĺ��죬�ٵ��ñ���Ĺ���
	cout << p.m_name << "����" << p.m_phone.pName << "���ֻ�" << endl;
}

int main() {
	test01();
	return 0;
}