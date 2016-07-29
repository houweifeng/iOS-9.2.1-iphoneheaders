/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPContainerPersisterDelegate;
@interface MSPContainerPersister : NSObject {

	id<MSPContainerPersisterDelegate> _delegate;
	long long _duplicatesPolicy;

}

@property (assign,nonatomic,__weak) id<MSPContainerPersisterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long duplicatesPolicy;                                   //@synthesize duplicatesPolicy=_duplicatesPolicy - In the implementation block
-(void)setDelegate:(id<MSPContainerPersisterDelegate>)arg1 ;
-(id<MSPContainerPersisterDelegate>)delegate;
-(void)fetchContentsWithCompletion:(/*^block*/id)arg1 ;
-(void)commitEditedContents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)duplicatesPolicy;
@end

