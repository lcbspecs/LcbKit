//
//  NSDate+Category.h
//  LcbKit
//
//  Created by lyg on 2019/3/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define D_MINUTE    60
#define D_HOUR        3600
#define D_DAY        86400
#define D_WEEK        604800
#define D_YEAR        31556926

@interface NSDate (Category)

- (NSString *)timeIntervalDescription;//距离当前的时间间隔描述
@end
NS_ASSUME_NONNULL_END
