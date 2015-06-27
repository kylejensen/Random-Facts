//
//  FactBook.h
//  RandomFacts
//
//  Created by Kyle on 6/18/15.
//  Copyright (c) 2015 babbleFire. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
