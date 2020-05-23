//
//  iCalcAppDelegate.h
//  iCalc
//
//  Created by Crystal Hansen on 11-02-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iCalcViewController;


@interface iCalcAppDelegate : NSObject <UIApplicationDelegate> {
    IBOutlet UIWindow *window;
	iCalcViewController *calcViewController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) iCalcViewController *calcViewController;


@end

