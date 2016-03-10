//
//  DetailViewController.h
//  JSONTutorial
//
//  Created by Frank Bara on 8/28/15.
//  Copyright © 2015 BaraLabs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

