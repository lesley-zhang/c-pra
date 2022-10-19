#include<iostream>
using namespace std;

//深拷贝与浅拷贝

class Person {
public:
	Person() {
		cout << "mo ren " << endl;
	}

	Person(int a, int height) {
		age = a;
		height1  = new int(height);
		cout << "you can gouzao " << endl;
	}

	//自己实现一个拷贝构造函数
	Person(const Person& p) {
		cout << "person拷贝构造函数调用" << endl;
		age = p.age;
		//编译器默认代码
		//height1 = p.height1;//这行代码出的问题,重复释放同一块内存

		//深拷贝
		height1 =  new int(*p.height1);
	}

	~Person() {
		if (height1 != NULL) {
			delete height1;
			height1 = NULL;
		}
		cout << "xi gou" << endl;
	}

	int age;

	int* height1;

};

void test01() {
	Person p1(18, 165);
	cout << "p1的年龄为： " <<  p1.age << endl;
	//浅拷贝导致内存重复释放，用深拷贝解决
	Person p2(p1);
	cout << "p2的年龄为： " << p2.age << endl;
}

int main() {
	test01();
	system("pause");
}