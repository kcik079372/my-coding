//1. moodle �� 1.ʮ��������ת������
//��д���򣬽�ʮ���ƷǸ�������ת��Ϊ������������
//ת�������ǣ���2ȡ�ֱ࣬����Ϊ0�����磬��13ת��Ϊ������
//13 / 2 = 6��1
//6 / 2 = 3��0
//3 / 2 = 1��1
//1 / 2 = 0��1
//��13ת��Ϊ������λ1101
//
//���룺�Ǹ�����
//�����������������λ��������32λ��
//���������������
//���룺
//13
//�����
//1101
//��ʾ������ɱ������ַ�������, ���������
//#include<stdio.h>
//int main()
//{
//	int num,i,j,count=0;
//	char res[33];
//	scanf("%d", &num);
//	for (i = 0;; i++)
//	{
//		res[i] = num % 2;
//		num = num / 2;
//		count++;
//		if (num == 0)
//			break;
//	}
//	for (j = count-1;j>=0; j--)
//	{
//		printf("%d", res[j]);
//		
//	}
//	return 0;
//
//}									
//#include<stdio.h>
//int main()
//{
//	int* p1, * p2, a, b;
//	p1 = &a, p2 = &b;
//	scanf("%d%d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	if (a < b)
//	{
//		p1 = &b;
//		p2 = &a;
//	}
//	printf("a=%d,b=%d\n", a, b);/*a&b��ֵû�з����ı�*/
//	printf("*p1=%d,*p2=%d\n", *p1, *p2);/*p1��p2��ֵ�����˸ı�*/  
//#include<stdio.h>
//int main()
//{
//	const int                   a = 99;
//	char string[14];
//	gets(string);
//	char* str = string;
//	puts(str);
//
//
//
//}