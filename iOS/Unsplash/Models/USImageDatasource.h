//
//  USImageDatasource.h
//  Unsplash
//
//  Created by . Carlin on 2/27/14.
//  Copyright (c) 2014 Carlin Creations. All rights reserved.
//
//  This class uses the actual Tumblr api to get images

#import <Foundation/Foundation.h>

@interface USImageDatasource : NSObject

    /** Cached array of images and urls */
    @property (nonatomic, strong, readonly) NSMutableArray *imageURLCache;
    @property (nonatomic, strong, readonly) NSMutableArray *imageCache;

    /** @brief Asynchronously download image and store into imageCache.
        @param index Index of */
    - (void)downloadImageAtIndex:(NSInteger)index;

    /** @brief Call to request more images from the datasource */
    - (void)fetchMoreImages;

@end
