
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
}; curry;//�����ṹ���������ڴ�����ϵ����Ϣ

curry* head = (curry*)malloc(len), * p, * pre = head, * p3;//��������ָ�룬��Ϊȫ�ֱ���
void print(struct curry* p)
{
	printf("��ţ�%d    ������%s\n", p->xuhao, p->name),
		printf("           ���䣺%s\n", p->year);
	printf("           �Ա�%s\n", p->xb);
	printf("           �绰���룺%s\n", p->phone);
	printf("           ������ַ��%s\n", p->dz);
	printf("           ���᣺%s\n", p->jiguan);
	printf("           ��ͥ��ַ��%s\n", p->jtdz);
	printf("           ͨ�ŵ�ַ��%s\n", p->txdz);
	printf("           �ʱࣺ%s\n", p->youbian);
}//���ĳλ��ϵ�˵�������Ϣ
void xianshi()
{
	struct curry* p;
	for (p = head->next; p != NULL; p = p->next)
	{

		printf("��ţ�%d    ������%s\n", p->xuhao, p->name),
			printf("           ���䣺%s\n", p->year);
		printf("           �Ա�%s\n", p->xb);
		printf("           �绰���룺%s\n", p->phone);
		printf("           ������ַ��%s\n", p->dz);
		printf("           ���᣺%s\n", p->jiguan);
		printf("           ��ͥ��ַ��%s\n", p->jtdz);
		printf("           ͨ�ŵ�ַ��%s\n", p->txdz);
		printf("           �ʱࣺ%s\n", p->youbian);
	}

}//����Ļ����ʾ������ϵ�˵�������Ϣ
void xiugai()
{

	char x[20]; int t = 0; char b[20];
	printf("������ϵ����Ϣ��\n");
	xianshi();
	printf("\n����Ҫ�޸ĵ���ϵ�˵�����:");
	scanf("%s", x);
	for (p3 = head, p = head->next, t = 0; p != NULL; p3 = p, p = p->next)
		if (strcmp(p->name, x) == 0)
		{
			printf("ԭ��Ϣ������\n");
			print(p);
			t++;
			printf("�޸���ԭ��Ϣ:\n");
			scanf("%s", b);
			if (strcmp(p->name, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->name);
			}
			if (strcmp(p->year, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->year);
			}
			if (strcmp(p->xb, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->xb);
			}
			if (strcmp(p->phone, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->phone);
			}
			if (strcmp(p->dz, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->dz);
			}
			if (strcmp(p->jiguan, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->jiguan);
			}
			if (strcmp(p->jtdz, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->jtdz);
			}
			if (strcmp(p->txdz, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->txdz);
			}
			if (strcmp(p->youbian, b) == 0)
			{
				printf("�޸����޸ĺ���Ϣ:"); scanf("%s", p->youbian);
			}
			printf("�޸ĳɹ�\n");
			break;
		}
	if (t == 0)
		printf("�޴���ϵ��\n");
	int n;
	printf("��ѡ���Ƿ����ִ�д˹��ܣ�1-���� 0-��");
	scanf("%d", &n);
	if (n == 1)
		xiugai();
	else
		return;
}//�޸�ĳλ��ϵ�˵���Ϣ
void tianjia()
{
	char b[20];
	int t, j;
	printf("������ϵ����Ϣ��\n");
	xianshi();
	printf("����Ҫ�����ϵ�˵���ţ�");
	scanf("%d", &j);
	printf("���������Ϣ:����:\n");
	scanf("%s", b);
	p = (curry*)malloc(len);
	strcpy(p->name, b);
	p->xuhao = j;
	printf("\n���䣺");
	scanf("%s", p->year);
	printf("\n�Ա�");
	scanf("%s", p->xb);
	printf("\n�绰���룺");
	scanf("%s", p->phone);
	printf("\n������ַ��");
	scanf("%s", p->dz);
	printf("\n���᣺");
	scanf("%s", p->jiguan);
	printf("\n��ͥ��ַ��");
	scanf("%s", p->jtdz);
	printf("\nͨѶ��ַ��");
	scanf("%s", p->txdz);
	printf("\n�ʱࣺ");
	scanf("%s", p->youbian);
	printf("��ӳɹ�\n");
	pre->next = p;
	pre = p;
	pre->next = 0;
	int n;
	printf("��ѡ���Ƿ����ִ�д˹��ܣ�1-���� 0-��");
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
		printf("������Ҫ���ҵ�����");
		scanf("%s", b);
		printf("������Ϣ���£�\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->name, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴���ϵ��\n");
	}
	if (n == 2)
	{
		t = 0;
		printf("������Ҫ���ҵ�����");
		scanf("%s", b);
		printf("������Ϣ���£�\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->year, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴��������ϵ��\n");
	}
	if (n == 3)
	{
		t = 0;
		printf("������Ҫ���ҵ��Ա�");
		scanf("%s", b);
		printf("������Ϣ���£�\n");;
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->xb, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴��Ա����ϵ��\n");
	}
	if (n == 4)
	{
		t = 0;
		printf("������Ҫ���ҵĵ绰����");
		scanf("%s", b);
		printf("������Ϣ���£�\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->phone, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴˵绰������ϵ��\n");
	}
	if (n == 5)
	{
		t = 0;
		printf("������Ҫ���ҵĹ�����ַ");
		scanf("%s", b);
		printf("������Ϣ���£�\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->dz, b) == 0)
			{

				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴˹�����ַ����ϵ��\n");
	}
	if (n == 6)
	{
		t = 0;
		printf("������Ҫ���ҵļ���");
		scanf("%s", b);
		printf("������Ϣ���£�\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->jiguan, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴˼������ϵ��\n");
	}
	if (n == 7)
	{
		t = 0;
		printf("������Ҫ���ҵļ�ͥ��ַ");
		scanf("%s", b);
		printf("������Ϣ���£�\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->jtdz, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴˼�ͥ��ַ����ϵ��\n");
	}
	if (n == 8)
	{
		t = 0;
		printf("������Ҫ���ҵ�ͨ�ŵ�ַ");
		scanf("%s", b);
		printf("������Ϣ���£�\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->txdz, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴�ͨ�ŵ�ַ����ϵ��\n");
	}
	if (n == 9)
	{
		t = 0;
		printf("������Ҫ���ҵ��ʱ�");
		scanf("%s", b);
		printf("������Ϣ���£�\n");
		for (p = head->next, t = 0; p != NULL; p = p->next)
			if (strcmp(p->youbian, b) == 0)
			{
				print(p);
				t++;
			}
		if (t == 0)
			printf("�޴��ʱ����ϵ��\n");
	}
}//Ѱ�Һ���ĳ��Ϣ����ϵ��
void chazhao()
{
	int n;
	printf("������Ҫ������Ϣ������:1-���� 2-���� 3-�Ա� 4-�绰���� 5-������ַ\n                         6-���� 7-��ͥ��ַ 8-ͨѶ��ַ 9-�ʱ�\n");
	scanf("%d", &n);
	if (n <= 0 || n >= 10)
	{
		printf("�����������������룺\n");
		chazhao();
	}
	printf("������ϵ����Ϣ��\n");
	xianshi();
	chazhao1(n);
	int k;
	printf("��ѡ���Ƿ����ִ�д˹��ܣ�1-���� 0-��");
	scanf("%d", &k);
	if (n == 1)
		chazhao();
	else
		return;
}//��ʾҪ���ҵ�ĳ����Ϣ

void shanchu()
{
	int t;
	char b[20];
	printf("������ϵ����Ϣ��\n");
	xianshi();
	printf("��ɾ����ϵ�˵�����:");
	scanf("%s", b);
	for (pre = head, p = pre->next, t = 0; p != NULL; pre = p, p = pre->next)
		if (strcmp(p->name, b) == 0)
		{
			pre->next = p->next;
			printf("ɾ���ɹ�\n");
			free(p);
			t++;
			break;
		}
	if (t == 0)
		printf("�޴���ϵ��\n");
	int n;
	printf("��ѡ���Ƿ����ִ�д˹��ܣ�1-���� 0-��");
	scanf("%d", &n);
	if (n == 1)
		shanchu();
	else
		return;
}//ɾ��ĳλ��ϵ�˵�������Ϣ
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
	printf("������\n");
	int n;
	printf("��ѡ���Ƿ����ִ�д˹��ܣ�1-���� 0-��");
	scanf("%d", &n);
	if (n == 1)
		shuju();
	else
		return;
}//���ļ��е���ϵ�˵���Ϣ���뵽������
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
	if (t == 0) printf("��ͨ��¼����ϵ��\n");
	else
	{
		printf("�Ա��浽�ļ���shu.dat����\n");
		fclose(p1);
		int n;
		printf("��ѡ���Ƿ����ִ�д˹��ܣ�1-���� 0-��");
		scanf("%d", &n);
		if (n == 1)
			baocun();
		else
			return;
	}
}//����������ϵ����Ϣ���絽�ļ���
void mean()
{
	printf("*******************ͨ��¼����***********************\n");
	printf("*********1-�����ʼ����     2-�����ϵ��************\n");
	printf("*********3-������ϵ��       4-�޸���ϵ����Ϣ********\n");
	printf("*********5-ɾ����ϵ��       6-������ϵ����Ϣ********\n");
	printf("*********7-��ʾ��ϵ����Ϣ   0-��������**************\n");
	printf("****************************************************\n");
}
int main()
{
	int n;
	head->next = 0;
	while (1)
	{
		mean();
		printf("��������Ҫִ�еĹ��ܣ�");
		scanf("%d", &n);
		if (n == 0) break;
		if (n < 0 || n >= 8)
		{
			printf("�����������������룺\n");
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
