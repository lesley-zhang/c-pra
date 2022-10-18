#include<iostream>
#include<string>
using namespace std;

class Building {
	//全局函数做友元
	friend static void goodGay(const Building* building);
public:
	Building(string sitting_room, string bedroom):m_sitting_room(sitting_room), m_bed_room(bedroom) {}

	string m_sitting_room;

private:
	string m_bed_room;
};

static void goodGay(const Building* building){
	cout << "全局函数正在访问: " << building->m_sitting_room << endl;
	cout << "全局函数正在访问: " << building->m_bed_room << endl;

}

void test01() {
	Building building("客厅", "卧室");
	goodGay(&building);
}

int main() {
	test01();
}