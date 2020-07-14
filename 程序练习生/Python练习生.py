#老规矩，还是把程序都写成函数
#老三样之随机,时间,乌龟
from random import *
from time import *
from turtle import *
#新两样之分词,词云
import jieba,wordcloud

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
