/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSArray;

@interface TSAAnnotationCache : TSPObject {

	NSArray* _annotations;

}

@property (nonatomic,copy) NSArray * annotations; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)documentDidLoad;
-(void)saveToArchive:(AnnotationCacheArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const AnnotationCacheArchive*)arg1 unarchiver:(id)arg2 ;
-(void)documentWillUnload;
-(void)dealloc;
-(id)init;
-(NSArray *)annotations;
-(void)setAnnotations:(NSArray *)arg1 ;
@end

