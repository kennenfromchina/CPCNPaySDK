//
//  CPCNPayEncodeUtil.h
//  CPCNPaySDK
//
//  Created by zj_baiyijing on 2019/12/5.
//  Copyright © 2019 cpcn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CPCNPayEncodeUtil : NSObject
+ (NSString *)orderInfoEncoded:(NSDictionary *)dict;
@end

NS_ASSUME_NONNULL_END
