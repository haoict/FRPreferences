//
//  FRPSwitchCell.h
//  FRPreferences
//
//  Created by Fouad Raheb on 7/2/15.
//  Copyright (c) 2015 F0u4d. All rights reserved.
//

#import "FRPCell.h"

@interface FRPTextFieldCell : FRPCell <UITextFieldDelegate>
+ (instancetype)cellWithTitle:(NSString *)title setting:(FRPSettings *)setting placeholder:(NSString *)placeholder postNotification:(NSString *)notification changeBlock:(FRPValueChanged)block;
@end
