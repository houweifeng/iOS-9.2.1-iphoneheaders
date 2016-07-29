/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL;

@interface CAMLWriter : NSObject {

	CAMLWriterPriv* _priv;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id delegate; 
+(id)writerWithData:(id)arg1 ;
-(void)setElementAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)beginPropertyElement:(id)arg1 ;
-(void)beginElement:(unsigned)arg1 ;
-(void)setElementContent:(id)arg1 ;
-(id)URLStringForResource:(id)arg1 ;
-(void)encodeObject:(id)arg1 conditionally:(BOOL)arg2 ;
-(void)_writeElementTree:(CAMLWriterElement*)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(void)endElement;
@end

