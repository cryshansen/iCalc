//
//  iCalcViewController.h
//  iCalc
//
//  Created by Crystal Hansen on 11-02-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iCalculator.h"

@interface iCalcViewController : UIViewController 
{
	IBOutlet id displayField;
	iCalculator *_calculator;
}
-(IBAction) press:(id)sender;

@end
