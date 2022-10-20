#include<iostream>
using namespace std;

class Person {
public:
	////这没问题
	//Person(int age): age(age){
	//}
	
	////认为三个age是同一个age
	//Person(int age) {
	//	age = age;
	//}

	//this指针指向的是被调用的成员函数所属的对象
	Person(int age) {
		this->age = age;
		}

	int age;

	/*void PersonAddPerson(const Person& p) {
		this->age += p.age;
	}*/

	 Person& PersonAddPerson(const Person& p) {
		this->age += p.age;
		return *this;
	 }

	 /*Person PersonAddPerson(const Person& p) {
		 this->age += p.age;
		 return *this;
	 }*/

};

void test01() {
	Person p1(18);
	cout << "p1 age: " << p1.age << endl;
}

void test02() {
	Person p1(10);
	Person p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1);
	cout << p2.age <<endl;
}

int main() {
	//test01();
	test02();
	return 0;
}