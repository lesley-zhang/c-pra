#include<iostream>
using namespace std;

class Person {
public:
	//��̬��Ա����
	//1.���ж�����һ���ڴ�
	//2.����׶ξͷ����ڴ�
	//3.�������������ڳ�ʼ������

	static int m_a;
	int m_b;

	//��̬��Ա����


	//��̬��Ա����Ҳ���з���Ȩ�޵� private��
	//1.���ж�����һ������
	//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	static void func() {
		cout << "static void func����" << endl;
		m_a = 100;
		//��̬��Ա���������Է��ʷǾ�̬��Ա����,��֪�����������ĸ������m_b
		//m_b = 200;
	}
private:
	static void func2() {
		cout << "����static void func2" << endl;
	}
};

void test02() {
	//�����ַ��ʷ�ʽ
	//1.ͨ���������
	Person p;
	p.func();
	//2.ͨ������
	Person::func();
}


int Person::m_a = 100;

void test01() {
	Person p;
	cout << p.m_a << endl;

	Person p1;
	//200
	p.m_a = 200;
	//��̬��Ա�������ʵ����ַ�ʽ:
	//1.ͨ������
	cout << p.m_a << endl;
	//2.ͨ������
	cout << Person::m_a << endl;
	//��̬��Ա���������Է��ʷǾ�̬��Ա����
	//Person::func2();//������ʲ���˽�о�̬��Ա����
	
}

int main() {
	test01();
	test02();
	return 0;
}