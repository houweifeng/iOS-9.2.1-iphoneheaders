/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CIPDF417BarcodeGenerator : CICodeGenerator {

	NSNumber* inputMinWidth;
	NSNumber* inputMaxWidth;
	NSNumber* inputMinHeight;
	NSNumber* inputMaxHeight;
	NSNumber* inputDataColumns;
	NSNumber* inputRows;
	NSNumber* inputPreferredAspectRatio;
	NSNumber* inputCompactionMode;
	NSNumber* inputCompactStyle;
	NSNumber* inputCorrectionLevel;
	NSNumber* inputAlwaysSpecifyCompaction;

}

@property (nonatomic,copy) NSNumber * inputMinWidth; 
@property (nonatomic,copy) NSNumber * inputMaxWidth; 
@property (nonatomic,copy) NSNumber * inputMinHeight; 
@property (nonatomic,copy) NSNumber * inputMaxHeight; 
@property (nonatomic,copy) NSNumber * inputDataColumns; 
@property (nonatomic,copy) NSNumber * inputRows; 
@property (nonatomic,copy) NSNumber * inputPreferredAspectRatio; 
@property (nonatomic,copy) NSNumber * inputCompactionMode; 
@property (nonatomic,copy) NSNumber * inputCompactStyle; 
@property (nonatomic,copy) NSNumber * inputCorrectionLevel; 
@property (nonatomic,copy) NSNumber * inputAlwaysSpecifyCompaction; 
+(id)customAttributes;
-(void)setInputMinWidth:(NSNumber *)arg1 ;
-(void)setInputMaxWidth:(NSNumber *)arg1 ;
-(void)setInputMinHeight:(NSNumber *)arg1 ;
-(void)setInputMaxHeight:(NSNumber *)arg1 ;
-(void)setInputDataColumns:(NSNumber *)arg1 ;
-(void)setInputRows:(NSNumber *)arg1 ;
-(void)setInputPreferredAspectRatio:(NSNumber *)arg1 ;
-(void)setInputCompactionMode:(NSNumber *)arg1 ;
-(void)setInputCompactStyle:(NSNumber *)arg1 ;
-(void)setInputCorrectionLevel:(NSNumber *)arg1 ;
-(void)setInputAlwaysSpecifyCompaction:(NSNumber *)arg1 ;
-(NSNumber *)inputMaxWidth;
-(NSNumber *)inputMinHeight;
-(NSNumber *)inputMaxHeight;
-(NSNumber *)inputDataColumns;
-(NSNumber *)inputRows;
-(NSNumber *)inputPreferredAspectRatio;
-(NSNumber *)inputCompactionMode;
-(NSNumber *)inputCompactStyle;
-(NSNumber *)inputCorrectionLevel;
-(NSNumber *)inputAlwaysSpecifyCompaction;
-(NSNumber *)inputMinWidth;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(CGImageRef)outputCGImage;
@end

