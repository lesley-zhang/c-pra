#include<iostream>
using namespace std;

//继承中的构造和析构顺序
class Base {
public:
	Base() {
		cout << "Base的构造函数调用" << endl;
	}

	~Base() {
		cout << "Base的析构函数调用" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son的构造函数调用" << endl;
	}

	~Son() {
		cout << "Son的析构函数调用" << endl;
	}
};

void test01() {
	//Base b;
	//先有父类，再有子类，析构与构造顺序相反
	Son S1;
}

int main() {
	test01();
	system("pause");
	return 0;
}