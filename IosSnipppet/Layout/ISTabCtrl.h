//
// Created by 叶铭 on 2018/7/13.
// Copyright (c) 2018 叶铭. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseTabCtrl.h"

@interface ISTabCtrl : BaseTabCtrl
@property (nonatomic,strong) NSArray<NSDictionary *> *dataSource;
-(void)initDataSource;
-(void)didInitialize;
@end