/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UINib : NSObject {

	id storage;

}
+(id)nibWithNibName:(id)arg1 bundle:(id)arg2 ;
+(id)nibWithData:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)instantiateWithOwner:(id)arg1 options:(id)arg2 ;
-(id)initWithNibName:(id)arg1 directory:(id)arg2 bundle:(id)arg3 ;
-(id)identifierForStringsFile;
-(void)setIdentifierForStringsFile:(id)arg1 ;
-(BOOL)instantiatingForSimulator;
-(void)setInstantiatingForSimulator:(BOOL)arg1 ;
-(BOOL)captureImplicitLoadingContextOnDecode;
-(void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(void)_registerForMemoryWarningIfNeeded;
-(id)nibDataForPath:(id)arg1 ;
-(id)initWithData:(id)arg1 bundle:(id)arg2 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)effectiveBundle;
-(id)bundleResourcePath;
-(id)lazyArchiveData;
-(id)unarchiverForInstantiatingReturningError:(id*)arg1 ;
-(BOOL)captureEnclosingNIBBundleOnDecode;
-(void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)arg1 ;
@end

