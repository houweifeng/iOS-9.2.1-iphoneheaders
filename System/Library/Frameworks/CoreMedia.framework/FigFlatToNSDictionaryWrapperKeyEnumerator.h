/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMedia/CoreMedia-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {

	/*function pointer*/void** _keys;
	int _keysCount;
	int _counter;

}
-(id)initWithFlatDictionary:(OpaqueFigFlatDictionaryRef)arg1 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
@end
