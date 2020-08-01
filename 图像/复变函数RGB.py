from PIL import Image, ImageDraw
import matplotlib.pyplot as plt,numpy as np,time

def sin(x):return np.sin(x)
def tan(x):return np.tan(x)
def asin(x):return np.arcsin(x)
def atan(x):return np.arctan(x)
def e(x):return np.exp(x)
def ln(x):return np.log(x)
def sinh(x):return np.sinh(x)
def tanh(x):return np.tanh(x)
def asinh(x):return np.arcsinh(x)
def atanh(x):return np.arctanh(x)
def arg(x):return np.angle(x)
def Re(x):return x.real
def Im(x):return x.imag
pi=np.pi
def to255(x):return(int(255/2*(tanh(x)+1)))
def RGB(R,G,B):return(to255(R),to255(G),to255(B))
def prime(size):
    List={2}
    for x in range(3,size+1,2):
        for i in range(2,x):
            if i*i>=x:
                if x%i!=0:List.add(x)
                break
            if x%i==0:break
    List=list(List)
    List.sort()
    return List
def square(size):
    List=[]
    for i in range(size+1):
        List.append(i**2)
    return List

#开始计时
t0=time.time()
#余数
D=7
#迭代次数
I=3
#图名(PicName)
P="sinhz"+str(I)
#区间大小(Radius)
R=2*pi
#图像大小(Size)
S=1000
#复变函数
def f(z):return sinh(z)

#List=prime(size**2)
pic=Image.new('RGB',(S,S),'white')
draw=ImageDraw.Draw(pic)
for x in range(S):
    for y in range(S):
        try:
            z=((-1+2*x/(S-1))+(1-2*y/(S-1))*1j)*R#复数单位
            for i in range(I+1):#迭代函数
                z=f(z)
                if abs(z)>10e10:break
            if abs(z)>10e10:
                draw.point((x,y),'black')
                continue
            draw.point((x,y),RGB(z.real,z.imag,abs(z)))
        except:continue
#保存图像
pic.save('F://Python/{}.png'.format(P),'PNG')
#显示用时
print("已完成，用时{:.2f}秒".format(time.time()-t0))
