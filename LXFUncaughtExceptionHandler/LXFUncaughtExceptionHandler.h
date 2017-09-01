//
//  LXFUncaughtExceptionHandler.h
//  HeRuiLand
//
//  Created by xiaozikeji on 2017/8/31.
//  Copyright © 2017年 xiaozikeji. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LXFUncaughtExceptionHandler : NSObject
{
    BOOL dismissed;
}

@end
void HandleException(NSException *exception);
void SignalHandler(int signal);


/**
 初始化异常处理器

 @param showStackInfo 是否显示堆栈信息
 */
void InstallUncaughtExceptionHandler(BOOL showStackInfo);

// 使用说明
// 在AppDelegate中导入本类,在 didFinishLaunchingWithOptions 方法中调用方法 InstallUncaughtExceptionHandler(); 即可
/**
#import "UncaughtExceptionHandler.h"

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    InstallUncaughtExceptionHandler();
    return YES;
}
*/
