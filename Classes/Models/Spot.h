//
//  Spot.h
//  Gowalla-Basic
//
//  Created by Mattt Thompson on 10/06/29.
//  Copyright 2010 Mattt Thompson. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "AFObject.h"


@interface Spot : AFObject <MKAnnotation> {
	NSString * name;
	NSURL * imageURL;
	
	CLLocation * location;
	NSNumber * radius;
	
	NSArray * checkIns;
}

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSURL * imageURL;

@property (nonatomic, retain) CLLocation * location;
@property (nonatomic, retain) NSNumber * radius;

@property (nonatomic, retain) NSArray * checkIns;

+ (BOOL)canCheckInAtSpot:(Spot *)spot fromLocation:(CLLocation *)someLocation;

@end
