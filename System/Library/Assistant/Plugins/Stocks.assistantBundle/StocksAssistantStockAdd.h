/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Stocks.assistantBundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStockAdd.h>
#import <Accessibility/AFServiceCommand.h>

@class NSMutableArray, NSString;

@interface StocksAssistantStockAdd : SAStockAdd <AFServiceCommand> {

	NSMutableArray* _newStocks;

}

@property (nonatomic,retain) NSMutableArray * createdStocks;              //@synthesize newStocks=_newStocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)createdStocks;
-(void)setCreatedStocks:(NSMutableArray *)arg1 ;
-(id)addStocks;
-(id)validateCommandArguments;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

