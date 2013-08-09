//
//  PWKDetailViewController.h
//  PluralSightServiceReader
//
//  Created by Patrick King on 8/9/13.
//  Copyright (c) 2013 Patrick King. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PWKDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
