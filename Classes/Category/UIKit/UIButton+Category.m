//
//  UIButton+Category.m
//  LcbKit
//
//  Created by lyg on 2019/3/12.
//

#import "UIButton+Category.h"
#import <objc/runtime.h>

static void * ActionTag = &ActionTag;
@implementation UIButton (Category)

- (void)addAction:(ButtonBlock)block
{
    objc_setAssociatedObject(self, ActionTag, block, OBJC_ASSOCIATION_COPY_NONATOMIC);
    [self addTarget:self action:@selector(action:) forControlEvents:UIControlEventTouchUpInside];
}

- (void)addAction:(ButtonBlock)block forControlEvents:(UIControlEvents)controlEvents
{
    objc_setAssociatedObject(self,ActionTag, block, OBJC_ASSOCIATION_COPY_NONATOMIC);
    [self addTarget:self action:@selector(action:) forControlEvents:controlEvents];
}

- (void)action:(id)sender
{
    ButtonBlock blockAction = (ButtonBlock)objc_getAssociatedObject(self, ActionTag);
    if (blockAction)
    {
        blockAction(self);
    }
}

@end
