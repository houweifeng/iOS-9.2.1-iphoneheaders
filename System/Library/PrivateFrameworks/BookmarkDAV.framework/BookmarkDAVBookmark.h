/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreDAVLeafDataPayload.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSURL, NSData, NSString, NSArray, NSMutableString, NSDictionary, CoreDAVErrorItem;

@interface BookmarkDAVBookmark : NSObject <CoreDAVLeafDataPayload, NSXMLParserDelegate> {

	NSURL* _bookmarkURL;
	NSURL* _serverID;
	NSString* _name;
	NSString* _syncKey;
	NSMutableString* _appleAttributeString;
	NSDictionary* _appleAttributes;
	int _parseState;
	int _ignoreLevel;
	CoreDAVErrorItem* _bulkUploadErrorItem;

}

@property (nonatomic,retain,readonly) NSURL * bookmarkURL;                         //@synthesize bookmarkURL=_bookmarkURL - In the implementation block
@property (nonatomic,retain,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * appleAttributes;              //@synthesize appleAttributes=_appleAttributes - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * bulkUploadErrorItem;               //@synthesize bulkUploadErrorItem=_bulkUploadErrorItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * serverID;                                     //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey;                                 //@synthesize syncKey=_syncKey - In the implementation block
@property (nonatomic,readonly) NSArray * childrenOrder; 
-(void)dealloc;
-(NSString *)name;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(NSString *)syncKey;
-(NSData *)dataPayload;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(void)setPropertiesFromXBEL:(id)arg1 ;
-(id)initWithBookmarkURL:(id)arg1 serverID:(id)arg2 name:(id)arg3 syncKey:(id)arg4 appleAttributes:(id)arg5 ;
-(NSURL *)bookmarkURL;
-(NSDictionary *)appleAttributes;
-(CoreDAVErrorItem *)bulkUploadErrorItem;
-(void)setBulkUploadErrorItem:(CoreDAVErrorItem *)arg1 ;
-(NSURL *)serverID;
-(void)setServerID:(NSURL *)arg1 ;
@end

