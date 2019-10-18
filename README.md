# 最犟大佬官网
## 目录
### 三天之前
### 三天之内学会tensorflow，把你天网都给扬了
### 链接
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
B=tf.constant(...)
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

小学数学：

|函数|名称|函数|名称|函数|名称|函数|名称|函数|名称|函数|名称|
|-|-|-|-|-|-|-|-|-|-|-|-|
|`+`|加 |`*` |乘 |`//`|商 |`=`|赋值 |`>`|大于|`tf.maximum`|最大值|
|`+=`|加上|`*=`|乘上|`//=`|商去|`==`|等于 |`<`|小于|`tf.minimum`|最小值|
|`-`|减 |`/` |除 |`%`|余 |`!=`|不等于|`>=`|大于等于|`tf.constant`|常数|
|`-=`|减去|`/=`|除上|`&=`|余上|||`<=`|小于等于|`tf.Variable`|变量|

中学数学：（用的时候自变量一定要是浮点数！！！）

|函数|名称|函数|名称|函数|名称|
|-|-|-|-|-|-|
|`tf.abs`|绝对值|`tf.maximum`|最大值|`tf.minimum`|最小值|
|`tf.ceil`|上取整|`tf.floor`|向下取整|`tf.round`|科学取整|
|`tf.pow`|幂|`tf.square`|平方|`tf.sqrt`|开平方|
|`tf.exp`|自然指数|`tf.log`|自然对数|`**`|任意指数|
|`tf.sin`|正弦|`tf.cos`|余弦|`tf.tan`|正切|
|`tf.asin`|反正|`tf.acos`|反余弦|`tf.atan`|反正切|
|`tf.sinh`|双曲正弦|`tf.cosh`|双曲余弦|`；tf.tanh`|双曲正切|
|`tf.asinh`|反双曲正弦|`tf.acosh`|反双曲余弦|`；tf.atanh`|反双曲正切|
|`tf.sigmoid`|S型函数|||||

注：
1.科学取整是指四舍六入五凑偶
2.
双曲正弦函数是```sinh(x)=\frac{e^{x}-e^{-x}}{2}```
双曲余弦函数是```cosh(x)=\frac{e^{x}+e^{-x}}{2}```
双曲正切函数是```tanh(x)=\frac{e^{x}-e^{-x}}{e^{x}+e^{-x}}```
S型函数是```sigmoid(x)=\frac{1}{1+e^{-x}}```

ax^{2} + by^{2} + c = 0
3.S型函数是

大学数学：

|函数|名称|
|-|-|
|`tf.matmul`|矩阵乘|
|`tf.matrix_determinant`|行列式|
|`tf.matrix_inverse`|矩逆|
|`tf.trace`|矩迹|

### 第二天

### 第三天

## 链接
[Markdown在线编辑器](https://www.mdeditor.com)
[LaTeX在线:吴文中数学公式编辑器](http://latex.91maths.com)
