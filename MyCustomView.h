//
//  MyCustomView.h
//  Square
//
//  Created by Vitaliy Dikker on 2/20/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyCustomView : UIView
{
	CGFloat                    squareSize;
	CGFloat                    rotation;
	CGFloat                    rotationR;
	CGFloat                    rotationL;
	CGColorRef                 aColor;
	BOOL                       oneFinger;
	BOOL                       twoFingers;
	BOOL                       rotateR;
	BOOL                       rotateL;
	
	IBOutlet UILabel           *xField;
	IBOutlet UILabel           *yField;
	IBOutlet UILabel           *zField;
}

@end
