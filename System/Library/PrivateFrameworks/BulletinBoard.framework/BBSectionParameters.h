/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBUniquableObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLock, NSString, BBSectionSubtypeParameters, NSMutableDictionary, BBSectionIcon;

@interface BBSectionParameters : NSObject <BBUniquableObject, NSSecureCoding> {

	NSLock* _lock;
	NSString* _uniqueIdentifier;
	BOOL _showsSubtitle;
	BOOL _usesVariableLayout;
	BOOL _orderSectionUsingRecencyDate;
	BOOL _showsDateInFloatingLockScreenAlert;
	BOOL _displaysCriticalBulletins;
	unsigned long long _messageNumberOfLines;
	BBSectionSubtypeParameters* _defaultSubtypeParameters;
	NSMutableDictionary* _allSubtypeParameters;
	NSString* _displayName;
	BBSectionIcon* _icon;

}

@property (assign,nonatomic) BOOL showsSubtitle;                                                 //@synthesize showsSubtitle=_showsSubtitle - In the implementation block
@property (assign,nonatomic) BOOL usesVariableLayout;                                            //@synthesize usesVariableLayout=_usesVariableLayout - In the implementation block
@property (assign,nonatomic) unsigned long long messageNumberOfLines;                            //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL orderSectionUsingRecencyDate;                                  //@synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate - In the implementation block
@property (assign,nonatomic) BOOL showsDateInFloatingLockScreenAlert;                            //@synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) BBSectionIcon * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL displaysCriticalBulletins;                                     //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,retain) BBSectionSubtypeParameters * defaultSubtypeParameters;              //@synthesize defaultSubtypeParameters=_defaultSubtypeParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allSubtypeParameters;                         //@synthesize allSubtypeParameters=_allSubtypeParameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)addSectionParametersToCache:(id)arg1 ;
+(void)removeSectionParametersFromCache:(id)arg1 ;
+(id)copyCachedSectionParametersWithIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(BBSectionIcon *)icon;
-(NSString *)displayName;
-(id)uniqueIdentifier;
-(BOOL)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(BOOL)arg1 ;
-(void)setDefaultSubtypeParameters:(BBSectionSubtypeParameters *)arg1 ;
-(void)setAllSubtypeParameters:(NSMutableDictionary *)arg1 ;
-(void)setShowsSubtitle:(BOOL)arg1 ;
-(void)setUsesVariableLayout:(BOOL)arg1 ;
-(void)setOrderSectionUsingRecencyDate:(BOOL)arg1 ;
-(void)setShowsDateInFloatingLockScreenAlert:(BOOL)arg1 ;
-(BBSectionSubtypeParameters *)defaultSubtypeParameters;
-(NSMutableDictionary *)allSubtypeParameters;
-(BOOL)showsSubtitle;
-(unsigned long long)messageNumberOfLines;
-(BOOL)usesVariableLayout;
-(BOOL)orderSectionUsingRecencyDate;
-(BOOL)showsDateInFloatingLockScreenAlert;
-(id)parametersForSubtype:(long long)arg1 ;
-(id)allSubtypes;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

