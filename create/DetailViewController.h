//
//  DetailViewController.h
//  create
//
//  Created by akimiya on 2015/04/11.
//  Copyright (c) 2015年 akimiya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

