# 最近更新：求 极 限
# 常用公式
|名称|公式|
|-|-|
|换底公式|![](https://latex.codecogs.com/gif.latex?a^b=e^{b\ln{a}})|
|e-指数展式|![](https://latex.codecogs.com/gif.latex?\lim_{x\to0}e^x=\lim_{x\to0}(1+x+\frac{x^2}{2!}+\frac{x^3}{3!}+\cdots)=\lim_{x\to0}\sum_{n=0}^{\infty}\frac{x^n}{n!})|
|指数展式|![](https://latex.codecogs.com/gif.latex?\lim_{x\to0}a^x=\lim_{x\to0}(1+x\ln{a}+\frac{x^2\ln^2{a}}{2!}+\frac{x^3\ln^3{a}}{3!}+\cdots)=\lim_{x\to0}\sum_{n=0}^{\infty}\frac{x^n\ln^n{a}}{n!})|
|对数展式|![](https://latex.codecogs.com/gif.latex?\lim_{x\to0}\ln(1+x)=\lim_{x\to0}(x-\frac{x^2}{2}+\frac{x^3}{3}-\frac{x^4}{4}+\cdots)=\lim_{x\to0}\sum_{n=1}^{\infty}\frac{(-1)^{n-1}x^n}{n})|
|正弦展式|![](https://latex.codecogs.com/gif.latex?\lim_{x\to0}\sin{x}=\lim_{x\to0}(x-\frac{x^3}{3!}+\frac{x^5}{5!}-\frac{x^7}{7!}+\cdots)=\lim_{x\to0}\sum_{n=1}^{\infty}\frac{(-1)^{n-1}x^{2n-1}}{(2n-1)!}  )|
|余弦展式|![](https://latex.codecogs.com/gif.latex?\lim_{x\to0}\cos{x}=\lim_{x\to0}(1-\frac{x^2}{2!}+\frac{x^4}{4!}-\frac{x^6}{6!}+\cdots)=\lim_{x\to0}\sum_{n=1}^{\infty}\frac{(-1)^{n-1}x^{2n-2}}{(2n-2)!}  )|

# 例题
<table>

<tr><td><strong>极限</strong></td><td><strong>LaTeX代码</strong></td><td><strong>值</strong></td><td><strong>神必代码</strong></td></tr>

<tr><td><img src="https://latex.codecogs.com/gif.latex?\lim_{x\to0}(\frac{a^x+b^x+c^x}{3})^\frac{1}{x}"/></td><td>\lim_{x\to0}(\frac{a^x+b^x+c^x}{3})^\frac{1}{x}</td><td><img src="https://latex.codecogs.com/gif.latex?\sqrt[3]{abc}"/></td><td>BV1jk4y127Ta</td></tr>
<tr><td colspan="4"><strong>解</strong>：原式<img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}\exp\{\frac{\ln\frac{1}{3}(a^x+b^x+c^x)}{x}\}=\lim_{x\to0}\exp\{\frac{\ln\frac{1}{3}(1+x\ln{a}+1+x\ln{b}+1+x\ln{c}+o(x))}{x}\}"/><img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}\exp\{\frac{\ln(1+\frac{1}{3}x\ln{abc}+o(x))}{x}\}=\lim_{x\to0}\exp\{\frac{\frac{1}{3}x\ln{abc}+o(x)}{x}\}=\sqrt[3]{abc}"/>

<tr><td><img src="https://latex.codecogs.com/gif.latex?\lim_{x\to0}(\frac{x}{\ln(1+x)})^\frac{1}{x}"/></td><td>\lim_{x\to0}(\frac{x}{\ln(1+x)})^\frac{1}{x}</td><td><img src="https://latex.codecogs.com/gif.latex?e^\frac{1}{2}"/></td><td>BV1kA411T7KH</td></tr>
<tr><td colspan="4"><strong>解</strong>：原式<img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}(\frac{x}{\ln(1+x)})^{\frac{1}{\frac{x}{\ln(1+x)}-1}(\frac{x}{\ln(1+x)}-1)\frac{1}{x}}=\lim_{x\to0}\exp\{\frac{x-\ln(1+x)}{x\ln(1+x)}\}"/><img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}\frac{x-(x-\frac{x^2}{2}+o(x^2))}{x(x-\frac{x^2}{2}+o(x^2))}=\frac{1}{2}"/>

<tr><td><img src="https://latex.codecogs.com/gif.latex?\lim_{x\to0}(\sin{2x}+\cos{x})^\frac{1}{x}"/></td><td>\lim_{x\to0}(\sin{2x}+\cos{x})^\frac{1}{x}</td><td><img src="https://latex.codecogs.com/gif.latex?e^2"/></td><td>BV1Xr4y1A7Ba</td></tr>
<tr><td colspan="4"><strong>解</strong>：原式<img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}(2\sin{x}\cos{x}+\cos{x})^\frac{1}{x}=\lim_{x\to0}(1+2\sin{x})^\frac{1}{x}\cos{x}^\frac{1}{x}"/><img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}e^{\frac{2\sin{x}}{x}}\exp\{\frac{\cos{x}-1}{x}\}=e^2e^0=e^2"/>

<tr><td><img src="https://latex.codecogs.com/gif.latex?\lim_{x\to0}\frac{\tan(\tan(\cdots\tan{x}))_n-\sin(\sin(\cdots\sin{x}))_n}{x^3}"/></td><td>\lim_{x\to0}\frac{\tan(\tan(\cdots\tan{x}))_n-\sin(\sin(\cdots\sin{x}))_n}{x^3}</td><td><img src="https://latex.codecogs.com/gif.latex?\frac{n}{2}"/></td><td>BV1Si4y1T7dK</td></tr><tr><td colspan="4"><strong>解</strong>：原式<img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}\frac{\tan(\cdots\tan(x+\frac{1}{3}x^3+o(x^3)))_{n-1}-\sin(\cdots\sin(x-\frac{1}{6}x^3+o(x^3)))_{n-1}}{x^3}"/><img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}\frac{\tan(\cdots\tan(x+\frac{2}{3}x^3+o(x^3)))_{n-2}-\sin(\cdots\sin(x-\frac{1}{3}x^3+o(x^3)))_{n-2}}{x^3}"/><img src="https://latex.codecogs.com/gif.latex?=\cdots=\lim_{x\to0}x+\frac{x+\frac{n}{3}x^3+o(x^3)-(x-\frac{n}{6}x^3+o(x^3))}{x^3}=\frac{n}{2}"/>

<tr><td><img src="https://latex.codecogs.com/gif.latex?\lim_{x\to0}\frac{e^{(1+x)^{\frac{1}{x}}}-(1+x)^{\frac{e}{x}}}{x^2}"/></td><td>\lim_{x\to0}\frac{e^{(1+x)^{\frac{1}{x}}}-(1+x)^{\frac{e}{x}}}{x^2}</td><td><img src="https://latex.codecogs.com/gif.latex?\frac{1}{8}e^{e+1}"/></td><td>BV1rU4y147nc</td></tr><tr><td colspan="4"><strong>解</strong>：原式
<img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}\frac{e^{\exp\{\frac{\ln(1+x)}{x}\}}-e^{\frac{e\ln(1+x)}{x}}}{x^2}=\lim_{x\to0}\frac{e^{\exp\{1-\frac{x}{2}+\frac{x^2}{3}+o(x^2)\}}-e^{e(1-\frac{x}{2}+\frac{x^2}{3}+o(x^2))}}{x^2}"/><img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}\frac{e^{e(1+(-\frac{x}{2}+\frac{x^2}{3})+\frac{1}{2}(-\frac{x}{2}+\frac{x^2}{3})^2+o(x^2))}-e^{e(1-\frac{x}{2}+\frac{x^2}{3}+o(x^2))}}{x^2}"/><img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}e^{e(1-\frac{x}{2}+\frac{x^2}{3})}\frac{e^{e(\frac{x^2}{8}+o(x^2))}-e^{o(x^2)}}{x^2}=\lim_{x\to0}e^e\frac{1+\frac{ex^2}{8}+o(x^2)-(1+o(x^2))}{x^2}"/><img src="https://latex.codecogs.com/gif.latex?=\frac{1}{8}e^{e+1}"/>

