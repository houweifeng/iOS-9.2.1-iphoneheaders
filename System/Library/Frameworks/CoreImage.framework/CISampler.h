/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIFilterShape;

@interface CISampler : NSObject <NSCopying> {

	void* _priv;

}

@property (readonly) CIFilterShape * definition; 
@property (readonly) CGRect extent; 
+(id)samplerWithImage:(id)arg1 ;
+(id)samplerWithImage:(id)arg1 keysAndValues:(id)arg2 ;
+(id)samplerWithImage:(id)arg1 options:(id)arg2 ;
-(void*)_internalRepresentation;
-(id)_initWithImage:(id)arg1 key0:(id)arg2 vargs:(char*)arg3 ;
-(id)initWithImage:(id)arg1 keysAndValues:(id)arg2 ;
-(id)opaqueShape;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)extent;
-(id)initWithImage:(id)arg1 options:(id)arg2 ;
-(CIFilterShape *)definition;
-(id)wrapMode;
-(void)finalize;
-(void*)colorSpace;
@end
