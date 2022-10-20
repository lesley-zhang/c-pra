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
	Person(string name, string pName):m_name(name), m_phone(pName){}//Phone m_phone = pName//隐式转换
	string m_name;

	Phone m_phone;
};

void test01() {
	Person p("zhangsan", "apple");//先调用对象成员的构造，再调用本类的构造
	cout << p.m_name << "拿着" << p.m_phone.pName << "的手机" << endl;
}

int main() {
	test01();
	return 0;
}