<tr><td><img src="https://latex.codecogs.com/gif.latex?\lim_{x\to0}\frac{x^2-\arctan^2{x}}{x^4}"/></td><td>\lim_{x\to0}\frac{x^2-\arctan^2{x}}{x^4}</td><td><img src="https://latex.codecogs.com/gif.latex?\frac{2}{3}"/></td><td>BV1Ti4y1F7aM</td></tr><tr><td colspan="4"><strong>解</strong>：原式<img src="https://latex.codecogs.com/gif.latex?=\lim_{x\to0}\frac{x^2-(x-\frac{x^3}{3}+o(x^3))^2}{x^4}=\lim_{x\to0}\frac{x^2-(x^2-\frac{2}{3}x^4+o(x^4))}{x^4}=\frac{2}{3}"/>

</table># 链接
LaTeX公式编辑器：用妈宝叔的就行了
Matplotlib宝典：https://matplotlib.org/index.html
Markdown在线编辑器：https://www.mdeditor.com
NumPy+SciPy宝典：https://docs.scipy.org
Python宝典：https://docs.python.org
SymPy宝典：https://docs.sympy.org
# Trivia
•github上的都是计算机/电信/软件大佬和程序猿，俺一个机电萌新被大佬围观，瑟瑟发抖(/ω＼)
•除了你群某小伙喜欢画数学图像，俺也喜欢用matplotlib和PIL画抽象图像（
•微专业（信息工程•人工智能）的第一弹是计算机视觉，我们组四菜懂不起，之后的数字图像处理选修课才知道卷积核，机器人选修课才学了平移旋转矩阵
•第二弹是数据挖掘，带作业就用了最简单的kNN，老师还满意
•第三弹是深度学习，这学期在学，，，
•unity、gamemaker、flash老三样留着
