PY函数大全（Built-in Functions）
abs()：绝对值
像abs(-3)这种就是取绝对值，但是像abs(2+1j)这样就是取模。
all()：全
也称∀，？？？
any()：有
也称∃，？？？
ascii()
？？？
bin(),oct(),hex()：二进制化、八进制化、十六进制化
比如输入bin(123)得0b1111011，输入oct(123)得0o173，输入hex(123)得0x7b。
由此可见，二、八、十六进制数开头分别会带'0b'、'0o'、'0x'，前面啥也不带的必为十进制数。
在这俩函数这，我才发现很多函数的自变量可以是上述任何一种进制数，甚至True和False都行。
bool()：逻辑值
根据里面的算式情况，输出True或者False。
bytearray()
？？？
bytes()
？？？
callable()
？？？
chr(),ord()：取符号、取编码
老师讲过，A对应65，a对应97，必背！那意味着，chr(65)是'A'，'ord('A')'是'65',以此类推。
调戏一下：chr(6324)+chr(9527)对应'ᢴ┷'，ord('👴')对应128116。（怎么没有114514...）
classmethod()
？？？
compile()
？？？
complex()：复数
比如complex(12,34)就是12+34j。注意，虚部为1也不能把1省略！！！
？？？
delattr()
？？？
dict()
？？？
dir()
？？？
divmod()
？？？
enumerate()
？？？
eval()：算式化
*可以把字符转化成数字。
exec()
*？？？
filter()
*？？？
float(),int()：取小数、取整数
*那就把各种数字转化成小数、整数呗。顺便一提，3.这种也叫浮点数。
format()
*？？？
frozenset()
*？？？
getattr()
*？？？
globals()
*？？？
hasattr()
*？？？
hash()
*？？？
help()
*？？？
id()
*？？？
__import__()
*？？？
input()
*？？？
isinstance()
*？？？
issubclass()
*？？？
iter()
*？？？
len()
*？？？
list()
*？？？
locals()
*？？
map()
*？？？
max(),min()：最大值、最小值
比如输入min(-1,2,3,5,6)得6，输入min(-1,2,3,5,6)得-1。
实数之间都可以比较。憋整那些复数、矩阵啥的！
memoryview()
*？？？
next()
*？？？
object()
*？？？
open()
*？？？
pow()
*？？？
print()
*？？？
property()
*？？？
range()
*？？？
repr()
*？？？
reversed()
*？？？
round()：约等于
直接往里面搁一个数就直接给宁凑整。再加一个数n，就会把数凑整到小数点后n位。四舍六入，五我不到嗷。
比如打round(5.45)、round(5.55,1)分别得5、5.5。
set()
*？？？
setattr()
*？？？
slice()
*？？？
sorted()
*？？？
staticmethod()
*？？？
str()
*？？？
`sum()
？？？
super()
*？？？
tuple()
*？？？
type()
*？？？
vars()
*？？？
zip()
*？？？
