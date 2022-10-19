#include<iostream>
#include<string>
using namespace std;

class Building {
	//ȫ�ֺ�������Ԫ
	friend static void goodGay(const Building* building);
public:
	Building(string sitting_room, string bedroom):m_sitting_room(sitting_room), m_bed_room(bedroom) {}

	string m_sitting_room;

private:
	string m_bed_room;
};

static void goodGay(const Building* building){
	cout << "ȫ�ֺ������ڷ���: " << building->m_sitting_room << endl;
	cout << "ȫ�ֺ������ڷ���: " << building->m_bed_room << endl;

}

void test01() {
	Building building("����", "����");
	goodGay(&building);
}

int main() {
	test01();
}