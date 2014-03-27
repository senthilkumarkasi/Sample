//
//  DetailViewController.h
//  Sample
//
//  Created by Mobile CoE on 27/03/14.
//  Copyright (c) 2014 Mobilecoe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
