#include<iostream>
using namespace std;
//��ipad�ʼ�

class Animal {
public:
	//1.�м̳й�ϵ
	//2.����Ҫ��д������麯��
	//3. ��д ������������ ������ �����б���ȫ��ͬ

	//��̬��̬ʹ��
	//����ָ���������  ִ���������

	//���˸�ָ��
	virtual void speak() {
	//��Ա���������ڶ���ģ������������
	//void speak() {
		cout << "�����ٽл�" << endl;
	}

};

class Cat :public Animal {
public:
	void speak() {
		cout << "Сè�ڽл�" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "С���ڽл�" << endl;
	}
};

//������֮�������ת��������ǿ��
//��ַ��󶨣�����׶ξ�ȷ���˺�����ַ
void doSpeak(Animal& animal) {//Animal& animal = cat;��Animal���speak()����
	//�������è˵�����Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ�
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02() {
	cout << "size of Animal " << sizeof(Animal) << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}