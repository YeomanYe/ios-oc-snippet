//
//  ISListViewCtrl.h
//  iOS-layout-oc
//
//  Created by 叶铭 on 2018/7/1.
//  Copyright © 2018年 叶铭. All rights reserved.
//

#import "BaseTableViewCtrl.h"

@interface ISListViewCtrl : BaseTableViewCtrl
@property (nonatomic) UITableViewCellStyle cellStyle;
@property (nonatomic, strong) NSArray<NSDictionary *> *dataSource;
- (void)initDataSource;
-(void)didSelectItem:(NSString *)title index:(int)index;
@end
