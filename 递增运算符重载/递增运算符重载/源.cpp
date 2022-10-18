//ǰ�õ���
//���õ���

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

	//ǰ�õ���
	//�������õĻ��ᴴ���¶������¶�������Ͻ��м��㣻����������Ϊ��һֱ��һ�����ݽ��в���
	//����++�����
	MyInteger& operator++() {
		//�Ƚ���++����
		m_Num++;

		//�ٽ�������һ������
		return *this;
	}
	//����ֵ������Ϊ��������,int��һ��ռλ����������ǰ�úͺ��õ���

	//���õ���
	//����ֵ�����ܷ��ؾֲ�����������
	MyInteger operator++(int) {
		//�ȼ�¼��ʱ���
		MyInteger temp = *this;
		//�����
		m_Num++;
		//�ٽ���¼������з���
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