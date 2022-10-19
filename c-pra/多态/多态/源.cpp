#include<iostream>
using namespace std;
//看ipad笔记

class Animal {
public:
	//1.有继承关系
	//2.子类要重写父类的虚函数
	//3. 重写 函数返回类型 函数名 参数列表完全相同

	//动态多态使用
	//父类指针或者引用  执行子类对象

	//多了个指针
	virtual void speak() {
	//成员函数是属于对象的，不是属于类的
	//void speak() {
		cout << "动物再叫唤" << endl;
	}

};

class Cat :public Animal {
public:
	void speak() {
		cout << "小猫在叫唤" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "小狗在叫唤" << endl;
	}
};

//允许父子之间的类型转换，无需强制
//地址早绑定，编译阶段就确定了函数地址
void doSpeak(Animal& animal) {//Animal& animal = cat;走Animal里的speak()函数
	//如果想让猫说话，就不能提前绑定，需要再运行阶段绑定
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02() {
	cout << "size of Animal " << sizeof(Animal) << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}