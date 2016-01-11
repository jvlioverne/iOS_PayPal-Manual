//
//  ViewController.h
//  PayPal-Manual
//
//  Created by Benjas on 10/01/16.
//  Copyright © 2016 Benjas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"


@interface Start : UIViewController<PayPalPaymentDelegate>

- (IBAction)btnPayPressed:(id)sender;

@end

