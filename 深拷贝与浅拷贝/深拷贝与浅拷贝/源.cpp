#include<iostream>
using namespace std;

//�����ǳ����

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

	//�Լ�ʵ��һ���������캯��
	Person(const Person& p) {
		cout << "person�������캯������" << endl;
		age = p.age;
		//������Ĭ�ϴ���
		//height1 = p.height1;//���д����������,�ظ��ͷ�ͬһ���ڴ�

		//���
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
	cout << "p1������Ϊ�� " <<  p1.age << endl;
	//ǳ���������ڴ��ظ��ͷţ���������
	Person p2(p1);
	cout << "p2������Ϊ�� " << p2.age << endl;
}

int main() {
	test01();
	system("pause");
}