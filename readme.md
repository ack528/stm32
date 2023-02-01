# stm32学习手册
## 初识固件库

<div align=center><img src="https://github.com/ack528/stm32/blob/master/readme/images/image-20230129104729443.png?raw=true" alt="stm32固件库文件分析" width="400px" /></div>

<div align=center>stm32固件库文件分析</div>

## 位带操作

> [位带操作](https://blog.csdn.net/Small_ash/article/details/118702469?spm=1001.2014.3001.5506)

对于片上外设位带区的某个比特，记它所在字节的地址为 A ,位序号为 n(0<=n<=7)，则该比特在别名区的地址为：

```c
AliasAddr= =0x42000000+ (A-0x40000000)*8*4 +n*4
```

0X42000000 是外设位带别名区的起始地址， 0x40000000 是外设位带区的起始地址，（A - 0x40000000）表示该比特前面有多少个字节，一个字节有 8 位，所以 *8 ，一个位膨胀后是 4 个字节，所以 *4 ， n 表示该比特在 A 地址的序号，因为一个位经过膨胀后是四个字节，所以也 *4 。

