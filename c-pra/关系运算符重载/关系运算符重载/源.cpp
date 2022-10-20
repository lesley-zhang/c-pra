#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person(string name, int age):m_Name(name), m_Age(age){}

	string m_Name;
	int m_Age;

	bool operator==(Person& p) {
		if ((m_Name == p.m_Name) && (m_Age == p.m_Age)) {
			return true;
		}
		return false;
	}

	bool operator!=(Person& p) {
		if ((m_Name == p.m_Name) && (m_Age == p.m_Age)) {
			return false;
		}
		return true;
	}
};

void test01() {
	Person p1("Ton", 18);
	Person p2("Tom", 18);

	if (p1 == p2) {
		cout << "p1=p2" << endl;
	}
	cout << "p1 != p2" << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}