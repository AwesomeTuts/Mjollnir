//
//  ViewController.h
//  JQTouchDemo
//
//  Created by Ben Smith on 08/11/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UINavigationControllerDelegate>
{
@private
    UINavigationController      *_navigationController;
}

@property (nonatomic, retain) UINavigationController    *navigationController;

@end
