#include<iostream>
using namespace std;

//继承方式

//公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};


class Son1 : public Base1 {
public:
	void func() {
		m_A = 10;//父类中的公共权限拿到手了,依然是公共权限
		m_B = 10;//父类中的保护权限成员，依然是保护权限
		//m_C = 10;//父类中的私有成员访问不了
	}
};




void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//保护权限类内可以访问，类外不能访问
}

int main() {

	system("system");
	return 0;
}

//保护继承
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class son2 :protected Base2 {
public:
	void func() {
		m_A = 100;//父类公共成员现在变成了保护成员
		m_B = 100;//父类保护成员还是保护成员
		//m_C = 100;//子类无法访问父类私有成员
	}
};

void test02() {
	son2 s1;
	//s1.m_A = 100;//类外访问不到
}

//私有继承
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3 {
public:
	void func() {
		m_A = 100;//父类公共成员现在变成了私有成员
		m_B = 100;//父类保护成员变成了私有成员
		//m_C = 100;//子类无法访问父类私有成员
	}
};

class GrandSon3 :public Son3 {
public:
	void func() {
		//m_A = 1000;
	}
};

void test03() {
	Son3 s3;
	//s3.m_A = 100;//无法访问
}