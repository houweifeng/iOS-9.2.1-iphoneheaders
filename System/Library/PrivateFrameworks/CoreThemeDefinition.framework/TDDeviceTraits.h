/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TDDeviceTraits : NSObject {

	double _scale;
	long long _idiomValue;
	NSArray* _hostedIdiomValues;
	long long _subtype;
	long long _sizeClassHorizontal;
	long long _sizeClassVertical;
	long long _memoryPerformanceClass;
	long long _graphicsPerformanceClass;
	long long _graphicsFeatureSetClassValue;
	NSArray* _graphicsFeatureSetFallbackValues;

}

@property (assign,nonatomic) double scale;                                          //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) NSString * idiom; 
@property (assign,nonatomic) NSArray * hostedIdioms; 
@property (assign,nonatomic) long long subtype;                                     //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) long long memoryPerformanceClass;                      //@synthesize memoryPerformanceClass=_memoryPerformanceClass - In the implementation block
@property (assign,nonatomic) long long graphicsPerformanceClass;                    //@synthesize graphicsPerformanceClass=_graphicsPerformanceClass - In the implementation block
@property (assign,nonatomic) NSString * graphicsFeatureSetClass; 
@property (assign,nonatomic) NSArray * graphicsFeatureSetFallbacks; 
@property (assign,nonatomic) long long idiomValue;                                  //@synthesize idiomValue=_idiomValue - In the implementation block
@property (nonatomic,copy) NSArray * hostedIdiomValues;                             //@synthesize hostedIdiomValues=_hostedIdiomValues - In the implementation block
@property (assign,nonatomic) long long graphicsFeatureSetClassValue;                //@synthesize graphicsFeatureSetClassValue=_graphicsFeatureSetClassValue - In the implementation block
@property (nonatomic,copy) NSArray * graphicsFeatureSetFallbackValues;              //@synthesize graphicsFeatureSetFallbackValues=_graphicsFeatureSetFallbackValues - In the implementation block
-(void)dealloc;
-(void)setScale:(double)arg1 ;
-(long long)subtype;
-(double)scale;
-(void)setSubtype:(long long)arg1 ;
-(NSString *)idiom;
-(void)setIdiom:(NSString *)arg1 ;
-(void)setGraphicsFeatureSetFallbacks:(NSArray *)arg1 ;
-(void)setHostedIdioms:(NSArray *)arg1 ;
-(long long)_idiomFromTraitString:(id)arg1 ;
-(void)setIdiomValue:(long long)arg1 ;
-(id)_idiomToTraitString:(long long)arg1 ;
-(NSArray *)hostedIdiomValues;
-(long long)_graphicsFeatureSetClassFromTraitString:(id)arg1 ;
-(void)setGraphicsFeatureSetClassValue:(long long)arg1 ;
-(long long)graphicsFeatureSetClassValue;
-(id)_graphicsFeatureSetClassToTraitString:(long long)arg1 ;
-(void)setGraphicsFeatureSetFallbackValues:(NSArray *)arg1 ;
-(NSArray *)graphicsFeatureSetFallbackValues;
-(NSArray *)hostedIdioms;
-(void)setGraphicsFeatureSetClass:(NSString *)arg1 ;
-(NSString *)graphicsFeatureSetClass;
-(NSArray *)graphicsFeatureSetFallbacks;
-(long long)idiomValue;
-(void)setHostedIdiomValues:(NSArray *)arg1 ;
-(long long)memoryPerformanceClass;
-(void)setMemoryPerformanceClass:(long long)arg1 ;
-(long long)graphicsPerformanceClass;
-(void)setGraphicsPerformanceClass:(long long)arg1 ;
@end

