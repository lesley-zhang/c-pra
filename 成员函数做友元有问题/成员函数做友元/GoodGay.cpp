#include "GoodGay.h"

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << building->m_sittingroon << endl;
	cout << building->m_bedroom << endl;
}

void GoodGay::visit2()
{
	cout << building->m_sittingroon << endl;
}
