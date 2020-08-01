from PIL import Image, ImageDraw
import matplotlib.pyplot as plt,numpy as np,time
def sin(x):return np.sin(x)
def cos(x):return np.cos(x)
def tan(x):return np.tan(x)
def e(x):return np.exp(x)
def ln(x):return np.log(x)
def arg(x):return np.angle(x)
def Re(x):return x.real
def Im(x):return x.imag
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
    
#开始制图
picname="[7^x+6^y]余7"
size=eval(input())
#开始计时
t0=time.time()
#List=prime(size**2)
pic=Image.new('RGB',(size,size),"white")
draw=ImageDraw.Draw(pic)
for x in range(1,size+1):
    for y in range(1,size+1):
        #if x==y:
            #draw.point((x-1,y-1),(0,0,0))
            #continue
        #if abs(x*y-x-y)in List:draw.point((x-1,y-1),'black')
        z=int(7**x+6**y)%7
        if z==1:draw.point((x-1,y-1),(255,0,0))
        elif z==2:draw.point((x-1,y-1),(255,255,0))
        elif z==3:draw.point((x-1,y-1),(0,255,0))
        elif z==4:draw.point((x-1,y-1),(0,255,255))
        elif z==5:draw.point((x-1,y-1),(0,0,255))
        elif z==6:draw.point((x-1,y-1),(200,0,200))
#保存图像
pic.save('F://Python/{}.png'.format(picname),'PNG')
#显示用时
print("已完成，用时{:.2f}秒".format(time.time()-t0))
