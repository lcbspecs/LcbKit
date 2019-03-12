//
//  NSDate+Category.m
//  LcbKit
//
//  Created by lyg on 2019/3/12.
//

#import "NSDate+Category.h"

@implementation NSDate (Category)

/*距离当前的时间间隔描述*/
- (NSString *)timeIntervalDescription
{
    
    NSTimeInterval timeInterval = -[self timeIntervalSinceNow];
    if (timeInterval < 60) {
        return @"1分钟内";
    }
    return @"1分钟内";
}

@end
