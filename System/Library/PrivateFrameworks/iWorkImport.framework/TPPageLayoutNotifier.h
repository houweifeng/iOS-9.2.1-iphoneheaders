/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TPPageControllerLayoutObserver.h>

@class TPPageController, NSString;

@interface TPPageLayoutNotifier : NSObject <TPPageControllerLayoutObserver> {

	TPPageController* _pageController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pageController:(id)arg1 didLayoutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(BOOL)arg4 ;
-(void)dealloc;
-(id)initWithPageController:(id)arg1 ;
-(void)teardown;
@end

