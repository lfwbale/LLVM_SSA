### MF1933058 刘凡维testc
#### 源代码test.c
![testc.png](https://github.com/lfwbale/LLVM_SSA/blob/master/test.c)

##### 使用语句clang tset.c -emit-llvm -S -c -o test.ll 生成tset.ll文件

#### test.ll文件代码
![testll.png](evernotecid://848BA53C-1069-4418-97BD-83211FEC73F4/appyinxiangcom/10677968/ENResource/p97)


#### 说明：
根据test.c生成的test.ll文件中
%3在第14行第一次被赋值
而在第18行%3再次赋值
不满足完全SSA的要求，属于部分SSA
变量c的值虽然改变，但是地址一直没变



#### 源代码point.c
![pointc.png](evernotecid://848BA53C-1069-4418-97BD-83211FEC73F4/appyinxiangcom/10677968/ENResource/p99)

##### 使用语句clang point.c -emit-llvm -S -c -o point.ll 生成point.ll文件

#### test.ll文件代码
![pointll.png](evernotecid://848BA53C-1069-4418-97BD-83211FEC73F4/appyinxiangcom/10677968/ENResource/p100)

#### 说明：
根据point.c生成的point.ll文件中
%3在第20行第一次被赋值
而在第24行被再次赋值，
不满足完全SSA的要求，属于部分SSA
与前一个程序不同的地方在于，指针变量i被重新赋值后（虽然值始终为10），但是指针指向的地址会发生改变

