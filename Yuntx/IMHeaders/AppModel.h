//
//  AppModel.h
//  AppModel
//
//  Created by wangming on 16/7/25.
//  Copyright © 2016年 ronglian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppModelDelegate.h"

@interface AppModel : NSObject<UIApplicationDelegate>

@property (nonatomic,strong) id owner;
@property (nonatomic,weak) id<AppModelDelegate>appModelDelegate;

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(AppModel);

//加载serveradd配置
- (void)initServerAddr;


/**
 @brief 登录
 @discussion 登录，根据传入的登录信息进行登陆
 @param loginInfo 登录时传递进来的用户信息   包含以下参数：
 @param @"account" 账号
 @param @"mobile" 手机号
 @param @"member_name" 姓名
 @param @"App_AppKey" appKey
 @param @"App_Token" appToken
 @param @"mode" 登录模式
 @param LoginCompletion 登录返回的信息
 */
-(void)loginSDK:(NSDictionary*)loginInfo :(void(^)(NSError* error)) LoginCompletion;

/**
 @brief 登出
 @discussion 登出，退出当前账号
 @param LogoutCompletion 退出登陆返回的信息
 */
-(void)logout:(void(^)(NSError* error)) LogoutCompletion;

/**
 @brief 设置角标数
 @param badgeNumber 角标数字
 */
-(void)setAppleBadgeNumber:(NSInteger)badgeNumber;

/**
 @brief 获取应用未读信息数
 @return 应用未读信息数
 */
- (NSInteger)getAppleBadgeNumberCount;


@end
