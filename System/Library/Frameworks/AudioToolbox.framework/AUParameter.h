/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _AUStaticParameterInfo, NSString;

@interface AUParameter : AUParameterNode <NSSecureCoding> {

	BOOL __localValueStale;
	float _value;
	int _numUIObservers;
	int _numRecordingObservers;
	unsigned long long _address;
	NSArray* _dependentParameters;
	_AUStaticParameterInfo* _info;

}

@property (nonatomic,readonly) float minValue; 
@property (nonatomic,readonly) float maxValue; 
@property (nonatomic,readonly) unsigned unit; 
@property (nonatomic,copy,readonly) NSString * unitName; 
@property (nonatomic,readonly) unsigned flags; 
@property (assign,nonatomic) unsigned long long address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSArray * valueStrings; 
@property (nonatomic,copy,readonly) NSArray * dependentParameters;              //@synthesize dependentParameters=_dependentParameters - In the implementation block
@property (assign,nonatomic) float value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) _AUStaticParameterInfo * info;                     //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) BOOL _localValueStale;                             //@synthesize _localValueStale=__localValueStale - In the implementation block
@property (assign,nonatomic) int numUIObservers;                                //@synthesize numUIObservers=_numUIObservers - In the implementation block
@property (assign,nonatomic) int numRecordingObservers;                         //@synthesize numRecordingObservers=_numRecordingObservers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 ;
-(NSString *)unitName;
-(unsigned)_clumpID;
-(NSArray *)valueStrings;
-(id)stringFromValue:(const float*)arg1 ;
-(float)valueFromString:(id)arg1 ;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 ;
-(float)_internalValue;
-(NSArray *)dependentParameters;
-(void)set_localValueStale:(BOOL)arg1 ;
-(id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned)arg6 unitName:(id)arg7 flags:(unsigned)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10 ;
-(void)set_clumpID:(unsigned)arg1 ;
-(BOOL)_localValueStale;
-(int)numUIObservers;
-(void)setNumUIObservers:(int)arg1 ;
-(int)numRecordingObservers;
-(void)setNumRecordingObservers:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(float)minValue;
-(_AUStaticParameterInfo *)info;
-(void)setInfo:(_AUStaticParameterInfo *)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(float)maxValue;
-(unsigned long long)address;
-(unsigned)unit;
-(unsigned)flags;
@end

