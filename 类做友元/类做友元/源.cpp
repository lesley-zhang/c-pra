#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodGay {
public:
	GoodGay();
	~GoodGay() { cout << "调用析构函数 " << endl; }
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

//类外写成员函数
Building::Building() {
	m_bedroom = "卧室";
	m_sittingroom = "客厅";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit() {
	cout << "好基友正在访问" << building->m_sittingroom << endl;
	cout << "好基友正在访问" << building->m_bedroom << endl;
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