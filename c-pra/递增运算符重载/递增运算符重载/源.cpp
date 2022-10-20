//前置递增
//后置递增

#include<iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myInt);
private:
	int m_Num;
public:
	MyInteger(){
		m_Num = 0;
	}
	MyInteger(int num):m_Num(num){}

	//前置递增
	//不是引用的话会创建新对象，在新对象基础上进行计算；返回引用是为了一直对一个数据进行操作
	//重载++运算符
	MyInteger& operator++() {
		//先进行++运算
		m_Num++;

		//再将自身做一个返回
		return *this;
	}
	//返回值不能作为重载条件,int是一个占位参数，区分前置和后置递增

	//后置递增
	//返回值，不能返回局部变量的引用
	MyInteger operator++(int) {
		//先记录当时结果
		MyInteger temp = *this;
		//后递增
		m_Num++;
		//再将记录结果进行返回
		return temp;
	}

	MyInteger& operator--() {
		m_Num--;
		return *this;
	}

	MyInteger operator--(int) {
		MyInteger temp = *this;
		m_Num--;
		return temp;
	}
};

ostream& operator<<(ostream& cout, MyInteger myInt){
	cout << myInt.m_Num << endl;
	return cout;
}

void test01() {
	MyInteger Myint(10);
	cout << ++(++Myint) << endl;
	cout << Myint << endl;
}

void test02() {
	MyInteger Myint1(10);
	cout << Myint1++ << endl;
	cout << Myint1 << endl;
	cout << Myint1-- << endl;
	cout << Myint1 << endl;
	cout << --Myint1 << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}