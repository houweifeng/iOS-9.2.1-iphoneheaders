/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VKModelObject;

@interface VKModelObject_DrawPass : NSObject {

	unsigned char _pass;
	VKModelObject* _submodel;

}

@property (assign,nonatomic) unsigned char pass;                    //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) VKModelObject * submodel;              //@synthesize submodel=_submodel - In the implementation block
-(void)dealloc;
-(id)description;
-(VKModelObject *)submodel;
-(void)setSubmodel:(VKModelObject *)arg1 ;
-(unsigned char)pass;
-(void)setPass:(unsigned char)arg1 ;
@end

