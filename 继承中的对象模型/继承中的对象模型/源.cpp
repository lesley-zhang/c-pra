#include<iostream>
using namespace std;

//继承中的对象模型

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//一个int占四个字节
class Son :public Base {
public:
	int m_D;
};


//利用开发人员命令提示工具查看对象模型
//跳转盘符 F:
//跳转文件路径 cd 具体路径下
//查看命名
// cl /dl reportSingleClassLayout类名 文件名
void test01() {
	cout << sizeof(Base) << endl;
	//父类中的成员被隐藏，但的确被继承了
	cout << sizeof(Son) << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}