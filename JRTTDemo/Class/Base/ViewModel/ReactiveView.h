//
//  ReactiveView.h
//  JRTTDemo
//
//  Created by 赵 on 2018/1/26.
//  Copyright © 2018年 袁书辉. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ReactiveView <NSObject>
-(void)bindData:(id)data indexPath:(NSIndexPath *)indexPath;


@end
