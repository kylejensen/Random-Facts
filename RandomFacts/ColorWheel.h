//
//  ColorWheel.h
//  RandomFacts
//
//  Created by Kyle on 6/18/15.
//  Copyright (c) 2015 babbleFire. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;
-(UIColor *)randomColor;

@end
