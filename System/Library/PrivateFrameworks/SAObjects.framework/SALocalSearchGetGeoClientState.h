/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAGetSingleClientState.h>

@class SALocalSearchGeoClientState, NSString, NSArray;

@interface SALocalSearchGetGeoClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (nonatomic,retain) SALocalSearchGeoClientState * clientState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)getGeoClientState;
+(id)getGeoClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(SALocalSearchGeoClientState *)clientState;
-(void)setClientState:(SALocalSearchGeoClientState *)arg1 ;
@end

