//
//  TKABBanneProtocol.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/5/24.
//

#import <Foundation/Foundation.h>
@class TKABBannerAd;
NS_ASSUME_NONNULL_BEGIN

@protocol TKABBanneProtocol <NSObject>

/**
 This method is called when banner ad material loaded successfully.
 */
- (void)bannerAdViewDidLoad:(TKABBannerAd *_Nonnull)bannerAd;
/**
This method is called when banner ad material failed to load
*/
- (void)bannerAd:(TKABBannerAd *_Nonnull)bannerAd didFailured:(NSError *)error;
/**
 This method is called when banner ad slot will be showing.
 */
- (void)bannerAdViewExposed:(TKABBannerAd *_Nonnull)bannerAd;
/**
 This method is called when banner ad is clicked.
 */
- (void)bannerAdViewClicked:(TKABBannerAd *_Nonnull)bannerAd;
/**
 This method is called when banner ad is closed.
 */
- (void)bannerAdViewDidClosed:(TKABBannerAd *_Nonnull)bannerAd;

@end

NS_ASSUME_NONNULL_END
