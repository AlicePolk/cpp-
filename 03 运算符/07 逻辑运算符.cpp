#include<iostream>
using namespace std;


//�߼������  --- ��
void test01() {

	int a = 10;

	cout << !a << endl; // 0

	cout << !!a << endl; // 1

}

//�߼������  --- ��
void test02() {

	int a = 10;
	int b = 10;

	cout << (a && b) << endl;// 1

	a = 10;
	b = 0;

	cout << (a && b) << endl;// 0 

	a = 0;
	b = 0;

	cout << (a && b) << endl;// 0


}

//�߼������  --- ��
void test03() {

	int a = 10;
	int b = 10;

	cout << (a || b) << endl;// 1

	a = 10;
	b = 0;

	cout << (a || b) << endl;// 1 

	a = 0;
	b = 0;

	cout << (a || b) << endl;// 0

}

int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}