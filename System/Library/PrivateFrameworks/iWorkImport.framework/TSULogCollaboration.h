/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUASLClient, TSUASLLogFile, NSURL;

@interface TSULogCollaboration : NSObject {

	TSUASLClient* _aslClient;
	int _logFileLevelMask;
	int _stderrLevelMask;
	TSUASLLogFile* _currentLogFile;
	BOOL _shouldLogCommandTrace;
	BOOL _shouldLogToFile;
	BOOL _shouldLogToStderr;
	int _filterLevel;
	NSURL* _logFileURL;

}

@property (assign,nonatomic) int filterLevel;                         //@synthesize filterLevel=_filterLevel - In the implementation block
@property (nonatomic,readonly) NSURL * logFileURL;                    //@synthesize logFileURL=_logFileURL - In the implementation block
@property (assign,nonatomic) BOOL shouldLogCommandTrace;              //@synthesize shouldLogCommandTrace=_shouldLogCommandTrace - In the implementation block
@property (assign,nonatomic) BOOL shouldLogToFile;                    //@synthesize shouldLogToFile=_shouldLogToFile - In the implementation block
@property (assign,nonatomic) BOOL shouldLogToStderr;                  //@synthesize shouldLogToStderr=_shouldLogToStderr - In the implementation block
+(void)defineCategories;
+(id)sharedInstance;
-(void)setShouldLogCommandTrace:(BOOL)arg1 ;
-(BOOL)shouldLogCommandTrace;
-(void)setFilterLevel:(int)arg1 ;
-(int)filterLevel;
-(id)_createLogFileURL;
-(int)_clampLevelToValidRange:(int)arg1 ;
-(id)_createASLClient;
-(NSURL *)logFileURL;
-(BOOL)shouldLogToStderr;
-(void)setShouldLogToStderr:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(id)aslClient;
-(BOOL)shouldLogToFile;
-(void)setShouldLogToFile:(BOOL)arg1 ;
@end

