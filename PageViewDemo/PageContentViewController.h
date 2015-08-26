//
//  PageContentViewController.h
//  PageViewDemo
//
//  Created by Andy Obusek on 8/26/15.
//  Copyright (c) 2015 Lightning Development Company, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"

@interface PageContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
