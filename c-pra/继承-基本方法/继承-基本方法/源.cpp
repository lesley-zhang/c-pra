#include<iostream>
using namespace std;

//普通实现页面

////java页面
//class Java {
//public:
//	void header() {
//		cout << "首页，公开课，登录，注册...(公共头部)" << endl;
//	}
//
//	void fooder() {
//		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
//	}
//
//	void left() {
//		cout << "Java, Python, C++,...(公共分类列表)" << endl;
//	}
//
//	void content() {
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//class Python {
//public:
//	void header() {
//		cout << "首页，公开课，登录，注册...(公共头部)" << endl;
//	}
//
//	void fooder() {
//		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
//	}
//
//	void left() {
//		cout << "Java, Python, C++,...(公共分类列表)" << endl;
//	}
//
//	void content() {
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++
//class C_plus_plus {
//public:
//	void header() {
//		cout << "首页，公开课，登录，注册...(公共头部)" << endl;
//	}
//
//	void fooder() {
//		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
//	}
//
//	void left() {
//		cout << "Java, Python, C++,...(公共分类列表)" << endl;
//	}
//
//	void content() {
//		cout << "C++学科视频" << endl;
//	}
//};


//继承实现页面
class BasePage {
public:
	void header() {
		cout << "首页，公开课，登录，注册...(公共头部)" << endl;
	}

	void fooder() {
		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
	}

	void left() {
		cout << "Java, Python, C++,...(公共分类列表)" << endl;
	}
};


//继承的好处
// 语法：class 子类 : 继承方式 父类
// 子类也叫派生类  父类也称为基类
//Java页面
class Java :public BasePage {
public:
	void content() {
		cout << "Java学科视频" << endl;
	}
};

class Python :public BasePage {
public:
	void content() {
		cout << "Python学科视频" << endl;
	}
};

class Cpp :public BasePage {
public:
	void content() {
		cout << "c++学科视频" << endl;
	}
};

void test01() {
	cout << "Java下载视频页面如下： " << endl;
	Java ja;
	ja.header();
	ja.left();
	ja.fooder();
	ja.content();

	cout << "---------------------------------------" << endl;

	cout << "Python下载视频页面如下： " << endl;
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