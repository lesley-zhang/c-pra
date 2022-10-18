#pragma once
#include<iostream>
#include<string>
#include"Building.h"
using namespace std;

class GoodGay {
public:
	GoodGay();
	~GoodGay(){}

	void visit();//可以访问私有成员
	void visit2();
	class Building* building;

};
