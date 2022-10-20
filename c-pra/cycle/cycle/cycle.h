#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class Cycle {
private:
	int r;
	Point centre;
public:
	void setR(int r);

	int getR();

	void setCentre(Point centre);

	Point getCentre();
};
