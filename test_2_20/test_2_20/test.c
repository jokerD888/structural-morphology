#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////
////struct Node//�ṹ���������
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
//}s1,s2;//s1,s1ȫ�ֱ���
//
//struct Stu s3, s4;//ȫ�ֱ���
//
////�����ṹ�����ͣ�ֻ������һ�ֶ���s1�ķ�������Ϊ��û�С����֡�
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
//	struct Node n1;//���ֶ��巽������Ч
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
//	struct S s1 = { 'c',{66.6,19},100,3.14,"hello" };//��ʼ��
//	printf("%c %f %d %d %f %s\n", s1.c,s1.stu.weight,s1.stu.age, s1.a, s1.d, s1.arr);
//
//	return 0;
//}

//�ṹ���ڴ����
//���׳�ԱҪ���뵽ĳ�����֣������������������ĵ�ַ��
//������=������Ĭ�϶����� �� �ó�Ա��С�Ľ�Сֵ��VSĬ��Ϊ8��gccû��Ĭ�϶�������
//�ṹ���ܴ�СΪ����������������
//���Ƕ���˽ṹ�壬Ƕ�׵��Ǹ��ṹ����뵽�Լ����������������������ṹ��ĵ������С������������������������
//��ƽṹ��ʱ��ռ�ÿռ�С�ķ���һ��
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

//#include<stddef.h>//offsetof ��
////����Ĭ�϶�����λ4
//#pragma pack(4)
//struct Q
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ��Ĭ�϶�����
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
void Print1(struct S tmp)//��ֵ
{
	printf("%d %c %f\n", tmp.a, tmp.c, tmp.d);
}
void Print2(const struct S* ps)//��ַ
{
	printf("%d %c %f\n",ps->a,ps->c,ps->d);
}
int main(void)
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);//�˷��Ϻ�
	return 0;
}