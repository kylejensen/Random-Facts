//
//  ViewController.m
//  RandomFacts
//
//  Created by Kyle on 6/16/15.
//  Copyright (c) 2015 babbleFire. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import"ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.factBook = [[FactBook alloc] init];
    self.colorWheel = [[ColorWheel alloc] init];
    
    UIColor *randomColor = [self.colorWheel randomColor];
    self.view.backgroundColor = randomColor;
    self.randomFactButton.tintColor = randomColor;
    self.randomFactLabel.text = [self.factBook randomFact];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showRandomFact {
    
    UIColor *randomColor = [self.colorWheel randomColor];
    self.view.backgroundColor = randomColor;
    self.randomFactButton.tintColor = randomColor;
    self.randomFactLabel.text = [self.factBook randomFact];
}

@end
