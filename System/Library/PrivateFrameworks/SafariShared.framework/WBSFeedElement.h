/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableString, NSString, NSDictionary;

@interface WBSFeedElement : NSObject {

	NSMutableDictionary* _children;
	NSMutableString* _content;
	NSString* _name;
	NSDictionary* _attributes;
	NSString* _namespaceURI;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * namespaceURI;                       //@synthesize namespaceURI=_namespaceURI - In the implementation block
@property (nonatomic,copy) NSString * content;                            //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * children;              //@synthesize children=_children - In the implementation block
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)content;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(id)childWithName:(id)arg1 ;
-(id)childrenWithName:(id)arg1 ;
-(NSString *)namespaceURI;
-(id)childrenWithName:(id)arg1 namespace:(id)arg2 ;
-(void)addChildElement:(id)arg1 ;
-(void)appendContent:(id)arg1 ;
-(id)textOfChildWithName:(id)arg1 ;
-(id)textOfChildWithName:(id)arg1 namespace:(id)arg2 ;
-(void)setNamespaceURI:(NSString *)arg1 ;
-(NSDictionary *)children;
@end

