from PIL import Image, ImageDraw
import matplotlib.pyplot as plt,numpy as np,time

#质数列表
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
#平方数列表
def square(size):
    List=[]
    for i in range(size+1):
        List.append(i**2)
    return List
    
#开始制图
size=eval(input())
#开始计时
t0=time.time()
#List=prime(size**2)
pic=Image.new('RGB',(size,size),"white")
draw=ImageDraw.Draw(pic)
for x in range(1,size+1):
    for y in range(1,size+1):
        if x==y:
            draw.point((x-1,y-1),(0,0,0))
            continue
        #if abs(x*y-x-y)in List:draw.point((x-1,y-1),'black')
        z=((x+y)**np.log(abs(x-y)))%7
        if 0<z<=1:draw.point((x-1,y-1),(255,0,0))
        elif 1<z<=2:draw.point((x-1,y-1),(255,255,0))
        elif 2<z<=3:draw.point((x-1,y-1),(0,255,0))
        elif 3<z<=4:draw.point((x-1,y-1),(0,255,255))
        elif 4<z<=5:draw.point((x-1,y-1),(0,0,255))
        elif 5<z<=6:draw.point((x-1,y-1),(255,0,255))
#保存图像
pic.save('F://Python/图像名.png','PNG')
#显示用时
print("已完成，用时{:.2f}秒".format(time.time()-t0))
