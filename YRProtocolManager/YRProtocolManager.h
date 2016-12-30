//
//  YRProtocolManager.h
//  YRProtocolManager
//
//  Created by 严林红 on 16/12/29.
//  Copyright © 2016年 严林红. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YRProtocolManager : NSObject

+ (void)registServiceProvide:(id)provide forProtocol:(Protocol*)protocol;

+ (id)serviceProvideForProtocol:(Protocol *)protocol;

@end
