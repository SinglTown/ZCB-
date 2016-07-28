//
//  TCChat_LunBoScrollView.h
//  无限轮播图
//
//  Created by chuanbao on 16/4/14.
//  Copyright © 2016年 chuanbao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageView+WebCache.h"

@interface TCChat_LunBoScrollView : UIScrollView
@property (nonatomic,strong)UIImage *bitmapImage; //占位图
@property (nonatomic, strong)NSArray *imageArray; //image的数组
@property (nonatomic, strong)NSArray *sd_URLArray; //如果有SDWebImage使用这个数组加载视图
@property (nonatomic, assign)CGFloat carouselTime; //轮播时间
- (void)addTouchImageActionBlock:(void (^)(NSInteger index))block; //点击的回
@end
