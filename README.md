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

</table>
----
## 三天之前
我向婆祖许愿，要一个能让苍生三天之内学会做人工智能的圣经。婆祖说，不行，三天之内谁学的完啊？
我学不完，那就来编一部圣经，让你们看了之后，三天之内心想事成，未来能把天网都给扬了。
## 三天之内学会tensorflow，把你天网都给扬了
### 第一天
第一天当然是要把TF的基本功能了解了。
TF程序的一般格式：
```
#导入库
import tensorflow as tf
...

a=tf.Variable(...)
b=tf.Variable(...)
...
A=tf.constant(...)
B=tf.co黄色nstant(...)
...
x1=f1(a,b,...,A,B,...)
x2=f2(a,b,...,A,B,...)
...

init = tf.global_variables_initializer() #初始化的简称
with tf.Session() as sess: #创建会话
    sess.run(init) #会话初始化
    print(sess.run(x1))
    print(sess.run(x2))
    ...
```
可以导入的库：

|库名|简称|函数|作用|
|-|-|-|-|
|matplotlib.image|mpimg|`import matplotlib.image as mpimg`|读取图片|
|matplotlib.pyplot|plt|`import matplotlib.pyplot as plt`|画图|
|numpy|np|`import numpy as np`|存储和处理大型矩阵的科学计算包|
|tensorflow|tf|`import tensorflow as tf`|必须有这个！！！|

基本操作：

基本语句：

|名称|用法|
|-|-|
|`#...`|注释|
|`'...'`或`"..."`|字符串|
|`break`|跳出循环|
|`if a:A elif b:B elif c:C ... else z:Z`|条件句|
|`print(...,...,...)`|显示|

小学数学函数：

|函数|名称|函数|名称|函数|名称|函数|名称|函数|名称|函数|名称|
|-|-|-|-|-|-|-|-|-|-|-|-|
|`+`|加 |`*` |乘 |`//`|商 |`=`|赋值 |`>`|大于|`tf.maximum`|最大值|
|`+=`|加上|`*=`|乘上|`//=`|商去|`==`|等于 |`<`|小于|`tf.minimum`|最小值|
|`-`|减 |`/` |除 |`%`|余 |`!=`|不等于|`>=`|大于等于|`tf.constant(C)`|常数C|
|`-=`|减去|`/=`|除上|`&=`|余上|||`<=`|小于等于|`tf.Variable(x)`|变量x|

中学数学函数：

|函数|名称|函数|名称|函数|名称|
|-|-|-|-|-|-|
|`tf.abs`|绝对值|`tf.maximum`|最大值|`tf.minimum`|最小值|
|`tf.ceil`|上取整|`tf.floor`|向下取整|`tf.round`|科学取整|
|`tf.pow`|幂|`tf.square`|平方|`tf.sqrt`|开平方|
|`tf.exp`|自然指数|`tf.log`|自然对数|`**`|任意指数|
|`tf.sin`|正弦|`tf.cos`|余弦|`tf.tan`|正切|
|`tf.complex(a,b)`|复数a+bi|`tf.Variable(a+bj)`|变复数a+bi|`tf.constant(a+bj)`|常复数a+bi|

大学数学函数：

|函数|名称|函数|名称|函数|名称|
|-|-|-|-|-|-|
|`tf.asin`|反正|`tf.acos`|反余弦|`tf.atan`|反正切|
|`tf.sinh`|双曲正弦|`tf.cosh`|双曲余弦|`；tf.tanh`|双曲正切|
|`tf.asinh`|反双曲正弦|`tf.acosh`|反双曲余弦|`；tf.atanh`|反双曲正切|
|`tf.sigmoid`|S型函数|`tf.erf`|误差函数|`tf.erfc`|误差余函数|

线性代数函数：

|函数|名称|
|-|-|
|`tf.matmul`|矩阵乘|
|`tf.matrix_determinant`|行列式|
|`tf.matrix_inverse`|矩逆|
|`tf.trace`|矩迹|

数理统计函数：

|函数|名称|
|-|-|
|||

复变函数：

|函数|名称|
|-|-|
|`tf.real`|实部|
|`tf.imag`|虚部|

## 链接
LaTeX公式编辑器：用妈宝叔的就行了

Matplotlib宝典：https://matplotlib.org/index.html

Markdown在线编辑器：https://www.mdeditor.com

NumPy+SciPy宝典：https://docs.scipy.org

Python宝典：https://docs.python.org

SymPy宝典：https://docs.sympy.org
