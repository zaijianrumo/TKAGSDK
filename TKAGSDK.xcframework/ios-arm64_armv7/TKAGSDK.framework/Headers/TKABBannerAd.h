//
//  TKABBannerAd.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/5/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TKABBanneProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface TKABBannerAd : NSObject

///  Initializes banner ad with slot id and frame.
/// @param slotId slotid
/// @param rootViewController show in ViewController
/// @param rect If height is adaptive,height value 0
- (instancetype)initWithSlotId:(nonnull NSString *)slotId
            rootViewController:(nonnull UIViewController *)rootViewController
                            adRect:(CGRect)rect;

@property (nonatomic, weak, nullable) id<TKABBanneProtocol> delegate;

/**
 *  广告刷新间隔，范围 [30, 120] 秒，默认值 30 秒。设 0 则不刷新。 [可选]
 */
@property (nonatomic ,assign) NSInteger autoSwitchInterval;
/**
 hide closeBtn ,default NO    TKSDK中生效.
 */
@property (nonatomic ,assign) BOOL hideColseBtn;

- (void)loadAndShowInView:(UIView *)inView;
/**
Required, destory the ad when ad close.
*/
- (void)destoryAd;

@end

NS_ASSUME_NONNULL_END
