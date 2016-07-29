/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSArray, SUPurchaseManager;

@interface SUPurchaseBatch : NSObject {

	NSArray* _continuations;
	NSArray* _errors;
	NSArray* _items;
	NSArray* _offers;
	SUPurchaseManager* _purchaseManager;
	BOOL _shouldSuspendWhenFinished;
	NSArray* _validPurchases;

}

@property (nonatomic,readonly) NSArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * offers;                                      //@synthesize offers=_offers - In the implementation block
@property (assign,nonatomic,__weak) SUPurchaseManager * purchaseManager;              //@synthesize purchaseManager=_purchaseManager - In the implementation block
@property (nonatomic,retain) NSArray * continuations;                                 //@synthesize continuations=_continuations - In the implementation block
@property (nonatomic,retain) NSArray * errors;                                        //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSArray * validPurchases;                                //@synthesize validPurchases=_validPurchases - In the implementation block
-(void)dealloc;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(NSArray *)errors;
-(NSArray *)continuations;
-(NSArray *)validPurchases;
-(id)initWithItems:(id)arg1 offers:(id)arg2 ;
-(SUPurchaseManager *)purchaseManager;
-(void)setPurchasesAndContinuationsFromPurchases:(id)arg1 ;
-(void)_validateItems;
-(id)copyContinuationsForPurchases:(id)arg1 ;
-(void)setContinuations:(NSArray *)arg1 ;
-(void)setValidPurchases:(NSArray *)arg1 ;
-(/*function pointer*/void*)errorEqualCallback;
-(id)_copyModifiedErrorsFromDictionary:(CFDictionaryRef)arg1 ;
-(id)copyFilteredItemsFromItems:(id)arg1 ;
-(id)_copyValidPurchasesForItems:(id)arg1 ;
-(void)setDocumentTargetIdentifier:(id)arg1 ;
-(id)everythingFailedErrorForError:(id)arg1 ;
-(id)mergedErrorForError:(id)arg1 withCount:(long long)arg2 ;
-(id)_copyUniqueErrorsFromErrors:(id)arg1 ;
-(void)setPurchaseManager:(SUPurchaseManager *)arg1 ;
-(NSArray *)offers;
@end

