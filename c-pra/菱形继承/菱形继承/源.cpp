#include<iostream>
using namespace std;

class Animal{
public:
	Animal():m_A(100){}
	int m_A;
};

//��̳�
class Sheep :virtual public Animal {

};

//Animal�����
class Camel :virtual public Animal {

};

class YangTuo :public Sheep, public Camel {

};

//����m_A������  ��Դ�˷�  ������Ϣ����

void test01() {
	YangTuo st;
	st.Sheep::m_A = 18;
	st.Camel::m_A = 19;
	cout << st.Sheep::m_A << endl;
	cout << st.Camel::m_A << endl;
	cout << st.m_A << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}

