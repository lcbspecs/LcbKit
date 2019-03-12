//
//  UIButton+Category.h
//  LcbKit
//
//  Created by lyg on 2019/3/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ButtonBlock)(UIButton *button);

@interface UIButton (Category)

- (void)addAction:(ButtonBlock)block;
- (void)addAction:(ButtonBlock)block forControlEvents:(UIControlEvents)controlEvents;

@end


NS_ASSUME_NONNULL_END
