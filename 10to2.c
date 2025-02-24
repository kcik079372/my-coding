//1. moodle 验 1.十进制整数转二进制
//编写程序，将十进制非负正整数转换为二进制整数。
//转换方法是：除2取余，直道商为0，例如，将13转换为二进制
//13 / 2 = 6…1
//6 / 2 = 3…0
//3 / 2 = 1…1
//1 / 2 = 0…1
//则13转换为二进制位1101
//
//输入：非负整数
//输出：二进制整数，位数不超过32位。
//【输入输出样例】
//输入：
//13
//输出：
//1101
//提示：结果可保存在字符数组中, 逆序输出。
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
//	printf("a=%d,b=%d\n", a, b);/*a&b的值没有发生改变*/
//	printf("*p1=%d,*p2=%d\n", *p1, *p2);/*p1和p2的值发生了改变*/  
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