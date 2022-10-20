#include<iostream>
#include<string>
using namespace std;

class MyPrint {
public:
	//重载函数调用运算符
	//仿函数
	void operator()(string test) {
		cout << "test" << endl;
	}
};

class MyAdd {
public:
	int operator()(int num1, int num2) {
		//cout << "the answer is " << num1 + num2 << endl;
		return num1 + num2;
	}
};

void test01() {
	MyPrint myPrint;
	myPrint("hello world");
}

void test02() {
	MyAdd myAdd;
	cout << myAdd(5, 8) << endl;
	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}