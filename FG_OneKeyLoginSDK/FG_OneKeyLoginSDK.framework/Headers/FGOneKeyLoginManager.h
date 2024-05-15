//
//  FGOneKeyLoginManager.h
//  FG_OneKeyLoginSDK
//
//  Created by zhou on 2024/5/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <FG_OneKeyLoginSDK/FGComplateResult.h>

NS_ASSUME_NONNULL_BEGIN

@interface FGOneKeyLoginManager : NSObject




/**
 初始化
 @param appId 飞鸽后台申请的appId
 @param apiKey 飞鸽后台申请的apiKey
 @param secret 飞鸽后台申请的secret
 @param complete 预初始化回调block
 */
+(void)initWithAppId:(NSString *)appId
              apiKey:(NSString *)apiKey
              secret:(NSString *)secret
            complete:(nullable FGComplete)complete;

/// 置换手机号
/// @param token    token
/// @param complete         回调block
+ (void)getPhonenumber:(NSString *)token complete:(nonnull FGComplete)complete;


@end

NS_ASSUME_NONNULL_END
