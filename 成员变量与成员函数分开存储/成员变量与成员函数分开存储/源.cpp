#include<iostream>
using namespace std;

class Person {

	//��Ա�����ͳ�Ա�����ֿ��洢
	int m_a;//�Ǿ�̬��Ա����������
	int m_c;
	static int b;//��̬��Ա����������������
	void func(){}//�Ǿ�̬��Ա����������������
	static void func01() {}//�Ǿ�̬��Ա����������������
};

int b = 10;

void test01() {
	Person p;
	//�ն���ռ�ÿռ�Ϊ��1(��Ϊ��)
	//c++������Ҳ��Ϊ�ն������һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ��������ν�ĵ�ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test02() {
	Person p;
	cout << "size of p = " << sizeof(p) << endl;

}

int main() {
	//test01();
	test02();
	system("pause");

}