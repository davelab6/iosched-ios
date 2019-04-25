//
//  Copyright (c) 2019 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Helps check if the device and the app is ready to provide AR functionality.
 */
API_AVAILABLE(ios(11.0))
@interface GARArStatus : NSObject

@property(class, nonatomic, readonly, nonnull) GARArStatus *sharedInstance;

/**
 * Indicates if the camera permission can be granted, thus, if the developer
 * included the camera permission in the configuration file of the app.
 */
@property(readonly) BOOL cameraPermissionGrantable;

/**
 * Indicates if the camera permission has been granted in the system.
 */
@property(readonly) BOOL cameraPermissionGranted;

/**
 * Allows to know if this device supports ArKit
 */
@property(readonly) BOOL arKitReady;

@end

NS_ASSUME_NONNULL_END
