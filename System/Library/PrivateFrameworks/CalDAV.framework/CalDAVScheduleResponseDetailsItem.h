/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, CoreDAVErrorItem, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem {

	CoreDAVItemWithHrefChildItem* _recipientHREF;
	CoreDAVLeafItem* _requestStatus;
	ICSDocument* _calendarData;
	CoreDAVErrorItem* _topLevelErrorItem;
	NSString* _responseDescription;

}

@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * recipientHREF;              //@synthesize recipientHREF=_recipientHREF - In the implementation block
@property (nonatomic,readonly) NSString * recipientString; 
@property (nonatomic,retain) CoreDAVLeafItem * requestStatus;                           //@synthesize requestStatus=_requestStatus - In the implementation block
@property (nonatomic,retain) ICSDocument * calendarData;                                //@synthesize calendarData=_calendarData - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * topLevelErrorItem;                      //@synthesize topLevelErrorItem=_topLevelErrorItem - In the implementation block
@property (nonatomic,retain) NSString * responseDescription;                            //@synthesize responseDescription=_responseDescription - In the implementation block
-(id)description;
-(id)copyParseRules;
-(CoreDAVItemWithHrefChildItem *)recipientHREF;
-(CoreDAVLeafItem *)requestStatus;
-(ICSDocument *)calendarData;
-(void)setCalendarData:(ICSDocument *)arg1 ;
-(void)setRecipientHREF:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setRequestStatus:(CoreDAVLeafItem *)arg1 ;
-(void)_setCalendarDataWithLeafItem:(id)arg1 ;
-(void)setTopLevelErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)setResponseDescription:(NSString *)arg1 ;
-(NSString *)recipientString;
-(CoreDAVErrorItem *)topLevelErrorItem;
-(NSString *)responseDescription;
@end

