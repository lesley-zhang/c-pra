#include<iostream>
using namespace std;

//�̳з�ʽ

//�����̳�
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
		m_A = 10;//�����еĹ���Ȩ���õ�����,��Ȼ�ǹ���Ȩ��
		m_B = 10;//�����еı���Ȩ�޳�Ա����Ȼ�Ǳ���Ȩ��
		//m_C = 10;//�����е�˽�г�Ա���ʲ���
	}
};




void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//����Ȩ�����ڿ��Է��ʣ����ⲻ�ܷ���
}

int main() {

	system("system");
	return 0;
}

//�����̳�
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
		m_A = 100;//���๫����Ա���ڱ���˱�����Ա
		m_B = 100;//���ౣ����Ա���Ǳ�����Ա
		//m_C = 100;//�����޷����ʸ���˽�г�Ա
	}
};

void test02() {
	son2 s1;
	//s1.m_A = 100;//������ʲ���
}

//˽�м̳�
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
		m_A = 100;//���๫����Ա���ڱ����˽�г�Ա
		m_B = 100;//���ౣ����Ա�����˽�г�Ա
		//m_C = 100;//�����޷����ʸ���˽�г�Ա
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
	//s3.m_A = 100;//�޷�����
}