/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKActionExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface OKAction : NSObject <OKActionExports, NSSecureCoding> {

	double _timestamp;
	CGPoint _location;
	unsigned long long _state;
	unsigned long long _touchCount;
	BOOL _shouldCancelCouchPotato;
	BOOL _shouldPropagate;
	BOOL _isInstantaneous;
	unsigned long long _scope;
	unsigned long long _platform;
	NSMutableDictionary* _context;
	NSString* _keyPath;

}

@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint location;                                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long state;                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long touchCount;                       //@synthesize touchCount=_touchCount - In the implementation block
@property (nonatomic,readonly) unsigned long long platform;                       //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isInstantaneous;                                //@synthesize isInstantaneous=_isInstantaneous - In the implementation block
@property (assign,nonatomic) unsigned long long scope;                            //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSString * keyPath;                                  //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic) BOOL shouldPropagate;                                //@synthesize shouldPropagate=_shouldPropagate - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelCouchPotato;                        //@synthesize shouldCancelCouchPotato=_shouldCancelCouchPotato - In the implementation block
+(id)action;
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)createContext;
+(unsigned long long)directionFromPoint:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSMutableDictionary *)context;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setScope:(unsigned long long)arg1 ;
-(unsigned long long)scope;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(unsigned long long)touchCount;
-(unsigned long long)platform;
-(id)initWithLocation:(CGPoint)arg1 touchCount:(unsigned long long)arg2 context:(id)arg3 ;
-(id)initWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4 ;
-(void)convertFromResponder:(id)arg1 toResponder:(id)arg2 ;
-(BOOL)shouldPropagate;
-(void)setShouldPropagate:(BOOL)arg1 ;
-(BOOL)shouldCancelCouchPotato;
-(BOOL)isInstantaneous;
-(void)setIsInstantaneous:(BOOL)arg1 ;
-(void)setShouldCancelCouchPotato:(BOOL)arg1 ;
-(void)setContextObject:(id)arg1 forKey:(id)arg2 ;
-(void)setTouchCount:(unsigned long long)arg1 ;
@end

