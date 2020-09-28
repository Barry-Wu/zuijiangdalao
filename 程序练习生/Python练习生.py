#老规矩，还是把程序都写成函数
#老三样之随机,时间,乌龟
from random import *
from time import *
from turtle import *
#新两样之分词,词云
import jieba,wordcloud


#语法元素篇

#获得用户输入的一个整数N，计算并输出N的32次方。
#整活如下：
N=eval(input("N="))	#input内加字符代表提示信息
print("N^32={}".format(N**32))

#获得用户输入的一段文字，将这段文字进行垂直输出。
#整活如下：
x=input("文字：")
for i in x:
	print(i)	#print后会自动换行
	
#获得用户输入的一个合法算式，例如：1.2+3.4，输出运算结果。
#整活如下：
eval(input("算式："))	#不用print可以直接输出，在外面再加层print也行

#获得用户输入的一个小数，提取并输出其整数部分。
#整活如下：
int(eval(input("算式：")))	#同上，也是加不加print都行的简易代码

#下面这段代码能够获得用户输入的一个整数N，计算并输出1到N相加的和。然而，这段代码存在多处语法错误，请指出错误所在并纠正。
#改正后：
n=eval(input("请输入整数N："))	#input后是字符串，补上eval才是数；原句后面有顿号，C语言厨狂喜，py厨激怒
sum=0
for i in range(n):	#判断句要加引号
    sum+=i+1
print("1到N求和结果：{}".format(sum))	#用.format要配大括号


#数据类型篇

#获得用户输入的一个整数，输出该整数百位及以上的数字。
#整活如下：
eval(input("整数："))//100

#获得用户输入的一个字符串，将字符串按照空格分割，然后逐行打印出来。
#整活如下：
s=input("字符串：")
s=s.split(" ")
for i in s:
    print(i)

#程序读入一个表示星期几的数字（1~7），输出对应的星期字符串名称。例如：输入3，返回“星期三”。
#整活如下：

#设n是一任意自然数，如果n的各位数字反向排列所得的自然数与n相等，则n被称为回文数。从键盘输入一个5位数字，请编写程序判断这个数字是不是回文数。
#整活如下：

#输入一个十进制整数，分别输出其二进制、八进制、十六进制字符串。
#整活如下：
x=eval(input())
print("二进制：{}\n八进制：{}\n十六进制：{}".format(bin(x),oct(x),hex(x)))


#组合集合篇
#英文字符频率统计。编写一个程序，对给定字符串中出现的a~z字母频率进行分析，忽略大小写，采用降序方式输出。
#整活如下：
def letterfreq(s):
	#字母表
	letters=[]
	for i in range(26):
		letters.append([chr(ord('A')+i)+chr(ord('a')+i),0])
	#数字母
	for i in s:
		for j in letters:
			if i in j[0]:j[1]+=1
	#传说中的按第二元素降序排序
	letters.sort(key=lambda x:x[1],reverse=True)
	return letters
#中文字符频率统计。编写一个程序，对给定字符串中出现的全部字符（含中文字符）频率进行分析，采用降序方式输出。
def hanzifreq(s):
	#汉字集和频率表
	hanzi=set()
	#先数汉字种类（汉字的Unicode是从0x4e00到0x9fa5）
	for i in s:
		if 0x4e00<=ord(i)<=0x9fa5:hanzi.add(i)
	#汉字集整成汉字表
	hanzi=list(hanzi)
	#再数汉字字数
	for i in range(len(hanzi)):
		hanzi[i]=[hanzi[i],s.count(hanzi[i])]
	#传说中的按第二元素降序排序
	hanzi.sort(key=lambda x:x[1],reverse=True)
	return hanzi
#随机密码生成。编写程序在26个字母大小写和9个数字组成的列表中随机生成10个8位密码。
#整活如下：
def randomcode():
	#密码字表
	letters=[]
	#密码表
	codelist=[]
	#往字表里塞字母
	for i in range(26):
		letters+=chr(ord('A')+i)
		letters+=chr(ord('a')+i)
	#往字表里塞9个数字
	for i in range(9):
		letters+=chr(ord('1')+i)
	#往密码表里塞密码
	for i in range(10):
		code=''
		for j in range(8):
			code+=choice(letters)
		codelist.append(code)
	return codelist
#主运行区：
print(letterfreq(randomcode()[2]+randomcode()[5]))
