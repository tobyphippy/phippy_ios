//
//  PHIUserManager.h
//  Phippy
//
//  Created by toby on 19/07/2017.
//  Copyright © 2017 kg.self.edu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,PHINetworkStatus){
    PHINetworkStatusUnknown,        // 未知网络
    PHINetworkStatusNotReachable,   // 没有网络(断网)
    PHINetworkStatusViaWWAN,        // 手机自带网络
    PHINetworkStatusViaWiFi         // WIFI
};
@interface PHIUserManager : NSObject

+ (instancetype)shareManager;


///--------------------------------------------------
/// @仅在WIFI环境下载图片
///--------------------------------------------------

@property (nonatomic) BOOL downloadImageOnlyWifi;

@property (nonatomic)PHINetworkStatus networkStatus;

///--------------------------------------------------
// 是否登陆 标示
///--------------------------------------------------
@property (nonatomic) BOOL isLogin;
@property (nonatomic,strong) NSString *userName;

///--------------------------------------------------
// 当前未使用的订单号
///--------------------------------------------------
@property(nonatomic,strong) NSString *orderNumber;

+ (NSString *)getPathForDeliveryAddressData;
@end
