//
//  SMFullScreenPhotoBrowseC.h
//  SinaMBlogNimbus
//
//  Created by ccjoy-jimneylee on 14-1-6.
//  Copyright (c) 2014年 SuperMaxDev. All rights reserved.
//
#import "UIImageView+WebCache.h"
@interface SMFullScreenPhotoBrowseView : UIView

@property (nonatomic, copy) NSString* urlPath;
@property (nonatomic, strong) UIImage* thumbnail;
@property (nonatomic, strong) UIScrollView* scrollView;
@property (nonatomic, strong) UIImageView* imageView;

- (id)initWithUrlPath:(NSString *)urlPath thumbnail:(UIImage*)thumbnail fromRect:(CGRect)rect;

@end
