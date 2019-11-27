//#include<iostream>
//using namespace std;
//
////空指针
//void test01() {
//
//	//指针变量p指向内存地址编号为0的空间
//	int * p = NULL;
//
//	//访问空指针报错 
//	//内存编号0 ~255为系统占用内存，不允许用户访问
//	cout << *p << endl;
//
//}
//
////野指针
//void test02() {
//
//	//指针变量p指向内存地址编号为0x1100的空间
//	int * p = (int *)0x1100;
//
//	//访问野指针报错 
//	cout << *p << endl;
//
//}
//
//int mian()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}