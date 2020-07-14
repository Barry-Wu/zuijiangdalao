import random as *	#老三样之随机
import time as *	#老三样之时间
import turtle as *	#老三样之乌龟

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
		letter+=chr(ord'A'+i-1)
		letter+=chr(ord'a'+i-1)
	#往字表里塞9个数字
	for i in range(9):
		letter+=chr(ord'0'+i)
	#往密码表里塞密码
	for i in range(10):
		code=""
		for j in range(8):
			""+=choice(codelist)
		codelist+=code
	return codelist
	
print(randomcode())
