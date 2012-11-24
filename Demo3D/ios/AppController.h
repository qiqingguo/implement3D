//
//  Demo3DAppController.h
//  Demo3D
//
//  Created by James Hui on 13/08/12.
//  Copyright Khors 2012. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController    *viewController;
}

@end

