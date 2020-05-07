//
//  AppDelegate.h
//  NSPersistentDocument_test
//
//  Created by Gregory Casamento on 5/7/20.
//  Copyright © 2020 Open Logic Corporation. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;


@end

