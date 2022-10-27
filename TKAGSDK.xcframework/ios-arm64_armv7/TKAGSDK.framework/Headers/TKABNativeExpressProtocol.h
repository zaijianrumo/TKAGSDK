//
//  TKABNativeExpressProtocol.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/5/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class TKABNativeExpressAd;
@class TKABNativeExpressAdView;
NS_ASSUME_NONNULL_BEGIN

@protocol TKABNativeExpressProtocol<NSObject>

/**
 * Sent when views successfully load ad
 */
- (void)nativeExpressAdSuccess:(TKABNativeExpressAd *)expressAd toLoadViews:(NSArray<__kindof TKABNativeExpressAdView *> *_Nullable)views;

/**
 * Sent when views fail to load ad
 */
- (void)nativeExpressAd:(TKABNativeExpressAd *)expressAd didFailToLoadError:(NSError *_Nullable)error;

/**
 * This method is called when rendering a nativeExpressAdView successed, and nativeExpressAdView.size.height has been updated
 */
- (void)nativeExpressAdViewRenderSuccess:(TKABNativeExpressAd *)expressAd;

/**
 * Sent when an ad view is clicked
 */
- (void)nativeExpressAdViewDidClick:(TKABNativeExpressAd *)expressAd;

/**
 * Sent when an ad view is closed
 */
- (void)nativeAdDidClose:(TKABNativeExpressAd *)expressAd;

@end

NS_ASSUME_NONNULL_END
