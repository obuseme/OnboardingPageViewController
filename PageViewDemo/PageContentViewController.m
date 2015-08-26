//
//  PageContentViewController.m
//  PageViewDemo
//
//  Created by Andy Obusek on 8/26/15.
//  Copyright (c) 2015 Lightning Development Company, LLC. All rights reserved.
//

#import "PageContentViewController.h"

@interface PageContentViewController ()

@end

@implementation PageContentViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.backgroundImageView.image = [UIImage imageNamed:self.imageFile];
    self.titleLabel.text = self.titleText;
}

@end
