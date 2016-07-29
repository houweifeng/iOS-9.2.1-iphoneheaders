/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject {

	NSMutableData* _mutableData;
	NSData* _data;
	unsigned long long _offset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableData;                //@synthesize mutableData=_mutableData - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) const char* bytes; 
@property (nonatomic,readonly) const char* currentPosition; 
+(id)encodeWithCandidateResultSet:(id)arg1 ;
+(id)decodeWithData:(id)arg1 ;
+(Class)classFromCandidateType:(int)arg1 ;
+(id)candidateTypeToClassNameMap;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(unsigned long long)decodeUInt64;
-(id)decodeString;
-(BOOL)decodeBool;
-(void)encodeString:(id)arg1 ;
-(void)encodeByte:(unsigned char)arg1 ;
-(void)encodeBool:(BOOL)arg1 ;
-(unsigned char)decodeByte;
-(void)encodeUInt32:(unsigned)arg1 ;
-(id)initForDecodingWithData:(id)arg1 ;
-(void)encodeShort:(unsigned short)arg1 ;
-(void)encodePointerValueArray:(id)arg1 ;
-(id)decodePointerValueArray;
-(id)dataFromCandidateResultSet:(id)arg1 ;
-(id)initWithData:(id)arg1 mutableData:(id)arg2 ;
-(id)decodeStringArray;
-(id)decodeCandidate;
-(void)encodeStringArray:(id)arg1 ;
-(id)initForEncoding;
-(unsigned)decodeUInt32;
-(unsigned short)decodeShort;
-(void)setMutableData:(NSMutableData *)arg1 ;
-(void)dealloc;
-(const char*)bytes;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(id)candidateResultSet;
-(NSMutableData *)mutableData;
-(const char*)currentPosition;
@end

