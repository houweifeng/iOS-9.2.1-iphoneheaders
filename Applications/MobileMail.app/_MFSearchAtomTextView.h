/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFAtomTextView.h>

@class MFAtomSearchBar, _MFSearchAtomFieldEditor;

@interface _MFSearchAtomTextView : MFAtomTextView

@property (getter=_searchBar,nonatomic,retain,readonly) MFAtomSearchBar * searchBar; 
@property (getter=_fieldEditor,nonatomic,retain,readonly) _MFSearchAtomFieldEditor * fieldEditor; 
+(Class)_fieldEditorClass;
-(id)_searchBar;
-(BOOL)shouldCenterPlaceholder;
-(void)setText:(id)arg1 ;
-(id)_fieldEditor;
-(id)textInputTraits;
-(id)searchText;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)placeholderColor;
@end

