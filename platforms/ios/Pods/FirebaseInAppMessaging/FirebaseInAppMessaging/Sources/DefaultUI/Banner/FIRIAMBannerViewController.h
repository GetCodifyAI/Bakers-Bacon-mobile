/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "FirebaseInAppMessaging/Sources/DefaultUI/FIRIAMBaseRenderingViewController.h"

@class FIRInAppMessagingBannerDisplay;
@class FIRIAMBaseRenderingViewController;
@protocol FIRIAMTimeFetcher;
@protocol FIRInAppMessagingDisplayDelegate;

NS_ASSUME_NONNULL_BEGIN

NS_EXTENSION_UNAVAILABLE_IOS("Firebase In App Messaging is not supported for iOS extensions.")
@interface FIRIAMBannerViewController : FIRIAMBaseRenderingViewController
+ (FIRIAMBannerViewController *)
    instantiateViewControllerWithResourceBundle:(NSBundle *)resourceBundle
                                 displayMessage:(FIRInAppMessagingBannerDisplay *)bannerMessage
                                displayDelegate:
                                    (id<FIRInAppMessagingDisplayDelegate>)displayDelegate
                                    timeFetcher:(id<FIRIAMTimeFetcher>)timeFetcher;
@end
NS_ASSUME_NONNULL_END
