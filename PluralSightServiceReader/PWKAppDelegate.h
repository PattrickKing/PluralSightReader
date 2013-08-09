//
//  PWKAppDelegate.h
//  PluralSightServiceReader
//
//  Created by Patrick King on 8/9/13.
//  Copyright (c) 2013 Patrick King. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PWKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
