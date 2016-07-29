/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MMCSOperationMetric;
@class NSMutableArray, NSError, NSArray, NSURL, NSString;

@interface CKDMMCSItemGroup : NSObject {

	NSMutableArray* _items;
	BOOL _complete;
	NSError* _error;
	id<MMCSOperationMetric> _metrics;
	NSArray* _tuple;

}

@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) id<MMCSOperationMetric> metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSArray * tuple;                              //@synthesize tuple=_tuple - In the implementation block
@property (nonatomic,readonly) NSURL * contentBaseURL; 
@property (nonatomic,readonly) NSString * owner; 
@property (nonatomic,readonly) NSString * requestor; 
@property (nonatomic,readonly) BOOL useAuthRequests; 
@property (assign,nonatomic) BOOL complete;                                //@synthesize complete=_complete - In the implementation block
+(id)tupleForItem:(id)arg1 ;
-(id)description;
-(NSArray *)items;
-(id<MMCSOperationMetric>)metrics;
-(void)addItem:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)complete;
-(void)setMetrics:(id<MMCSOperationMetric>)arg1 ;
-(NSError *)error;
-(id)CKPropertiesDescription;
-(BOOL)useAuthRequests;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(id)initWithTuple:(id)arg1 ;
-(NSArray *)tuple;
-(void)setTuple:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSString *)owner;
@end

