//
//  NSString+PPTextField.h
//  PPDemos
//
//  Created by ╰莪呮想好好宠Nǐつ on 2017/3/19.
//  Copyright © 2017年 PPAbner. All rights reserved.
//

typedef NS_ENUM(NSInteger,PPTextFieldStringType) {
    PPTextFieldStringTypeNumber,         //数字
    PPTextFieldStringTypeLetter,         //字母
    PPTextFieldStringTypeChinese         //汉字
};
#import <Foundation/Foundation.h>

@interface NSString (PPTextField)


/**
 某个字符串是不是数字、字母、汉字。
 */
-(BOOL)pp_is:(PPTextFieldStringType)stringType;

/**
 获取字符串长度 【一个汉字算2个字符串，一个英文算1个字符串】
 */
-(int)pp_getStrLengthWithCh2En1;


/**
 移除字符串中除exceptLetters外的所有特殊字符
 */
-(NSString *)pp_removeSpecialLettersExceptLetters:(NSArray<NSString *> *)exceptLetters;

@end
