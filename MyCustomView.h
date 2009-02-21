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
	CGColorRef                 aColor;
	BOOL                       twoFingers;
	
	IBOutlet UILabel           *xField;
	IBOutlet UILabel           *yField;
	IBOutlet UILabel           *zField;
}

@end
