/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageStore.h>

@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore {

	NSData* _data;
	Class _messageClass;
	NSString* _storagePath;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)message;
-(id)storePath;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)_deleteCachedBodyForMessage:(id)arg1 ;
-(id)mailboxUid;
-(void)writeUpdatedMessageDataToDisk;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(void)deleteBodyDataForMessage:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)setStoragePath:(id)arg1 ;
-(id)account;
-(void)setMessageClass:(Class)arg1 ;
-(id)storagePath;
@end

