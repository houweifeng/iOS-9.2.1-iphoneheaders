/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSArray, WBSParsecImageRepresentation, NSURL;

@interface WBSParsecActionButton : WBSParsecModel {

	BOOL _forStreamingResult;
	BOOL _overlay;
	NSString* _type;
	NSString* _label;
	NSString* _labelAlignment;
	NSString* _itunesLabel;
	NSString* _offerType;
	NSString* _completion;
	NSString* _itunesCompletion;
	NSString* _mediaKind;
	NSArray* _itunesContentIdentifiers;
	WBSParsecImageRepresentation* _baseIcon;
	WBSParsecImageRepresentation* _icon;
	NSString* _punchoutAppName;
	NSString* _punchoutAppBundleIdentifier;
	NSURL* _punchoutAppInstallURL;
	NSURL* _punchoutURL;

}

@property (nonatomic,copy,readonly) NSString * type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * labelAlignment;                                     //@synthesize labelAlignment=_labelAlignment - In the implementation block
@property (nonatomic,copy,readonly) NSString * itunesLabel;                                        //@synthesize itunesLabel=_itunesLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * offerType;                                          //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,copy,readonly) NSString * completion;                                         //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSString * itunesCompletion;                                   //@synthesize itunesCompletion=_itunesCompletion - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaKind;                                          //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itunesContentIdentifiers;                            //@synthesize itunesContentIdentifiers=_itunesContentIdentifiers - In the implementation block
@property (getter=isForStreamingResult,nonatomic,readonly) BOOL forStreamingResult;                //@synthesize forStreamingResult=_forStreamingResult - In the implementation block
@property (getter=isForAppleMusicResult,nonatomic,readonly) BOOL forAppleMusicResult; 
@property (getter=isOverlay,nonatomic,readonly) BOOL overlay;                                      //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * baseIcon;                            //@synthesize baseIcon=_baseIcon - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * icon;                                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutAppName;                                    //@synthesize punchoutAppName=_punchoutAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutAppBundleIdentifier;                        //@synthesize punchoutAppBundleIdentifier=_punchoutAppBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * punchoutAppInstallURL;                                      //@synthesize punchoutAppInstallURL=_punchoutAppInstallURL - In the implementation block
@property (nonatomic,readonly) NSURL * punchoutURL;                                                //@synthesize punchoutURL=_punchoutURL - In the implementation block
+(id)schema;
-(NSString *)type;
-(NSString *)completion;
-(NSString *)label;
-(WBSParsecImageRepresentation *)icon;
-(NSURL *)punchoutURL;
-(NSString *)mediaKind;
-(id)initWithDictionary:(id)arg1 mediaKind:(id)arg2 ;
-(BOOL)isForAppleMusicResult;
-(NSString *)itunesLabel;
-(NSString *)itunesCompletion;
-(NSArray *)itunesContentIdentifiers;
-(BOOL)isForStreamingResult;
-(WBSParsecImageRepresentation *)baseIcon;
-(NSString *)punchoutAppName;
-(NSString *)punchoutAppBundleIdentifier;
-(NSURL *)punchoutAppInstallURL;
-(NSString *)offerType;
-(NSString *)labelAlignment;
-(BOOL)isOverlay;
@end

