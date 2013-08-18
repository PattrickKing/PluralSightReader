//
//  PWKCourse.m
//  PluralSightServiceReader
//
//  Created by Patrick King on 8/9/13.
//  Copyright (c) 2013 Patrick King. All rights reserved.
//

#import "PWKCourse.h"

@implementation PWKCourse

- (NSString *) description {
    
    return [NSString stringWithFormat:@"%@\n%@\n%@", self.title, self.category, self.shortDesc];
}

@end
