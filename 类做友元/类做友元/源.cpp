#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodGay {
public:
	GoodGay();
	~GoodGay() { cout << "������������ " << endl; }
	void visit();
	
	Building* building;
};

class Building {
	friend class GoodGay;
public:
	Building();

	string m_sittingroom;

private:
	string m_bedroom;
};

//����д��Ա����
Building::Building() {
	m_bedroom = "����";
	m_sittingroom = "����";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit() {
	cout << "�û������ڷ���" << building->m_sittingroom << endl;
	cout << "�û������ڷ���" << building->m_bedroom << endl;
}

void test01() {
	GoodGay gg;
	gg.visit();
}

int main() {
	test01();
	system("pause");
	return 0;
}