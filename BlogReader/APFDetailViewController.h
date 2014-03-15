//
//  APFDetailViewController.h
//  BlogReader
//
//  Created by Flack AP on 3/15/14.
//  Copyright (c) 2014 Flack AP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface APFDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
