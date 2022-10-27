//
//  TKABNativeExpressAdView.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/5/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface TKABNativeExpressAdView : NSObject

@property (nonatomic, weak) UIViewController *controller;
// 信息流view
@property (nonatomic, strong) UIView *expressView;

- (void)render;

@end

NS_ASSUME_NONNULL_END
