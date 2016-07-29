/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPArtistCollection.h>
#import <SAObjects/SASyncWrap.h>

@class NSNumber, NSString, NSURL;

@interface SAMPAceMediaEntityWrapsAceArtistCollectionWrap : SAMPArtistCollection <SASyncWrap>

@property (nonatomic,copy) NSNumber * generation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)aceMediaEntityWrapsAceArtistCollectionWrap;
+(id)aceMediaEntityWrapsAceArtistCollectionWrapWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setGeneration:(NSNumber *)arg1 ;
-(NSNumber *)generation;
-(id)encodedClassName;
@end

