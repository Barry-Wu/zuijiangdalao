#首先是日常各种导入
import matplotlib
import matplotlib.pyplot as plt
from matplotlib.colors import BoundaryNorm
import numpy as np
#然后是各种日用函数的简化
def ceil(x):return np.ceil(x)
def floor(x):return np.floor(x) 
def sin(x):return np.sin(x)
def cos(x):return np.cos(x)
def tan(x):return np.tan(x)
def e(x):return np.exp(x)
def ln(x):return np.log(x)
def arg(x):return np.angle(x)
def Re(x):return x.real
def Im(x):return x.imag
def logic(x):
    if x:return 1
    else:return 0
    
#在每个【...】内填入注释中要求的内容，运行就完事了
def f(x,y,z):return arg(z)#第1空填想整活的公式
r=4						#第2空填图片的显示半径
title='max(x,y)min(x,y)'				#第3空填图像的标题，加$^n$是n次幂, 加r'$\frac{}{}$'是分数
mode=0					#第4空填上色模式：填0为彩虹，填1为棱镜

#正片开始
d=r/1000
x,y=np.mgrid[slice(-r,r,d),slice(-r,r,d)]
z=x+y*1j	#复数单位
w=f(x,y,z)
w=w[:-1,:-1]
levels = MaxNLocator(nbins=15).tick_values(w.min(),w.max())
bar,pic = plt.subplots()	#只画一张图片
pic.set_title(title)	#设置图片的标题
pic.set_aspect(1)	#设置图片的长宽比为1
if mode==1:mode='prism'
else:mode='jet'
plot = pic.pcolormesh(x,y,w,cmap=plt.get_cmap(mode))
bar.colorbar(plot,ax=pic)
plt.show()
