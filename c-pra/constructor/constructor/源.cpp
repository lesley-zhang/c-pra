#include<iostream>
using namespace std;

//class默认私有
class Person {
public:
	//构造函数进行初始化操作
	//没有返回值，不写void
	//函数名与类名相同
	//构造函数可以含有参数，可以发生重载
	//创建对象的时候自动调用一次，且只调用一次


	//构造函数分类
	//分为无参（默认构造函数）和有参
	//
	Person() {
		cout << "Person默认构造函数调用" << endl;
	}

	//有参构造函数
	Person(int a) {
		age = a;
		cout << "Person有参构造函数调用" << endl;
	}

	//上面的都是普通构造，下面这个是拷贝构造
	Person(const Person& p) {
		//将传入的这个人身上的所有属性拷贝到自己身上
		age = p.age;
		cout << "Person拷贝构造函数调用" << endl;
	}

	//析构函数 进行清理操作
	//没有返回值，不写void
	//函数名和类名相同，在名称前加~
	//析构函数不可以有参数，不可以重载
	//对象在销毁前，会调用析构函数，而且只会调用一次
	~Person() {
		cout << "调用析构函数" << endl;
	}

private:
	int age;
};

void test1() {
	//调用默认构造函数不要加括号，加了就是函数声明
	Person p1;
}
void test01() {

	//括号法
	Person p10(10);//默认构造函数的调用
	
	Person p2(p10);
}

int main(){
	//栈上的临时变量，执行完毕后会释放这个对象
	//test1();
	// 括号法
	//Person p1;
	test01();
	//Person p2(10);
	//Person p3(p2);

	//显示法
	Person p1;
	Person P2 = Person(10);
	Person p3 = Person(P2);

	Person(10);//匿名对象。 当前行执行结束后，系统立即回收

	Person p4 = 10;//等价于调用有参构造函数
	Person P5 = p4;//等价于拷贝构造函数

	//不要利用拷贝构造函数初始化匿名对象  编译器会认为Person(P3) === Person p3
	//Person(P3);
	system("pause");
	return 0;
}