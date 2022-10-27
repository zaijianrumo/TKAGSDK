//
//  TKABSplashAd.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/5/12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TKABSplashProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface TKABSplashAd : NSObject
/**
 The delegate for receiving state change messages.
 */
@property (nonatomic, weak, nullable) id<TKABSplashProtocol> delegate;

/*
 当集成有穿山甲,快手时必传
 Root view controller for handling ad actions.
 */
@property (nonatomic, weak) UIViewController *rootViewController;

/// Initializes splash ad with slot id.
/// @param adSlotID the unique identifier of splash ad
- (instancetype _Nonnull)initWithAdSlotID:(NSString *_Nonnull)adSlotID withFrame:(CGRect)frame;

/// Load splash ad datas.
- (void)loadSplashAdData;
/**
 Display  ad.
 @param window : root window for displaying ad, must be key window.
 */
- (void)showInWindow:(UIWindow *_Nullable)window;
/**
Required, destory the ad when ad close.
*/
- (void)destoryAd;


@end

NS_ASSUME_NONNULL_END
