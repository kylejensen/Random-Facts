//
//  ViewController.h
//  RandomFacts
//
//  Created by Kyle on 6/16/15.
//  Copyright (c) 2015 babbleFire. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *randomFactLabel;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;
@property (weak, nonatomic) IBOutlet UIButton *randomFactButton;

@end

