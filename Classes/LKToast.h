//
//  LKToast.h
//  News
//
//  Created by lyg on 2019/3/12.
//  Copyright © 2019年 lcb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface LKToast : NSObject
//显示提示视图, 默认显示在屏幕上方，防止被软键盘覆盖，1.5s后自动消失
+ (void)showAtTop:(NSString *)message;

//显示提示视图, 默认显示在屏幕下方，1.5s后自动消失
+ (void)show:(NSString *)message;

//显示提示视图, 默认显示在屏幕上方，防止被软键盘覆盖,3s后自动消失
+ (void)showLongAtTop:(NSString *)message;

//显示提示视图, 默认显示在屏幕下方,3s后自动消失
+ (void)showLong:(NSString *)message;
@end

NS_ASSUME_NONNULL_END
