/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IKDOMImplementation, IKDOMElement, NSString, IKJSNavigationDocument;


@protocol IKJSDOMDocument <JSExport>
@property (nonatomic,__weak,readonly) IKDOMImplementation * implementation; 
@property (nonatomic,retain,readonly) IKDOMElement * documentElement; 
@property (nonatomic,retain,readonly) NSString * inputEncoding; 
@property (nonatomic,retain,readonly) NSString * xmlEncoding; 
@property (assign,nonatomic) BOOL xmlStandalone; 
@property (nonatomic,retain) NSString * xmlVersion; 
@property (assign,nonatomic) BOOL strictErrorChecking; 
@property (nonatomic,retain) NSString * documentURI; 
@property (nonatomic,__weak,readonly) IKJSNavigationDocument * navigationDocument; 
@required
-(IKDOMImplementation *)implementation;
-(NSString *)inputEncoding;
-(NSString *)xmlEncoding;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(id)arg1;
-(BOOL)xmlStandalone;
-(void)setXmlStandalone:(BOOL)arg1;
-(NSString *)documentURI;
-(void)setDocumentURI:(id)arg1;
-(id)createComment:(id)arg1;
-(id)createCDATASection:(id)arg1;
-(id)adoptNode:(id)arg1;
-(void)replace:(id)arg1;
-(id)createElement:(id)arg1;
-(IKDOMElement *)documentElement;
-(id)getElementsByTagName:(id)arg1;
-(void)setNeedsUpdate;
-(id)createTextNode:(id)arg1;
-(id)createDocumentFragment;
-(id)getElementById:(id)arg1;
-(id)snapshotImpressions;
-(id)recordedImpressions;
-(void)runTest:(id)arg1 :(id)arg2;
-(BOOL)strictErrorChecking;
-(void)setStrictErrorChecking:(BOOL)arg1;
-(IKJSNavigationDocument *)navigationDocument;
-(void)scrollToTop;

@end

