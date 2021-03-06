/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapServiceCategoriesTicket.h>

@protocol GEOMapServiceCategoriesTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKCategoriesTicket : NSObject <MKMapServiceCategoriesTicket> {

	id<GEOMapServiceCategoriesTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)initWithTicket:(id)arg1 ;
@end

