# LXFUncaughtExceptionHandler
iOS - APP捕获并弹窗显示异常



## Usage



1. 将LXFUncaughtExceptionHandler拖入项目中
2. 在 AppDelegate.m 的 didFinishLaunchingWithOptions 添加以下代码进行初始化



```
// 不显示堆栈信息
InstallUncaughtExceptionHandler(NO);

// 显示堆栈信息
// InstallUncaughtExceptionHandler(YES);
```



## Exhibition

![image](https://github.com/LinXunFeng/LXFUncaughtExceptionHandler/raw/master/Screenshots/1.png)

![image](https://github.com/LinXunFeng/LXFUncaughtExceptionHandler/raw/master/Screenshots/2.png)

