//
//  AppDelegate.h
//  ProgrammableViews
//
//  Created by Daniel Kwiatkowski on 2015-04-15.
//  Copyright (c) 2015 Daniel Kwiatkowski. All rights reserved.
//

#import <UIKit/UIKit.h>
//foward declare ViewController

@class ViewController;


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong,nonatomic)ViewController *viewController;
@property (strong,nonatomic) UIWindow *window;


@end

