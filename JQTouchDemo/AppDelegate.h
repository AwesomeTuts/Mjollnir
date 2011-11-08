//
//  AppDelegate.h
//  JQTouchDemo
//
//  Created by Ben Smith on 08/11/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
@private
    ViewController                       *_WebVC;
    CGRect                              _appFrame;
    UIInterfaceOrientation              _orientation; 
}
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, assign) UIInterfaceOrientation orientation;
@property (nonatomic, assign) CGRect appFrame;
@property (nonatomic, retain) ViewController *WebVC;
@end
