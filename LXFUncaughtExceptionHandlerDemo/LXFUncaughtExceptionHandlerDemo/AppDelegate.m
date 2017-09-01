//
//  AppDelegate.m
//  LXFUncaughtExceptionHandlerDemo
//
//  Created by 林洵锋 on 2017/9/2.
//  Copyright © 2017年 LXF. All rights reserved.
//

#import "AppDelegate.h"
#import "LXFUncaughtExceptionHandler.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    // 不显示堆栈信息
    InstallUncaughtExceptionHandler(NO);
    
    // 显示堆栈信息
    // InstallUncaughtExceptionHandler(YES);
    
    return YES;
}


@end
