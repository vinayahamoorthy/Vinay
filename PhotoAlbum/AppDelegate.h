//
//  AppDelegate.h
//  PhotoAlbum
//
//  Created by Gavs on 05/06/14.
//  Copyright (c) 2014 GAVS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AlbumView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property(nonatomic, strong)AlbumView *viewController;
@property (strong, nonatomic) UIWindow *window;

@end
