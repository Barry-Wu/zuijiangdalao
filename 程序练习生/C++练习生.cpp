#include<iostream>	//必须刻在DNA里的输入输出流
using namespace std;	//必须刻在DNA里的标准命名空间
/*
都是一些经典老题，我能做的就是练习练习，如果宁有要求做，但是不会，就可以顺便康康。（大佬可直接不屑一顾）
就我这个学机械的，编程也就图一乐，也就混一证，以后真要用上编程，估计害得去找专门精通代码的童鞋。
【类篇】
俺老师说过，写类就是累，草！我们C++老师教的其实只是C的内容，从类往后的内容没有要求学。
我寻思那学期第一次接触C语言，前面的东西感觉也够多了，再教类的话，那学期估计得挂。类往后都是我为了去混个证，自己加的戏。
时间挑战：
要求在Time类中包含3个数据分量，即时（hour）、分（minute）和秒（second）。
在类的成员函数中应包括存（用set开头）、取（用get开头）各个数据分量和完整时间的操作；
按上下午各12小时或按24小时打印时间的函数；
有默认值的构造函数等。
默认值以0时0分0秒为准。
整活如下：
*/
class Time
{
public:
	Time(int x):hour(0),minite(0),second(0){}	//这就构造函数啊，这次的默认值必须是仨零
	void seth(int x){hour=x%24;}			//设置时，当然宁要是设爆了就给宁留个余数，下面也一样嗷
	void setm(int x){minute=x%60;}			//设置分
	void sets(int x){second=x%60;}			//设置秒
	void setall(int x,int y,int z)			//要求说还要有仨一起设的函数
	{hour=x%24;minute=x%60;second=x%60;}
	int geth(){return hour;}			//取出时，题目说了要存害要取是吧
	int getm(){return minute;}			//取出分
	int gets(){return second;}			//取出秒
	void getall(int *x)				//它让时分秒一起取，但是没说具体是什么形式，那俺就来个数组吧
	{x[0]=hour;x[1]=minute;x[2]=second;}
	void print12()					//输出12小时制的时间，比较麻烦，我让0到12点是AM，13到23点是PM，觉得顺眼
	{
		if(0<=hour<=12)cout<<"AM "<<hour;
		else cout<<"PM "<<hour%12;
		cout<<':'<<minute<<':'second<<endl;
	}
	void print24()					//最后一波，输出一把24小时制的时间
	{cout<<hour<<':'<<minute<<':'<<second<<endl;}
private:
	int hour,minute,second				//按各教材惯例，时分秒是Time类自己的秘密，不能告诉别人
}；
/*
集合挑战：
定义整数集合类intSet。该类包括以下成员函数：
	intSet():		类的构造函数，根据需要可以定义多个构造函数
	Empty():		清空该整数集合
	IsEmpty():		判断整数集合是否为空
	IsMemberOf(): 		判断某个整数是否在该整数集合内
	Add():			增加一个整数到整数集合中
	Sub():			从整数集合中删除一个整数元素
	IsEqual():		判断两个集合是否相等
	Intersection():		求两个整数集合的交集
	Merge():		求两个整数集合的并集
	Print():		依次打印该整数集合
该类还包括如下数据成员：
	int element[100]:	保存整数集合数据
	int EndPosition:	指示整数集合的最后一个元素位置
注意：整数集合中不允许有相同元素存在。对于函数的参数及其返回类型，根据需要自定义。
整活如下：
*/
class intSet
{
public:
	int &E;	//EndPosition太长了，拿E代替
	intSet():EndPosition(-1),E(EndPosition){};
	int IsEmpty()
	{return !(bool)(E+1);}
	int IsEqual(intSet a,intSet b)		//判断两个集合是不是完 全 一 致的函数
	{
		if(a.E!=b.E) return 0;
		for(int i=0;i<=b.E;i++)
			if(!a.IsMemberOf(b.element[i]))return 0;
		return 1;
	}
	int IsMemberOf(int x)			//判断元素属不属于的集合函数
	{
		for(int i=0;i<100;i++)
			if(element[i]==x){return 1;}
		return 0;
	}
	void Add(int x)				//往集合里加元素的函数
	{
		if(IsMemberOf(x))return;
		E++;
		element[E]=x;
	}
	intSet operator +(int x)		//将“集+数”重载为加元素集
	{
		intSet a;
		for(int i=0;i<=E;i++)a+=(element[i]);
		a+=x;
		return a;
	}		
	void operator +=(int x){Add(x);}	//将“集+=数”重载为加元素
	void Sub(int x)				//从集合里抠出元素的函数
	{
		int i;
		if(!IsMemberOf(x))return;
		for(i=0;i<=E;i++)if(element[i]==x)break;
		for(E--;i<=E;i++)element[i]=element[i+1];
	}
	intSet operator -(int x)		//将“集-数”重载为抠元素集
	{
		intSet a;
		for(int i=0;i<=E;i++)a+=(element[i]);
		a-=x;
		return a;
	}		
	void operator -=(int x){Sub(x);}	//将“集-=数”重载为抠元素
	intSet Merge(intSet a,intSet b)		//求并集的函数，整了一晚上都不对劲，最后发现是i串味了，所以现在每个函数都定了自己的i
	{
		intSet x;
		x=a;
		for(int i=0;i<=b.E;i++)x+=(b.element[i]);
		return x;
	}
	intSet operator +(intSet a)			//将“集+集”重载为并集
	{
		intSet x;
		for(int i=0;i<=E;i++)x+=element[i];
		x=Merge(a,x);
		return x;
	}
	void operator +=(intSet a)			//将“集+=集”重载为并集
	{
		for(int i=0;i<=a.E;i++)Add(a.element[i]);
	}
	intSet Intersection(intSet a,intSet b)		//求交集的函数，和上面一样遇到过i串味的情况
	{
		intSet x;
		x=a;
		for(int i=0;i<=E;i++)
			if(!b.IsMemberOf(x.element[i]))x-=element[i];
		return x;
	}
	intSet operator *(intSet a)			//将“集*集”重载为交集
	{
		intSet x;
		for(int i=0;i<=E;i++)x+=element[i];
		return Intersection(a,x);
	}
	void operator *=(intSet a)			//将“集*=集”重载为交集
	{
		for(int i=0;i<=E;i++)
			if(!a.IsMemberOf(element[i]))
				Sub(element[i]);
	}
	void Copy(intSet a)				//集合的复制
	{
		for(int i=0;i<=a.E;i++){Add(a.element[i]);}
	}
	void operator =(intSet a)			//将“集=集”重载为复制
	{Copy(a);}
	void Empty()					//集合的清空
	{
		for(int i=0;i<100;i++)element[i]=0;
		E=-1;
	}
	void operator -()				//将“-集”重载为清空
	{Empty();}
	void Print()					//打印出集合的函数
	{
		int i;
		cout<<'{';
		for(i=0;i<=E;i++)
		{
			cout<<(element[i]);
			if(i<E)cout<<',';
		}
		cout<<'}'<<endl;
	}
	
private:	//集合元素和最大下标的储藏地，目前对0元素不友好
	int element[100];
	int EndPosition;
};
/*一定要刻在DNA里的主函数*/
int main()
{
	intSet A;	//设一个集合A{1,2,3}
	A+=1;
	A+=2;
	A+=3;
	A.Print(26);	//打出集合A
}
