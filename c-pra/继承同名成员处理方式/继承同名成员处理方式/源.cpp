#include<iostream>
using namespace std;

//��������ͬ����Ա��ֱ�ӷ��ʼ���
//���ʸ���ͬ����Ա����Ҫ��������

class Base {
public:
	Base() :m_A(100){}


	int m_A;

	void func() {
		cout << "Base::func " << endl;
	}

	void func(int a) {
		cout << "Base:��func����" << endl;
	}
};

class Son:public Base{
public:
	Son():m_A(200){}

	int m_A;
	void func() {
		cout << "Son::func " << endl;
	}
};


//ͬ����Ա���Դ���ʽ
void test01() {
	Son s;
	cout << "m_A = " << s.m_A << endl;
	//
	cout << "Base::m_A = " << s.Base::m_A << endl;
	//s.func(100);
	//���������ֺ͸���ͬ���ĳ�Ա��������ô�����ͬ����Ա�����ص����������е�ͬ����Ա������Ҳ�ᱻ����
	s.Base::func();
}

//ͬ����Ա��������ʽ
void test02() {
	Son s1;
	s1.Base::func();

}

//���������Է��������ͬ����Ա
//����������������Է��ʵ������е�ͬ����Ա
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}