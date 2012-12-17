//
//  Annotation.h
//  Map
//
//  Created by Vig Sachidananda on 9/9/12.
//  Copyright (c) 2012 Vig Sachidananda. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MKAnnotation.h>

@interface Annotation : NSObject <MKAnnotation> {
    
    CLLocationCoordinate2D coordinate;
    NSString *title;
    NSString *subtitle;
    
}



@property


@end
