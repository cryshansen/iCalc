//
//  iCalcAppDelegate.m
//  iCalc
//
//  Created by Crystal Hansen on 11-02-06.
//  Copyright 2011 __BlueBug__. All rights reserved.
//

#import "iCalcAppDelegate.h"
#import "iCalcViewController.h"

@implementation iCalcAppDelegate

@synthesize window;
@synthesize calcViewController;

-(void)applicationDidFinishLaunching:(UIApplication *)application{

	iCalcViewController *_calcViewController=
	[[iCalcViewController alloc] initWithNibName:@"iCalcView" bundle:nil];
	self.calcViewController = _calcViewController;
	[_calcViewController release];
	[window addSubview:[calcViewController view]];
	//override point for customization after app launch
	[window makeKeyAndVisible];

}

-(void)dealloc {

	[calcViewController release];
	[window release];
	[super dealloc];

}


@end
