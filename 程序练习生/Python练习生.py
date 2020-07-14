from random import *	#老三样之随机
from time import *	#老三样之时间
from turtle import *	#老三样之乌龟

#组类型篇
#随机密码挑战
#随机密码生成。编写程序在26个字母大小写和9个数字组成的列表中随机生成10个8位密码。
#整活如下：
def randomcode():
	#密码字表
	letter=[]
	#密码表
	codelist=[]
	#往字表里塞字母
	for i in range(26):
		letter+=chr(ord('A')+i)
		letter+=chr(ord('a')+i)
	#往字表里塞9个数字
	for i in range(9):
		letter+=chr(ord('1')+i)
	#往密码表里塞密码
	for i in range(10):
		code=''
		for j in range(8):
			code+=choice(letter)
		codelist.append(code)
	return codelist
#主运行区：
randomcode()
