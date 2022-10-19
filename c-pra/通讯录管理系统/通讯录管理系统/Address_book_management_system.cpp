#include<iostream>
#include<string>
using namespace std;

#define MAX 1000

void showManu() {
	cout << "1. 添加联系人" << endl;//最多1000个，包含姓名，性别，年龄，联系电话，家庭住址
	cout << "2. 显示联系人" << endl;
	cout << "3. 删除联系人" << endl;
	cout << "4. 查找联系人" << endl;
	cout << "5. 修改联系人" << endl;
	cout << "6. 清空联系人" << endl;
	cout << "0. 退出通讯录" << endl;
	cout << "请按提示输入您的需求： " << endl;
}

struct Person {
	string name;
	string sex;
	int age;
	string phoneNumber;
	string adress;
};


struct AddressBook {
	Person personArr[MAX];
	//总人数
	int size;
};

//添加联系人
void addPerson(AddressBook *abs) {
	//是否满
	if (abs->size == MAX) {
		cout << "输出通讯录已满" << endl;
		return;
	}
	//添加姓名
	string name;
	cout << "请输入姓名" << endl;
	cin >> name;
	abs->personArr[abs->size].name = name;

	//添加性别
	string sex;
	cout << "请输入性别，“man”或者“woman”" << endl;
	while(true){
		cin >> sex;
		if (sex=="man"|| sex == "woman") {
			abs->personArr[abs->size].sex = sex;
			break;
		}
		cout << "输入有误，重新输入" << endl;
	}

	//输入年龄
	cout << "请输入年龄" << endl;
	int age;
	while(true) {
		cin >> age;
		if (age >= 10 && age <= 100) {
			
			abs->personArr[abs->size].age = age;
			break;
		}
		cout << "你输入的年龄不符合实际！" << endl;
	}

	//电话
	cout << "请输入联系电话： " << endl;
	string phone;
	cin >> phone;
	abs->personArr[abs->size].phoneNumber = phone;

	//住址
	cout << "请输入住址： " << endl;
	string address;
	cin >> address;
	abs->personArr[abs->size].adress = address;
	
	//更新通讯录人数
	abs->size++;

	cout << "添加成功" << endl;

	//按任意键继续
	system("pause");
	//清屏
	system("cls");
}

void showPerson(AddressBook* abs) {
	if (abs->size == 0) {
		cout << "当前为空" << endl;
	}
	else {
		for (int i = 0; i < abs->size; ++i) {
			cout << "姓名： " << abs->personArr[i].name << endl;
			cout << "性别： " << abs->personArr[i].sex << endl;
			cout << "年龄： " << abs->personArr[i].age << endl;
			cout << "电话： " << abs->personArr[i].phoneNumber << endl;
			cout << "住址： " << abs->personArr[i].adress << endl;
		}
	}
	system("pause");
	system("cls");
}

//判断这个人是否存在
int isExit(AddressBook* abs, string name) {
	for (int i = 0; i < abs->size; ++i) {
		if (abs->personArr[i].name == name) {
			return i;
		}
	}

	//遍历结束都没找到，返回-1；
	return -1;
}

//删除指定联系人
void deletePerson(AddressBook* abs){
	cout << "请输入要删除的联系人： " << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);

	if (ret != -1) {
		for (int i = ret; i < abs->size; ++i) {
			//数据前移
			abs->personArr[i] = abs->personArr[i + 1];
		}
		abs->size--;
		cout << "删除成功" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

//查找指定联系人
void findPerson(AddressBook* abs){
	cout << "输入您要查找的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	if (ret != -1) {
		cout << "姓名： " << abs->personArr[ret].name << "\t";
		cout << "性别： " << abs->personArr[ret].sex<< "\t";
		cout << "年龄： " << abs->personArr[ret].age << "\t";
		cout << "电话： " << abs->personArr[ret].phoneNumber << "\t";
		cout << "住址： " << abs->personArr[ret].adress << endl;
	}
	else {
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(AddressBook* abs) {
	cout << "请输入要修改的联系人： " << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	if (ret != -1) {
		cout << "请输入要更改的姓名： " << endl;
		string nameNew;
		cin >> nameNew;
		abs->personArr[ret].name = nameNew;

		cout << "请输入要更改的性别： " << endl;
		string sexNew;
		//cin >> sexNew;
		//abs->personArr[ret].sex = sexNew;
		while (true) {
			cin >> sexNew;
			if (sexNew == "man" || sexNew == "woman") {
				abs->personArr[ret].sex = sexNew;
				break;
			}
			cout << "输入有误，重新输入" << endl;
		}

		cout << "请输入要更改的年龄： " << endl;
		int ageNew;
		cin >> ageNew;
		abs->personArr[ret].age = ageNew;

		cout << "请输入要更改的电话： " << endl;
		string numberNew;
		cin >> numberNew;
		abs->personArr[ret].phoneNumber = numberNew;

		cout << "请输入要更改的住址： " << endl;
		string addressNew;
		cin >> addressNew;
		abs->personArr[ret].adress = addressNew;
	}
	else {
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");

}

void clearAll(AddressBook* abs) {
	abs->size = 0;
	cout << "clear finished!" << endl;
	system("pause");
	system("cls");
}

int main() {
	AddressBook abs;

	//size要在循环外面初始化  不然每次都置零
	abs.size = 0;
	while (true) {
		showManu();

		int select = 0;


		cin >> select;

		switch (select) {
			//退出通讯录
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
			//1. 添加联系人
		case 1:
			addPerson(&abs);
			break;
			//显示联系人
		case 2:
			showPerson(&abs);
			break;
			//删除联系人
		case 3: {
			/*int b = isExit(&abs, "张三");
			if (b == -1) {
				cout << "查无此人" << endl;
			}
			else {
				cout << "存在" << endl;
			}*/
			deletePerson(&abs);
			break; 
		}
			//查找联系人
		case 4:
			findPerson(&abs);
			break;
			//修改联系人
		case 5:
			modifyPerson(&abs);
			break;
			//清空联系人
		case 6:
			clearAll(&abs);
			break;
		default:
			cout << "您的输入有问题,请重新输入。" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}