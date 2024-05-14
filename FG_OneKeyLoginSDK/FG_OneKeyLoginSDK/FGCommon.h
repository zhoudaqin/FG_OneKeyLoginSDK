//
//  FGCommon.h
//  fg_sdk_demo
//
//  Created by zhou on 2024/5/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FGCommon : NSObject

// 类方法，用于获取单例实例
+ (instancetype)sharedInstance;

// 我方SDK信息
@property (nonatomic,strong) NSString* fgAppId;
@property (nonatomic,strong) NSString* fgApiKey;
@property (nonatomic,strong) NSString* fgSecret;
// 三方SDK信息
@property (nonatomic,strong) NSString* appId;
@property (nonatomic,strong) NSString* appKey;

@end

NS_ASSUME_NONNULL_END
