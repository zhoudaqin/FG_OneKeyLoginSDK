//
//  FGComplateResult.h
//  FG_OneKeyLoginSDK
//
//  Created by zhou on 2024/5/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class FGComplateResult;
typedef void(^FGComplete)(FGComplateResult * completeResult);

@interface FGComplateResult : NSObject
/// SDK外层code
@property (nonatomic,assign)NSInteger code;
/// SDK外层msg
@property (nonatomic,nullable,copy)NSString * message;
/// SDK外层data
@property (nonatomic,nullable,copy)NSDictionary * data;
/// Error
@property (nonatomic,nullable,strong)NSError * error;
/// SDK内层code
@property (nonatomic,assign)NSInteger innerCode;
/// SDK内层msg
@property (nonatomic,nullable,copy)NSString * innerDesc;

#ifdef DEBUG
@property (nonatomic,assign)NSTimeInterval debug_createTime;
#endif


@end

NS_ASSUME_NONNULL_END
