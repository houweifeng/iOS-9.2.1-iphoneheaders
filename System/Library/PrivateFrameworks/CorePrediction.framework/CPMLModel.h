/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, CPMLModelEvaluate;

@interface CPMLModel : NSObject {

	NSString* _savedPlistPath;
	NSString* _modelPath;
	NSObject*<OS_dispatch_queue> _dispatch_queue;
	void* _mData;
	unsigned long long _totalBytesIntSection;
	unsigned long long _totalBytesRealSection;
	double* _realBase;
	CPMLModelEvaluate* cpModelEvaluate;

}

@property (retain) CPMLModelEvaluate * cpModelEvaluate; 
+(id)initCPModelPath:(id)arg1 withConfiguration:(id)arg2 ;
-(BOOL)reset;
-(void)setCpModelEvaluate:(CPMLModelEvaluate *)arg1 ;
-(void)initializeModel:(id)arg1 withConfiguration:(id)arg2 ;
-(id)getPropertyList;
-(id)initWithModelPath:(id)arg1 withConfiguration:(id)arg2 ;
-(id)evalString:(id)arg1 ;
-(id)evalNSObjectV:(id)arg1 ;
-(id)evalArray:(id)arg1 ;
-(id)evalDict:(id)arg1 ;
-(void)boundResult:(id)arg1 ;
-(void)setCPMLAlgorithm:(id)arg1 ;
-(void)setCPMLAlgorithmEngine:(id)arg1 ;
-(BOOL)updateModelWithDB:(id)arg1 ;
-(BOOL)updateModelWithCPDB:(id)arg1 ;
-(CPMLModelEvaluate *)cpModelEvaluate;
-(id)initWithModelPath:(id)arg1 withPropertyListPath:(id)arg2 ;
-(void)setDispatchQueue:(id)arg1 ;
@end

