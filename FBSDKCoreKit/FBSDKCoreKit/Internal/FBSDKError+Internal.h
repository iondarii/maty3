/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import "FBSDKError.h"

@protocol FBSDKErrorReporting;

NS_ASSUME_NONNULL_BEGIN

@interface FBSDKError (Internal)

+ (void)configureWithErrorReporter:(id<FBSDKErrorReporting>)errorReporter;

@end

NS_ASSUME_NONNULL_END
