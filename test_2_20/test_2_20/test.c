#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////
////struct Node//结构体的自引用
////{
////	int data;
////	struct Node* next;
////};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	int number[10];
//}s1,s2;//s1,s1全局变量
//
//struct Stu s3, s4;//全局变量
//
////匿名结构体类型，只有下面一种定义s1的方法，因为它没有“名字”
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//typedef struct Node
//{
//	int data;
//	//Node* next;
//	struct Node* next;
//}Node;
//
//int main(void)
//{
//	struct Node n1;//两种定义方法皆有效
//	Node n2;
//	return 0;
//}
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T stu;
//	int a;
//	double d;
//	char arr[20];
//};

//int main(void)
//{
//	struct S s1 = { 'c',{66.6,19},100,3.14,"hello" };//初始化
//	printf("%c %f %d %d %f %s\n", s1.c,s1.stu.weight,s1.stu.age, s1.a, s1.d, s1.arr);
//
//	return 0;
//}

//结构体内存对齐
//非首成员要对齐到某个数字（对齐数）的整数倍的地址处
//对齐数=编译器默认对齐数 与 该成员大小的较小值（VS默认为8，gcc没有默认对齐数）
//结构体总大小为最大对齐数的整数倍
//如果嵌套了结构体，嵌套的那个结构体对齐到自己最大对齐数的整数倍处，结构体的的整体大小就是所有最大对齐数的整数倍
//设计结构体时让占用空间小的放在一起
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main(void)
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//32
//	return 0;
//}

//#include<stddef.h>//offsetof 宏
////设置默认对齐数位4
//#pragma pack(4)
//struct Q
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消默认对齐数
//
//int main(void)
//{
//	struct Q q;
//	printf("%d\n", sizeof(q));
//	printf("%d\n", offsetof(struct Q, c1));
//	printf("%d\n", offsetof(struct Q, d));
//	return 0;
//}


struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'W';
	ps->d = 3.14;
}
void Print1(struct S tmp)//传值
{
	printf("%d %c %f\n", tmp.a, tmp.c, tmp.d);
}
void Print2(const struct S* ps)//传址
{
	printf("%d %c %f\n",ps->a,ps->c,ps->d);
}
int main(void)
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);//此法较好
	return 0;
}