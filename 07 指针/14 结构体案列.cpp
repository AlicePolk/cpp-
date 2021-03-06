//#include<iostream>
//#include<string>
//#include<ctime>
//using namespace std;
//
////案例1
////案例描述：
////学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
////设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
////学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
////最终打印出老师数据以及老师所带的学生数据。
//
//
//struct Student
//{
//	string name;
//	int score;
//};
//struct Teacher
//{
//	string name;
//	Student sArray[5];
//};
//
//void allocateSpace(Teacher tArray[], int len)
//{
//	string tName = "教师";
//	string sName = "学生";
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].name = tName + nameSeed[i];
//
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].name = sName + nameSeed[j];
//			tArray[i].sArray[j].score = rand() % 61 + 40;
//		}
//	}
//}
//
//void printTeachers(Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << tArray[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>
//
//	Teacher tArray[3]; //老师数组
//
//	int len = sizeof(tArray) / sizeof(Teacher);
//
//	allocateSpace(tArray, len); //创建数据
//
//	printTeachers(tArray, len); //打印数据
//
//	system("pause");
//
//	return 0;
//}
//
//// 案例2
////案例描述
////设计一个英雄的结构体，包括成员姓名，年龄，性别; 创建结构体数组，数组中存放5名英雄。
////通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
////英雄结构体
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
////冒泡排序
//void bubbleSort(hero arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j].age > arr[j + 1].age)
//			{
//				hero temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////打印数组
//void printHeros(hero arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名： " << arr[i].name << " 性别： " << arr[i].sex << " 年龄： " << arr[i].age << endl;
//	}
//}
//
//int main() {
//
//	struct hero arr[5] =
//	{
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//
//	int len = sizeof(arr) / sizeof(hero); //获取数组元素个数
//
//	bubbleSort(arr, len); //排序
//
//	printHeros(arr, len); //打印
//
//	system("pause");
//
//	return 0;
//}