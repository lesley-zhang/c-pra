#include<iostream>
using namespace std;

//�̳��еĶ���ģ��

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//һ��intռ�ĸ��ֽ�
class Son :public Base {
public:
	int m_D;
};


//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷� F:
//��ת�ļ�·�� cd ����·����
//�鿴����
// cl /dl reportSingleClassLayout���� �ļ���
void test01() {
	cout << sizeof(Base) << endl;
	//�����еĳ�Ա�����أ�����ȷ���̳���
	cout << sizeof(Son) << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}