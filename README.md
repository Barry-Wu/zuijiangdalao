# 最犟大佬官网
## 最近更新：七余函数一览
|名称|公式|图片|
|----|----|----|
|[(x+y)<sup>ln｜x-y｜</sup>]%7|![](https://latex.codecogs.com/gif.latex?%5B%28x&plus;y%29%5E%7Bln%7Cx-y%7C%7D%5D%257)|[链接](http://ys-k.ys168.com/605869610/r524K7H386IMM6kdeuwP/[(x%20y)%5Eln│x-y│]余7.png)|
|[lnxlny]%7|![](https://latex.codecogs.com/gif.latex?%5Blnx%5Ccdot%20lny%5D%257)|[链接](http://ys-e.ys168.com/605869657/mccxwRl853J6J62HMP6/[lnxlny]余7.png)|
|[x+lny]%7|![](https://latex.codecogs.com/gif.latex?%5Bx&plus;lny%5D%257)|[链接](http://ys-e.ys168.com/605869647/kgbtxTl853J6J6329P42/[x＋lny]余7.png)|
|[x-lny]%7|![](https://latex.codecogs.com/gif.latex?%5Bx-lny%5D%257)|[链接](http://ys-e.ys168.com/605869647/kgbtxTl853J6J6329P45/[x-lny]余7.png)|
|[xlny]%7|![](https://latex.codecogs.com/gif.latex?%5Bxlny%5D%257)|[链接](http://ys-e.ys168.com/605869647/kgbtxTl853J6J6329P44/[xlny]余7.png)|
|[x÷lny]%7|![](https://latex.codecogs.com/gif.latex?%5B%5Cfrac%7Bx%7D%7Blny%7D%5D%257)|[链接](http://ys-e.ys168.com/605869647/kgbtxTl853J6J6329P43/[x÷lny]余7.png)|
说明：白=0，红=1，黄=2，绿=3，青=4，蓝=5，粉=6，黑=无
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

注：

1.使用函数的时候一定要尽量使用浮点数！

2.科学取整是指四舍六入五凑偶

3.上述一些函数的公式

|名称|公式|
|-|-|
|双曲正弦函数|sinh(x)=(e<sup>x</sup>-e<sup>-x</sup>)/2|
|双曲余弦函数|cosh(x)=(e<sup>x</sup>+e<sup>-x</sup>)/2|
|双曲正切函数|tanh(x)=(e<sup>x</sup>-e<sup>-x</sup>)/(e<sup>x</sup>+e<sup>-x</sup>)|
|S型函数|sigmoid(x)=1/(1+e<sup>-x</sup>)|
|误差函数|erf(x)=(2/√π)∫<sub>0</sub><sup>x</sup>e<sup>-x²</sup>dx|
|误差余函数|erfc(x)=erf(x)=(2/√π)∫<sub>x</sub><sup>∞</sup>e<sup>-x²</sup>dx|

这就和指数函数e<sup>x</sup>过不去了是吧...
### 第二天

### 第三天

## 链接
LaTeX在线:吴文中数学公式编辑器：http://latex.91maths.com

Matplotlib宝典：https://matplotlib.org/index.html

Markdown在线编辑器：https://www.mdeditor.com

NumPy+SciPy宝典：https://docs.scipy.org

Python宝典：https://docs.python.org

SymPy宝典：https://docs.sympy.org
