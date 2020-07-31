#include<cmath>
#include<iostream>
using namespace std;
int main1()
{
	return 0;
	int option,x,a,b,c,d,e,f;
	double fA=0;
	option=0;
loop0:
	cout<<"菜单"<<endl;
	cout<<"1：逆向数"<<endl;
	cout<<"2：进制转换"<<endl;
	cout<<"3：数位计"<<endl;
	cout<<"4：寻找因数"<<endl;
	cout<<"5：质数大厦（全数）"<<endl;
	cout<<"6：质数大厦（奇数）"<<endl;
	cout<<"选项=";
	cin>>option;
	cout<<"\r"<<endl;
	switch(option)
	{case 1://数的逆向化
loop1:
	cout<<"数的逆向化"<<endl;
	cout<<"自然数=";cin>>x;
	if(x<0){goto loop0;}
	a=1;b=1;//a=基数,b=位数
	while(x>=a*10){a*=10;b++;}
	cout<<"逆向数=";
	while(b!=0){cout<<x%10;x/=10;b--;}
	cout<<"\n"<<endl;
	goto loop1;
	case 2://十进制整数转换成八进制
loop2:
		cout<<"进制转换"<<"\n";
		cout<<"十进制自然数=";cin>>x;
		cout<<"进制=";cin>>a;
		cout<<a<<"进制数=";b=0;c=1;//a=进制,b=位数,c=基数
		if(x<0||a<=0){goto loop0;}
		if(a==1){
			while(x!=1){cout<<"1-";x--;}
			cout<<"1";
			cout<<"\n"<<endl;
			goto loop2;
		}
		if(x==0){cout<<0;goto loop0;}
		while(x>=c){c*=a;b++;}
		d=(x-x%c)/c;x-=d*c;c/=a;b--;
		while(b!=0){d=(x-x%c)/c;cout<<d<<"-";x-=d*c;c/=a;b--;}
		d=(x-x%c)/c;cout<<d;
		cout<<"\n"<<endl;
		goto loop2;
	case 3:
loop3:
		a=0;b=1;
		cout<<"整数一共有几位"<<"\n"<<"整数="<<endl;
		cin>>x;
		while(x>=b){
			a++;
			b*=10;
		}
		cout<<"整数有"<<a<<"位"<<endl;
		cout<<"\r"<<endl;
		goto loop3;
	case 4:
loop4:
		a=2;
		cout<<"寻找因数"<<"\n"<<"正整数="<<endl;
		cin>>x;
		while(x>=1){
			if(x>=2){
				fA=x;
				fA=sqrt(fA);
				cout<<"因数："<<"\n"<<"1"<<endl;
				while(a<=fA){if(x%a==0){cout<<a<<endl;a++;}else{a++;}}
				cout<<x<<endl;
				cout<<"\r"<<endl;
				goto loop4;
			}
			else{
				cout<<"因数："<<"\n"<<"1"<<"\n"<<endl;
				goto loop4;
			}
		}
		cout<<"\r"<<endl;
		break;
	case 5:
loop5:	
		//a=最大数字,b=计数器,c=计列器,fA=把b开根号器,d=列数,e=b的取余除数
		cout<<"质数大厦（全数）"<<endl;
		cout<<"列数(>=4)=";cin>>d;
		if(d<4){cout<<"\n";goto loop0;}
		cout<<"最大数字=";cin>>a;
		cout<<"\n";
		if(a<=0){goto loop5;}
		if(a==1){cout<<"①"<<"\n"<<endl;goto loop5;}
		if(a==2){cout<<"①●"<<"\n"<<endl;goto loop5;}
		if(a==3){cout<<"①●●"<<"\n"<<endl;goto loop5;}
		cout<<"①●●";
		b=c=4;e=2;
loop5a:	
		while(b<=a){
			if(c==1&&e==2){cout<<"\n";}
			fA=b;
			fA=sqrt(fA);
			if(b%e==0){cout<<"○";e=2;goto loop5b;}
			else{if(e>fA){cout<<"●";e=2;goto loop5b;}if(e==2){e++;}else{e+=2;}}
			goto loop5a;
loop5b:
			if(c==d){cout<<" ("<<b<<")";c=1;}
			else{c++;}
			b++;
		}
		cout<<"\n"<<endl;
		goto loop5;
	case 6:
loop6:
		//a=最大数字,b=计数器,c=计列器,fA=把b开根号器,d=列数,e=b的取余除数
		cout<<"质数大厦（奇数）"<<endl;
		cout<<"列数(>=4)=";cin>>d;
		if(d<4){cout<<"\n";goto loop0;}
		cout<<"最大数字=";cin>>a;
		cout<<"\n";
		if(a%2==0){a=a-1;}
		if(a<=0){goto loop6;}
		if(a==1){cout<<"①"<<"\n"<<endl;goto loop6;}
		if(a==3){cout<<"①●"<<"\n"<<endl;goto loop6;}
		if(a==5){cout<<"①●●"<<"\n"<<endl;goto loop6;}
		cout<<"①●●";
		b=7;c=4;e=2;
loop6a:	
		while(b<=a){
			if(c==1&&e==2){cout<<"\n";}
			fA=b;
			fA=sqrt(fA);
			if(b%e==0){cout<<"○";e=2;goto loop6b;}
			else{if(e>fA){cout<<"●";e=2;goto loop6b;}if(e==2){e++;}else{e+=2;}}
			goto loop6a;
loop6b:
			if(c==d){cout<<" ("<<b<<")";c=1;}
			else{c++;}
			b+=2;
		}
		cout<<"\n"<<endl;
		goto loop6;
	}
	goto loop0;
}
