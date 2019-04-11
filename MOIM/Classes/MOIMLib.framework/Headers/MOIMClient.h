//
//  MOIMClient.h
//  MOIMLib
//
//  Created by Knight Yang on 2019/4/11.
//  Copyright © 2019 Knight Yang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^callBack)(NSArray * _Nullable data);

NS_ASSUME_NONNULL_BEGIN

@interface MOIMClient : NSObject

+ (instancetype)shareInstance;

- (void)configWithUrl:(NSString *)url;

- (void)connect;

- (void)sendMessage:(NSObject *)message;

- (void)receiveMessage:(callBack)messageBlock;

- (void)disconnect;

@end

NS_ASSUME_NONNULL_END
