/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSKeyedUnarchiverDelegate <NSObject>
@optional
-(void)unarchiverWillFinish:(id)arg1;
-(void)unarchiverDidFinish:(id)arg1;
-(void)unarchiver:(id)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;

@end

