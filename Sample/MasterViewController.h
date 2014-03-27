//
//  MasterViewController.h
//  Sample
//
//  Created by Mobile CoE on 27/03/14.
//  Copyright (c) 2014 Mobilecoe. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
