/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerURLContainerModel.h>

@class NSString;

@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel {

	NSString* _containerID;

}
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)initWithPickableTypes:(id)arg1 container:(id)arg2 ;
-(id)scopes;
-(BOOL)shouldShowTopLevelContainers;
-(id)displayTitle;
-(id)_createObserver;
@end

