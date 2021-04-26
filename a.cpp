
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define len sizeof(struct curry)
#include<iostream>
using namespace std;
typedef struct curry
{
	int xuhao;
	char name[50];
	char xb[50];
	char phone[50];
	char year[5];
	char jiguan[100];
	char dz[100];
	char jtdz[100];
	char txdz[100];
	char youbian[100];
	struct curry* next;
}; curry;//申明结构体链表，用于储存联系人信息

curry* head = (curry*)malloc(len), * p, * pre = head, * p3;//定义链表指针，作为全局变量
void print(struct curry* p)
{
	printf("序号：%d    姓名：%s\n", p->xuhao, p->name),
		printf("           年龄：%s\n", p->year);
	printf("           性别：%s\n", p->xb);
	printf("           电话号码：%s\n", p->phone);
	printf("           工作地址：%s\n", p->dz);
	printf("           籍贯：%s\n", p->jiguan);
	printf("           家庭地址：%s\n", p->jtdz);
	printf("           通信地址：%s\n", p->txdz);
	printf("           邮编：%s\n", p->youbian);
}//输出某位联系人的所有信息
void xianshi()
{
	struct curry* p;
	for (p = head->next; p != NULL; p = p->next)
	{

		printf("序号：%d    姓名：%s\n", p->xuhao, p->name),
			printf("           年龄：%s\n", p->year);
		printf("           性别：%s\n", p->xb);
		printf("           电话号码：%s\n", p->phone);
		printf("           工作地址：%s\n", p->dz);
		printf("           籍贯：%s\n", p->jiguan);
		printf("           家庭地址：%s\n", p->jtdz);
		printf("           通信地址：%s\n", p->txdz);
		printf("           邮编：%s\n", p->youbian);
	}

}//在屏幕上显示所有联系人的所有信息
void xiugai()
{

	char x[20]; int t = 0; char b[20];
	printf("已有联系人信息：\n");
	xianshi();
	printf("\n输入要修改的联系人的姓名:");
	scanf("%s", x);
	for (p3 = head, p = head->next, t = 0; p != NULL; p3 = p, p = p->next)
		if (strcmp(p->name, x) == 0)
		{
			printf("原信息姓名：\n");
			print(p);
			t++;
			printf("修改项原信息:\n");
			scanf("%s", b);
			if (strcmp(p->name, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->name);
			}
			if (strcmp(p->year, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->year);
			}
			if (strcmp(p->xb, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->xb);
			}
			if (strcmp(p->phone, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->phone);
			}
			if (strcmp(p->dz, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->dz);
			}
			if (strcmp(p->jiguan, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->jiguan);
			}
			if (strcmp(p->jtdz, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->jtdz);
			}
			if (strcmp(p->txdz, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->txdz);
			}
			if (strcmp(p->youbian, b) == 0)
			{
				printf("修改项修改后信息:"); scanf("%s", p->youbian);
			}
			printf("修改成功\n");
			break;
		}
	if (t == 0)
		printf("无此联系人\n");
	int n;
	printf("请选择是否继续执行此功能：1-继续 0-否");
	scanf("%d", &n);
	if (n == 1)
		xiugai();
	else
		return;
}//修改某位联系人的信息
void tianjia()
{
	char b[20];
	int t, j;
	printf("已有联系人信息：\n");
	xianshi();
	printf("输入要添加联系人的序号：");
	scanf("%d", &j);
	printf("输入添加信息:姓名:\n");
	scanf("%s", b);
	p = (curry*)malloc(len);
	strcpy(p->name, b);
	p->xuhao = j;
	printf("\n年龄：");
	scanf("%s", p->year);
	printf("\n性别：");
	scanf("%s", p->xb);
	printf("\n电话号码：");
	scanf("%s", p->phone);
	printf("\n工作地址：");
	scanf("%s", p->dz);
	printf("\n籍贯：");
	scanf("%s", p->jiguan);
	printf("\n家庭地址：");
	scanf("%s", p->jtdz);
	printf("\n通讯地址：");
	scanf("%s", p->txdz);
	printf("\n邮编：");
	scanf("%s", p->youbian);
	printf("添加成功\n");
	pre->next = p;
	pre = p;
	pre->next = 0;
	int n;
	printf("请选择是否继续执行此功能：1-继续 0-否");
	scanf("%d", &n);
	if (n == 1)
		tianjia();
	else
		return;
}
void chazhao1(int n)
{
	char b[20];
	int t;
	if (n == 1)
	{
		t = 0;
		printf("请输入要查找的姓名");
		scanf("%s", b);
		printf("查找信息如下：\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->name, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("无此联系人\n");
	}
	if (n == 2)
	{
		t = 0;
		printf("请输入要查找的年龄");
		scanf("%s", b);
		printf("查找信息如下：\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->year, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("无此年龄的联系人\n");
	}
	if (n == 3)
	{
		t = 0;
		printf("请输入要查找的性别");
		scanf("%s", b);
		printf("查找信息如下：\n");;
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->xb, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("无此性别的联系人\n");
	}
	if (n == 4)
	{
		t = 0;
		printf("请输入要查找的电话号码");
		scanf("%s", b);
		printf("查找信息如下：\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->phone, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("无此电话号码联系人\n");
	}
	if (n == 5)
	{
		t = 0;
		printf("请输入要查找的工作地址");
		scanf("%s", b);
		printf("查找信息如下：\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->dz, b) == 0)
			{

				print(p);
				t++;
			}
		if (t == 0)
			printf("无此工作地址的联系人\n");
	}
	if (n == 6)
	{
		t = 0;
		printf("请输入要查找的籍贯");
		scanf("%s", b);
		printf("查找信息如下：\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->jiguan, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("无此籍贯的联系人\n");
	}
	if (n == 7)
	{
		t = 0;
		printf("请输入要查找的家庭地址");
		scanf("%s", b);
		printf("查找信息如下：\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->jtdz, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("无此家庭地址的联系人\n");
	}
	if (n == 8)
	{
		t = 0;
		printf("请输入要查找的通信地址");
		scanf("%s", b);
		printf("查找信息如下：\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->txdz, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("无此通信地址的联系人\n");
	}
	if (n == 9)
	{
		t = 0;
		printf("请输入要查找的邮编");
		scanf("%s", b);
		printf("查找信息如下：\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->youbian, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("无此邮编的联系人\n");
	}
}//寻找含有某信息的联系人
void chazhao()
{
	int n;
	printf("请输入要查找信息的类型:1-姓名 2-年龄 3-性别 4-电话号码 5-工作地址\n                         6-籍贯 7-家庭地址 8-通讯地址 9-邮编\n");
	scanf("%d", &n);
	if (n <= 0 || n >= 10)
	{
		printf("输入有误，请重新输入：\n");
		chazhao();
	}
	printf("已有联系人信息：\n");
	xianshi();
	chazhao1(n);
	int k;
	printf("请选择是否继续执行此功能：1-继续 0-否");
	scanf("%d", &k);
	if (n == 1)
		chazhao();
	else
		return;
}//显示要查找的某类信息

void shanchu()
{
	int t;
	char b[20];
	printf("已有联系人信息：\n");
	xianshi();
	printf("需删除联系人的姓名:");
	scanf("%s", b);
	for (pre = head, p = pre->next, t = 0; p != NULL; pre = p, p = pre->next)
		if (strcmp(p->name, b) == 0)
		{
			pre->next = p->next;
			printf("删除成功\n");
			free(p);
			t++;
			break;
		}
	if (t == 0)
		printf("无此联系人\n");
	int n;
	printf("请选择是否继续执行此功能：1-继续 0-否");
	scanf("%d", &n);
	if (n == 1)
		shanchu();
	else
		return;
}//删除某位联系人的所有信息
void shuju()
{
	int t = 0;
	FILE* p1, * fp;
	fp = fopen("shuju.dat", "r");
	p1 = fopen("shu.dat", "w");
	while (!feof(fp))
	{
		p = (curry*)malloc(len);
		fscanf(fp, "%d %s %s %s %s %s %s %s %s %s", &p->xuhao, p->name, p->year, p->xb, p->phone, p->dz, p->jiguan, p->jtdz, p->txdz, p->youbian);
		t++;
		pre->next = p;
		pre = p;
	}
	pre->next = NULL;
	printf("已输入\n");
	int n;
	printf("请选择是否继续执行此功能：1-继续 0-否");
	scanf("%d", &n);
	if (n == 1)
		shuju();
	else
		return;
}//将文件中的联系人的信息导入到链表中
void baocun()
{
	int t = 0;
	FILE* p1, * fp;
	fp = fopen("shuju.dat", "r");
	p1 = fopen("shu.dat", "w");
	for (p = head->next, t = 0; p != NULL; p = p->next)
	{
		fprintf(p1, "%d %s %s %s %s %s %s %s %s %s", p->xuhao, p->name, p->year, p->xb, p->phone, p->dz, p->jiguan, p->jtdz, p->txdz, p->youbian); t++;
	}
	if (t == 0) printf("此通信录无联系人\n");
	else
	{
		printf("以保存到文件”shu.dat“中\n");
		fclose(p1);
		int n;
		printf("请选择是否继续执行此功能：1-继续 0-否");
		scanf("%d", &n);
		if (n == 1)
			baocun();
		else
			return;
	}
}//将整理后的联系人信息到如到文件中
void mean()
{
	printf("*******************通信录功能***********************\n");
	printf("*********1-导入初始数据     2-添加联系人************\n");
	printf("*********3-查找联系人       4-修改联系人信息********\n");
	printf("*********5-删除联系人       6-保存联系人信息********\n");
	printf("*********7-显示联系人信息   0-结束运行**************\n");
	printf("****************************************************\n");
}
int main()
{
	int n;
	head->next = 0;
	while (1)
	{
		mean();
		printf("请输入您要执行的功能：");
		scanf("%d", &n);
		if (n == 0) break;
		if (n < 0 || n >= 8)
		{
			printf("输入有误，请重新输入：\n");
			main();
		}
		switch (n)
		{
		case 1:shuju(); break;
		case 2:tianjia(); break;
		case 3:chazhao(); break;
		case 4:xiugai(); break;
		case 5:shanchu(); break;
		case 7:xianshi(); break;
		case 6:baocun(); break;

		}
	}
	system("cls");
	system("pause");
	return 0;
}
