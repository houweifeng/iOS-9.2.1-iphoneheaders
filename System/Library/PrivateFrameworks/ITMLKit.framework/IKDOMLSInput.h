/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMLSInput.h>

@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput> {

	BOOL _certifiedText;
	id _byteStream;
	NSString* _stringData;
	NSString* _encoding;

}

@property (nonatomic,retain) id byteStream;                      //@synthesize byteStream=_byteStream - In the implementation block
@property (nonatomic,retain) NSString * stringData;              //@synthesize stringData=_stringData - In the implementation block
@property (nonatomic,retain) NSString * encoding;                //@synthesize encoding=_encoding - In the implementation block
@property (assign,nonatomic) BOOL certifiedText;                 //@synthesize certifiedText=_certifiedText - In the implementation block
-(void)setEncoding:(NSString *)arg1 ;
-(NSString *)encoding;
-(NSString *)stringData;
-(id)byteStream;
-(void)setStringData:(NSString *)arg1 ;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1 ;
-(void)setByteStream:(id)arg1 ;
@end

