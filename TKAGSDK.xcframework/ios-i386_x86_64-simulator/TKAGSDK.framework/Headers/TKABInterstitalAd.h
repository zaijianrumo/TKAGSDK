//
//  TKABInterstitalAd.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/6/13.
//

#import <Foundation/Foundation.h>
#import "TKABInterstitalProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface TKABInterstitalAd : NSObject

@property (nonatomic, weak, nullable) id<TKABInterstitalProtocol> delegate;


- (instancetype)initWithSlotID:(NSString *)slotId adSize:(CGSize)adsize;
/**
 * load  ad Data
 */
- (void)loadAdData;

/**
 * render ad
 */
- (void)renderAd:(UIViewController *)rootViewController;


@end

NS_ASSUME_NONNULL_END
