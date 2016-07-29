/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MPUDataSourceConfiguration;

@interface MPUViewControllerConfiguration : NSObject {

	BOOL _wantsModalPresentation;
	BOOL _wantsNavigationController;
	Class _cellConfigurationClass;
	Class _viewControllerClass;
	NSString* _aggregateStatisticDisplayCountKey;
	MPUDataSourceConfiguration* _dataSourceConfiguration;
	/*^block*/id _configurationBlock;
	Class _navigationControllerClass;

}

@property (nonatomic,readonly) Class cellConfigurationClass;                                    //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass;                                       //@synthesize viewControllerClass=_viewControllerClass - In the implementation block
@property (nonatomic,copy) NSString * aggregateStatisticDisplayCountKey;                        //@synthesize aggregateStatisticDisplayCountKey=_aggregateStatisticDisplayCountKey - In the implementation block
@property (nonatomic,retain) MPUDataSourceConfiguration * dataSourceConfiguration;              //@synthesize dataSourceConfiguration=_dataSourceConfiguration - In the implementation block
@property (nonatomic,copy) id configurationBlock;                                               //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (assign,nonatomic) BOOL wantsModalPresentation;                                       //@synthesize wantsModalPresentation=_wantsModalPresentation - In the implementation block
@property (assign,nonatomic) BOOL wantsNavigationController;                                    //@synthesize wantsNavigationController=_wantsNavigationController - In the implementation block
@property (nonatomic,retain) Class navigationControllerClass;                                   //@synthesize navigationControllerClass=_navigationControllerClass - In the implementation block
+(id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2 ;
+(id)configurationWithViewControllerClass:(Class)arg1 ;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(Class)viewControllerClass;
-(Class)cellConfigurationClass;
-(id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2 ;
-(id)initWithViewControllerClass:(Class)arg1 ;
-(NSString *)aggregateStatisticDisplayCountKey;
-(void)setAggregateStatisticDisplayCountKey:(NSString *)arg1 ;
-(MPUDataSourceConfiguration *)dataSourceConfiguration;
-(void)setDataSourceConfiguration:(MPUDataSourceConfiguration *)arg1 ;
-(void)setWantsModalPresentation:(BOOL)arg1 ;
-(void)setWantsNavigationController:(BOOL)arg1 ;
-(void)setNavigationControllerClass:(Class)arg1 ;
-(BOOL)wantsModalPresentation;
-(BOOL)wantsNavigationController;
-(Class)navigationControllerClass;
@end

