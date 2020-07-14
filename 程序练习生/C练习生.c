#include<stdio.h> /*必须刻在DNA里的输入输出流*/
/*
【字符篇】
为了方便，如果题目说要编写程序，俺就搁这编写函数吧。
字母金字塔挑战：
请编写输出以下图案的程序，图案的行数由输入的整数值确定（每行中字符之间没有空格）。
整活如下：
*/
void lettertower(int x)								/*字母金字塔函数，参数就是层数*/
{													/*如果层数是7，就会打出：*/
	for(int i=0;i<x;i++)							/*      A      */
	{												/*     BBB     */
		for(int j=0;j<=2*x-2;j++)					/*    CCCCC    */
		{											/*   DDDDDDD   */
			if(x-1-i<=j&&j<=x-1+i)putchar('A'+i);   /*  EEEEEEEEE  */
			else putchar(' ');						/* FFFFFFFFFFF */
		}											/*GGGGGGGGGGGGG*/
		putchar('\n');
	}
}
/*一定要刻在DNA里的主函数*/
int main()
{
	lettertower(7);
}
