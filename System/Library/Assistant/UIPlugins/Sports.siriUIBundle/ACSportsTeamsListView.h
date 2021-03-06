/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsCardListView.h>

@interface ACSportsTeamsListView : ACSportsCardListView {

	BOOL _hidePlayerImages;
	BOOL _alwaysUseAthleteFullNames;

}

@property (assign,nonatomic) BOOL hidePlayerImages;                       //@synthesize hidePlayerImages=_hidePlayerImages - In the implementation block
@property (assign,nonatomic) BOOL alwaysUseAthleteFullNames;              //@synthesize alwaysUseAthleteFullNames=_alwaysUseAthleteFullNames - In the implementation block
+(id)domainObjectViewWithDomainObject:(id)arg1 league:(id)arg2 frame:(CGRect)arg3 ;
-(BOOL)hidePlayerImages;
-(void)setHidePlayerImages:(BOOL)arg1 ;
-(BOOL)alwaysUseAthleteFullNames;
-(void)setAlwaysUseAthleteFullNames:(BOOL)arg1 ;
-(void)configureDomainObjectView:(id)arg1 withDomainObject:(id)arg2 beforeDomainObject:(id)arg3 afterDomainObject:(id)arg4 league:(id)arg5 index:(unsigned long long)arg6 ;
@end

