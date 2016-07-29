/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconStateUnarchiveContext <NSObject>
@required
-(void)_noteEnteredNode;
-(void)_noteExitedNode;
-(id)_iconSource;
-(void)_pushFolder:(id)arg1;
-(id)_currentFolder;
-(id)_popFolder;
-(long long)_currentParseDepth;
-(void)_noteRepresentationIsCorrupted;
-(void)_noteSignificantDeviation;
-(BOOL)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
-(void)_noteNodeIdentifierWasUnarchived:(id)arg1;

@end

