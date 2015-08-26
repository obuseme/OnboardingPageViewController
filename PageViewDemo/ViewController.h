//
//  ViewController.h
//  PageViewDemo
//
//  Created by Andy Obusek on 8/26/15.
//  Copyright (c) 2015 Lightning Development Company, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>

- (IBAction)startWalkthrough:(id)sender;
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@end

