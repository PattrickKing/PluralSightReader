//
//  PWKMasterViewController.h
//  PluralSightServiceReader
//
//  Created by Patrick King on 8/9/13.
//  Copyright (c) 2013 Patrick King. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PWKDetailViewController;

#import <CoreData/CoreData.h>

@interface PWKMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) PWKDetailViewController *detailViewController;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
