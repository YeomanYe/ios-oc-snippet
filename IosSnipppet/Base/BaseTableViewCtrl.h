//
//  BaseTableViewCtrl.h
//  iOS-layout-oc
//
//  Created by 叶铭 on 2018/6/30.
//  Copyright © 2018年 叶铭. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewCtrl.h"

@interface BaseTableViewCtrl : UITableViewController
@end

@interface BaseTableViewCtrl(UISubclassingHooks)
- (void)initDataSource;
- (void)didSelectItem:(NSString *)title;

@end
