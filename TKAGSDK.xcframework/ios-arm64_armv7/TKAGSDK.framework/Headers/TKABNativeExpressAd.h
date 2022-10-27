//
//  TKABNativeExpressAd.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/5/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TKABNativeExpressProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface TKABNativeExpressAd : NSObject
/**
 The delegate for receiving state change messages.
 */
@property (nonatomic, weak, nullable) id<TKABNativeExpressProtocol> delegate;


/// Initializes splash ad with slot id.
/// @param adSlotID the unique identifier of splash ad
- (instancetype _Nonnull)initWithAdSlotID:(NSString *_Nonnull)adSlotID withSize:(CGSize)adSize;

/// Load NativeExpress  datas. current max 1
- (void)loadNativeExpressAdDataWihtCount:(NSInteger)count;
/**
Required, destory the ad when ad close.
*/
- (void)destoryAd;

@end

NS_ASSUME_NONNULL_END
