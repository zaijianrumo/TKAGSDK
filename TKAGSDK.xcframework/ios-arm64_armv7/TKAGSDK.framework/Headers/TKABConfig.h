//
//  TKABConfig.h
//  TKAGSDK
//
//  Created by 塔肯 on 2022/5/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TKABConfig : NSObject

/**
  register appid
 */
+ (void)registerAppId:(NSString *)appid ;

/**
  retrun  sdk version 
 */
+ (NSString *)sdkVersion ;

@end

NS_ASSUME_NONNULL_END
