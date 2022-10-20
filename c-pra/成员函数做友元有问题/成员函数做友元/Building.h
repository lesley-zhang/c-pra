#pragma once
#include<iostream>
#include<string>
#include"GoodGay.h"
using namespace std;

//class Building;
//class GoodGay;


class Building {
	friend class GoodGay;
public:
	Building();

	string m_sittingroon;

private:
	string m_bedroom;

};
