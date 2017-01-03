//
//  SunStyleKit.h
//  Bluster
//
//  Created by Max von Hippel on 1/2/17.
//  Copyright (c) 2017 Linked & Loaded. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface SunStyleKit : NSObject

// Drawing Methods
+ (void)drawCanvas2WithSunRayAngle: (CGFloat)sunRayAngle point: (CGPoint)point;

@end



@interface UIColor (PaintCodeAdditions)

- (UIColor*)blendedColorWithFraction: (CGFloat)fraction ofColor: (UIColor*)color;

@end