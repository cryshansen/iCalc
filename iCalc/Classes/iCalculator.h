//
//  iCalculator.h
//  iCalc
//
//  Created by Crystal Hansen on 11-02-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface iCalculator : NSObject 
{

@private
	NSMutableString *_display;
	double	_operand;
	NSString *_operator;
}
-init;
-(void) dealloc;
-(void) input: (NSString *) character;
-(NSString *) displayValue;

@end
