//
//  YJLayoutConstraintAnimate.h
//  YJAutoLayout
//
//  HomePage:https://github.com/937447974/YJCocoa
//  YJ技术支持群:557445088
//
//  Created by 阳君 on 16/5/30.
//  Copyright © 2016年 YJ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^ YJConstraintAnimateCompletion)();

/** 约束动画携带的参数*/
@interface YJLayoutConstraintAnimate : NSObject

@property (nonatomic) CGFloat toConstant;           ///< 目标值
@property (nonatomic) CGFloat intervalConstant;     ///< 每一次变化值
@property (nonatomic) NSTimeInterval intervalDelay; ///< 动画执行时间间隔
@property (nonatomic, copy, nullable) YJConstraintAnimateCompletion completion; ///< 约束动画结束后的回调

@end

NS_ASSUME_NONNULL_END
