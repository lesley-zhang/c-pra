#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

////javaҳ��
//class Java {
//public:
//	void header() {
//		cout << "��ҳ�������Σ���¼��ע��...(����ͷ��)" << endl;
//	}
//
//	void fooder() {
//		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//
//	void left() {
//		cout << "Java, Python, C++,...(���������б�)" << endl;
//	}
//
//	void content() {
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python {
//public:
//	void header() {
//		cout << "��ҳ�������Σ���¼��ע��...(����ͷ��)" << endl;
//	}
//
//	void fooder() {
//		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//
//	void left() {
//		cout << "Java, Python, C++,...(���������б�)" << endl;
//	}
//
//	void content() {
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++
//class C_plus_plus {
//public:
//	void header() {
//		cout << "��ҳ�������Σ���¼��ע��...(����ͷ��)" << endl;
//	}
//
//	void fooder() {
//		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//
//	void left() {
//		cout << "Java, Python, C++,...(���������б�)" << endl;
//	}
//
//	void content() {
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};


//�̳�ʵ��ҳ��
class BasePage {
public:
	void header() {
		cout << "��ҳ�������Σ���¼��ע��...(����ͷ��)" << endl;
	}

	void fooder() {
		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}

	void left() {
		cout << "Java, Python, C++,...(���������б�)" << endl;
	}
};


//�̳еĺô�
// �﷨��class ���� : �̳з�ʽ ����
// ����Ҳ��������  ����Ҳ��Ϊ����
//Javaҳ��
class Java :public BasePage {
public:
	void content() {
		cout << "Javaѧ����Ƶ" << endl;
	}
};

class Python :public BasePage {
public:
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

class Cpp :public BasePage {
public:
	void content() {
		cout << "c++ѧ����Ƶ" << endl;
	}
};

void test01() {
	cout << "Java������Ƶҳ�����£� " << endl;
	Java ja;
	ja.header();
	ja.left();
	ja.fooder();
	ja.content();

	cout << "---------------------------------------" << endl;

	cout << "Python������Ƶҳ�����£� " << endl;
	Python python;
	python.header();
	python.left();
	python.fooder();
	python.content();

	cout << "---------------------------------------" << endl;

	Cpp cPlusPlus;
	cPlusPlus.header();
	cPlusPlus.left();
	cPlusPlus.fooder();
	cPlusPlus.content();
}

int main() {
	test01();
	system("pasue");
	return 0;
}