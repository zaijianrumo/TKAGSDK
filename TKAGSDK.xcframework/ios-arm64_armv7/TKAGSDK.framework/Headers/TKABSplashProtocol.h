//
//  TKABSplashDelegate.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/5/12.
//
#import <Foundation/Foundation.h>
@class TKABSplashAd;
NS_ASSUME_NONNULL_BEGIN

@protocol TKABSplashProtocol<NSObject>

@optional
/**
 This method is called when splash ad material loaded successfully.
 */
- (void)splashAdDidLoad:(TKABSplashAd *_Nonnull)splashAd;
/**
 This method is called when splash ad material failed to load.
 @param error : the reason of error
 */
- (void)splashAd:(TKABSplashAd *_Nonnull)splashAd didFailWithError:(NSError *_Nullable)error;
/**
 This method is called when splash ad slot will be showing.
 */
- (void)splashAdWillVisible:(TKABSplashAd *_Nonnull)splashAd;
/**
 This method is called when splash ad click skipbtn
 */
- (void)splashAdDidClickSkip:(TKABSplashAd *_Nonnull)splashAd;
/**
 This method is called when splash ad is clicked.
 */
- (void)splashAdDidClick:(TKABSplashAd *_Nonnull)splashAd;
/**
 This method is called when splash ad is closed.
 */
- (void)splashAdDidClose:(TKABSplashAd *_Nonnull)splashAd;


@end

NS_ASSUME_NONNULL_END
