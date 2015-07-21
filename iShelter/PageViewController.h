//
//  PageViewController.h
//  iShelter
//
//  Created by wangzhilong on 15/7/20.
//  Copyright (c) 2015年 wangzhilong. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol FontAdjustDelegate <NSObject>

- (void)adjustRangeArrayForText;

@end

@interface PageViewController : UIPageViewController
@property (assign, nonatomic) id<FontAdjustDelegate> fontdelegate;

- (void)loadText:(NSString *)text;
@end

