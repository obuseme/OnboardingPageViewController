//
//  InitialViewController.m
//  PageViewDemo
//
//  Created by Andy Obusek on 8/26/15.
//  Copyright (c) 2015 Lightning Development Company, LLC. All rights reserved.
//

#import "InitialViewController.h"

@interface InitialViewController ()

@property BOOL shown;

@end

@implementation InitialViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)viewDidAppear:(BOOL)animated
{
    if (! self.shown) {
        [self performSegueWithIdentifier:@"showOnboarding" sender:nil];
        self.shown = YES;
    }
}

@end
