//
//  FGCommon.m
//  fg_sdk_demo
//
//  Created by zhou on 2024/5/14.
//

#import "FGCommon.h"

@implementation FGCommon

// 使用静态变量保存单例实例
static FGCommon *sharedInstance = nil;

// 实现类方法，返回单例实例
+ (instancetype)sharedInstance {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}

@end
