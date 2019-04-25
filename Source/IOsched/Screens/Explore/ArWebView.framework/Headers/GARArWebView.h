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
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Adds AR functionality (via ARKit) to a system WKWebView.
 */
API_AVAILABLE(ios(11.0))
@interface GARArWebView : UIView<WKNavigationDelegate>

// can access the webView as a readonly property
@property(readonly) WKWebView *webView;

/* Use initWithDecoder or initWithFrame instead. */
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype) new NS_UNAVAILABLE;

/**
 * Initializes and returns an ArWebView initialized from data in a given unarchiver. This is the
 * constructor called by using a storyboard.
 *
 * @param decoder An unarchiver object.
 * @return a newly allocated ArWebView.
 */
- (instancetype)initWithCoder:(NSCoder *)decoder;

/**
 * Initializes and returns a newly allocated ArWebView with the specified frame rectangle.
 *
 * @param frame The frame rectangle for the view, measured in points. The origin of the frame is
 * relative to the superview in which you plan to add it.
 * @return a newly allocated ArWebView.
 */
- (instancetype)initWithFrame:(CGRect)frame;

/**
 * Constructs the ArWebView programmatically to a specific frame with a particular webView to
 * use for the web rendering.
 *
 * @param frame The frame rectangle for the view, measured in points. The origin of the frame is
 * relative to the superview in which you plan to add it.
 * @param webView webview that will navigate and render for the ArWebView
 * @return a newly constructed ArWebView
 */
- (instancetype)initWithFrame:(CGRect)frame webView:(WKWebView *)webView;

/**
 * Connects to a given URL by initiating an asynchronous client request.
 */
- (void)loadRequest:(NSURLRequest *)request;

@end

NS_ASSUME_NONNULL_END
