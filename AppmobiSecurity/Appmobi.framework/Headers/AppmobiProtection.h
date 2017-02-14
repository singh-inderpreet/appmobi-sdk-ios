//
//  AppmobiProtection.h
//  Appmobi
//
//  Created by iOS on 02/02/17.
//  Copyright © 2017 iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppmobiProtection : NSObject

-(void) checkProtectionStatus;
-(void) removeCustomAction:(NSString *)eventName;

@end
