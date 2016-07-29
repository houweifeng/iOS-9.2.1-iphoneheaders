/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKStyleableElement.h>

@protocol IKStyleableElement;
@class IKAppDocument, IKViewElementStyleComposer, NSString, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, SKUIEntityProviderListViewElement, IKViewElementStyle;

@interface IKViewElement : NSObject <IKStyleableElement> {

	BOOL _disabled;
	BOOL _impressionable;
	BOOL _didUpdateAutoHighlightIdentifier;
	IKAppDocument* _appDocument;
	IKViewElementStyleComposer* _styleComposer;
	id<IKStyleableElement> _parentStyleableElement;
	NSString* _elementID;
	unsigned long long _elementType;
	NSString* _elementName;
	IKViewElement* _parent;
	NSArray* _children;
	NSDictionary* _attributes;
	NSString* _accessibilityText;
	NSString* _autoHighlightIdentifier;
	unsigned long long _updateType;
	NSArray* _features;
	NSString* _itmlID;
	NSMutableDictionary* _metadataDict;
	NSMutableSet* _activeSingularEvents;

}

@property (nonatomic,readonly) SKUIEntityProviderListViewElement * entityProviderList; 
@property (nonatomic,copy,readonly) NSString * elementID;                                           //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,readonly) unsigned long long elementType;                                      //@synthesize elementType=_elementType - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementName;                                         //@synthesize elementName=_elementName - In the implementation block
@property (assign,nonatomic,__weak) IKViewElement * parent;                                         //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSArray * children;                                                    //@synthesize children=_children - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * attributes;                                    //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyle * style; 
@property (nonatomic,copy,readonly) NSString * accessibilityText;                                   //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (nonatomic,copy) NSString * autoHighlightIdentifier;                                      //@synthesize autoHighlightIdentifier=_autoHighlightIdentifier - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                       //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isImpressionable,nonatomic) BOOL impressionable;                           //@synthesize impressionable=_impressionable - In the implementation block
@property (assign,nonatomic) unsigned long long updateType;                                         //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * features;                                             //@synthesize features=_features - In the implementation block
@property (assign,nonatomic,__weak) IKAppDocument * appDocument;                                    //@synthesize appDocument=_appDocument - In the implementation block
@property (nonatomic,retain,readonly) NSString * itmlID;                                            //@synthesize itmlID=_itmlID - In the implementation block
@property (assign,nonatomic) BOOL didUpdateAutoHighlightIdentifier;                                 //@synthesize didUpdateAutoHighlightIdentifier=_didUpdateAutoHighlightIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadataDict;                                    //@synthesize metadataDict=_metadataDict - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeSingularEvents;                                   //@synthesize activeSingularEvents=_activeSingularEvents - In the implementation block
@property (nonatomic,__weak,readonly) id<IKStyleableElement> parentStyleableElement;                //@synthesize parentStyleableElement=_parentStyleableElement - In the implementation block
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer;                            //@synthesize styleComposer=_styleComposer - In the implementation block
+(unsigned long long)evaluateElementUpdateTypeAndReset:(id)arg1 ;
+(BOOL)shouldParseChildDOMElement:(id)arg1 ;
+(id)supportedFeatures;
+(BOOL)shouldParseChildDOMElements;
-(SKUIEntityProviderListViewElement *)entityProviderList;
-(void)dealloc;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(IKViewElementStyle *)style;
-(void)setDisabled:(BOOL)arg1 ;
-(NSDictionary *)attributes;
-(NSString *)accessibilityText;
-(void)setChildren:(NSArray *)arg1 ;
-(id)childTextElementWithStyle:(unsigned long long)arg1 ;
-(id)childElementWithType:(unsigned long long)arg1 ;
-(id)childElementsWithType:(unsigned long long)arg1 ;
-(void)setAppDocument:(IKAppDocument *)arg1 ;
-(id<IKStyleableElement>)parentStyleableElement;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(IKViewElementStyleComposer *)arg1 ;
-(id)childImageElementWithType:(unsigned long long)arg1 ;
-(BOOL)didUpdateAutoHighlightIdentifier;
-(void)setDidUpdateAutoHighlightIdentifier:(BOOL)arg1 ;
-(void)setAutoHighlightIdentifier:(NSString *)arg1 ;
-(void)_reorderAndUpdateChildrenWithElements:(id)arg1 ;
-(void)_applyUpdatesToChildrenWithElements:(id)arg1 ;
-(void)_resetUpdates;
-(void)_setAppDocument:(id)arg1 ;
-(NSMutableDictionary *)metadataDict;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)activeSingularEvents;
-(void)setActiveSingularEvents:(NSMutableSet *)arg1 ;
-(void)_appDocumentDidMarkStylesDirty:(id)arg1 ;
-(void)resetProperty:(unsigned long long)arg1 ;
-(void)setImpressionable:(BOOL)arg1 ;
-(unsigned long long)elementType;
-(void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(unsigned long long)updateType;
-(NSString *)itmlID;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)elementID;
-(NSArray *)features;
-(IKAppDocument *)appDocument;
-(NSString *)elementName;
-(BOOL)isDisabled;
-(void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(BOOL)arg3 isCancelable:(BOOL)arg4 extraInfo:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(BOOL)isImpressionable;
-(NSString *)autoHighlightIdentifier;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(IKViewElement *)parent;
-(NSArray *)children;
-(void)setParent:(IKViewElement *)arg1 ;
@end

