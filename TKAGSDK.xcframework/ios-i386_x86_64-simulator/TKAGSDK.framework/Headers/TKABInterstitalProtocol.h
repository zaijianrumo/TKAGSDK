//
//  TKABInterstitalProtocol.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/6/13.
//

#import <Foundation/Foundation.h>

@class TKABInterstitalAd;
NS_ASSUME_NONNULL_BEGIN

@protocol TKABInterstitalProtocol <NSObject>

@optional
/**
 This method is called when interstitial ad material loaded successfully.
 */
- (void)nativeExpresInterstitialAdDidLoad:(TKABInterstitalAd  *_Nonnull)interstitialAd;
/**
 This method is called when interstitial ad material failed to load.
 @param error : the reason of error
 */
- (void)nativeExpresInterstitialAd:(TKABInterstitalAd  *_Nonnull)interstitialAd didFailWithError:(NSError * __nullable)error;

/**
 This method is called when interstitial ad slot will be showing.
 */
- (void)nativeExpresInterstitialAdWillVisible:(TKABInterstitalAd  *_Nonnull)interstitialAd;

/**
 This method is called when interstitial ad is clicked.
 */
- (void)nativeExpresInterstitialAdDidClick:(TKABInterstitalAd  *_Nonnull)interstitialAd;

/**
 This method is called when interstitial ad is closed.
 */
- (void)nativeExpresInterstitialAdDidClose:(TKABInterstitalAd  *_Nonnull)interstitialAd;


@end

NS_ASSUME_NONNULL_END
