#include<iostream>
#include<string>
using namespace std;

#define MAX 1000

void showManu() {
	cout << "1. �����ϵ��" << endl;//���1000���������������Ա����䣬��ϵ�绰����ͥסַ
	cout << "2. ��ʾ��ϵ��" << endl;
	cout << "3. ɾ����ϵ��" << endl;
	cout << "4. ������ϵ��" << endl;
	cout << "5. �޸���ϵ��" << endl;
	cout << "6. �����ϵ��" << endl;
	cout << "0. �˳�ͨѶ¼" << endl;
	cout << "�밴��ʾ������������ " << endl;
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
	//������
	int size;
};

//�����ϵ��
void addPerson(AddressBook *abs) {
	//�Ƿ���
	if (abs->size == MAX) {
		cout << "���ͨѶ¼����" << endl;
		return;
	}
	//�������
	string name;
	cout << "����������" << endl;
	cin >> name;
	abs->personArr[abs->size].name = name;

	//����Ա�
	string sex;
	cout << "�������Ա𣬡�man�����ߡ�woman��" << endl;
	while(true){
		cin >> sex;
		if (sex=="man"|| sex == "woman") {
			abs->personArr[abs->size].sex = sex;
			break;
		}
		cout << "����������������" << endl;
	}

	//��������
	cout << "����������" << endl;
	int age;
	while(true) {
		cin >> age;
		if (age >= 10 && age <= 100) {
			
			abs->personArr[abs->size].age = age;
			break;
		}
		cout << "����������䲻����ʵ�ʣ�" << endl;
	}

	//�绰
	cout << "��������ϵ�绰�� " << endl;
	string phone;
	cin >> phone;
	abs->personArr[abs->size].phoneNumber = phone;

	//סַ
	cout << "������סַ�� " << endl;
	string address;
	cin >> address;
	abs->personArr[abs->size].adress = address;
	
	//����ͨѶ¼����
	abs->size++;

	cout << "��ӳɹ�" << endl;

	//�����������
	system("pause");
	//����
	system("cls");
}

void showPerson(AddressBook* abs) {
	if (abs->size == 0) {
		cout << "��ǰΪ��" << endl;
	}
	else {
		for (int i = 0; i < abs->size; ++i) {
			cout << "������ " << abs->personArr[i].name << endl;
			cout << "�Ա� " << abs->personArr[i].sex << endl;
			cout << "���䣺 " << abs->personArr[i].age << endl;
			cout << "�绰�� " << abs->personArr[i].phoneNumber << endl;
			cout << "סַ�� " << abs->personArr[i].adress << endl;
		}
	}
	system("pause");
	system("cls");
}

//�ж�������Ƿ����
int isExit(AddressBook* abs, string name) {
	for (int i = 0; i < abs->size; ++i) {
		if (abs->personArr[i].name == name) {
			return i;
		}
	}

	//����������û�ҵ�������-1��
	return -1;
}

//ɾ��ָ����ϵ��
void deletePerson(AddressBook* abs){
	cout << "������Ҫɾ������ϵ�ˣ� " << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);

	if (ret != -1) {
		for (int i = ret; i < abs->size; ++i) {
			//����ǰ��
			abs->personArr[i] = abs->personArr[i + 1];
		}
		abs->size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

//����ָ����ϵ��
void findPerson(AddressBook* abs){
	cout << "������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	if (ret != -1) {
		cout << "������ " << abs->personArr[ret].name << "\t";
		cout << "�Ա� " << abs->personArr[ret].sex<< "\t";
		cout << "���䣺 " << abs->personArr[ret].age << "\t";
		cout << "�绰�� " << abs->personArr[ret].phoneNumber << "\t";
		cout << "סַ�� " << abs->personArr[ret].adress << endl;
	}
	else {
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(AddressBook* abs) {
	cout << "������Ҫ�޸ĵ���ϵ�ˣ� " << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	if (ret != -1) {
		cout << "������Ҫ���ĵ������� " << endl;
		string nameNew;
		cin >> nameNew;
		abs->personArr[ret].name = nameNew;

		cout << "������Ҫ���ĵ��Ա� " << endl;
		string sexNew;
		//cin >> sexNew;
		//abs->personArr[ret].sex = sexNew;
		while (true) {
			cin >> sexNew;
			if (sexNew == "man" || sexNew == "woman") {
				abs->personArr[ret].sex = sexNew;
				break;
			}
			cout << "����������������" << endl;
		}

		cout << "������Ҫ���ĵ����䣺 " << endl;
		int ageNew;
		cin >> ageNew;
		abs->personArr[ret].age = ageNew;

		cout << "������Ҫ���ĵĵ绰�� " << endl;
		string numberNew;
		cin >> numberNew;
		abs->personArr[ret].phoneNumber = numberNew;

		cout << "������Ҫ���ĵ�סַ�� " << endl;
		string addressNew;
		cin >> addressNew;
		abs->personArr[ret].adress = addressNew;
	}
	else {
		cout << "���޴���" << endl;
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

	//sizeҪ��ѭ�������ʼ��  ��Ȼÿ�ζ�����
	abs.size = 0;
	while (true) {
		showManu();

		int select = 0;


		cin >> select;

		switch (select) {
			//�˳�ͨѶ¼
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
			//1. �����ϵ��
		case 1:
			addPerson(&abs);
			break;
			//��ʾ��ϵ��
		case 2:
			showPerson(&abs);
			break;
			//ɾ����ϵ��
		case 3: {
			/*int b = isExit(&abs, "����");
			if (b == -1) {
				cout << "���޴���" << endl;
			}
			else {
				cout << "����" << endl;
			}*/
			deletePerson(&abs);
			break; 
		}
			//������ϵ��
		case 4:
			findPerson(&abs);
			break;
			//�޸���ϵ��
		case 5:
			modifyPerson(&abs);
			break;
			//�����ϵ��
		case 6:
			clearAll(&abs);
			break;
		default:
			cout << "��������������,���������롣" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}