/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager_zh_ja.h>

@class TIMecabraContext, TIWordSearch, TIWordSearchCandidateResultSet, NSString, CIMCandidateData, NSOperationQueue, TICandidateCommitHistory;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja {

	TIMecabraContext* _adaptationContext;
	TIWordSearch* _wordSearch;
	TIWordSearchCandidateResultSet* _wordSearchCandidateResultSet;
	BOOL _isInCompletionMode;
	BOOL _showingFacemarks;
	BOOL _shouldLearnAcceptedCandidate;
	BOOL _isAlphabeticPlane;
	NSString* _language;
	NSString* _modeName;
	CIMCandidateData* _candidateData;
	NSOperationQueue* _operationQueue;
	NSString* _pairedPunctuationOpenQuote;
	NSString* _pairedPunctuationSelectedText;
	NSString* _currentKeyHint;
	TICandidateCommitHistory* _candidateCommitHistory;

}

@property (nonatomic,copy) NSString * language;                                                          //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * modeName;                                                          //@synthesize modeName=_modeName - In the implementation block
@property (assign,nonatomic) BOOL isInCompletionMode;                                                    //@synthesize isInCompletionMode=_isInCompletionMode - In the implementation block
@property (assign,nonatomic) BOOL showingFacemarks;                                                      //@synthesize showingFacemarks=_showingFacemarks - In the implementation block
@property (assign,nonatomic) BOOL shouldLearnAcceptedCandidate;                                          //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (nonatomic,copy) NSString * currentKeyHint;                                                    //@synthesize currentKeyHint=_currentKeyHint - In the implementation block
@property (nonatomic,readonly) TIMecabraContext * adaptationContext;                                     //@synthesize adaptationContext=_adaptationContext - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * wordSearchCandidateResultSet;              //@synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet - In the implementation block
@property (assign,nonatomic) BOOL isAlphabeticPlane;                                                     //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (nonatomic,copy) NSString * pairedPunctuationOpenQuote;                                        //@synthesize pairedPunctuationOpenQuote=_pairedPunctuationOpenQuote - In the implementation block
@property (nonatomic,copy) NSString * pairedPunctuationSelectedText;                                     //@synthesize pairedPunctuationSelectedText=_pairedPunctuationSelectedText - In the implementation block
@property (nonatomic,retain) TICandidateCommitHistory * candidateCommitHistory;                          //@synthesize candidateCommitHistory=_candidateCommitHistory - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionOptions; 
@property (readonly) CIMCandidateData * candidateData;                                                   //@synthesize candidateData=_candidateData - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                                  //@synthesize operationQueue=_operationQueue - In the implementation block
+(Class)wordSearchClass;
+(id)GB18030CandidateFromString:(id)arg1 ;
+(id)unicodeCandidateFromString:(id)arg1 ;
+(BOOL)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2 ;
+(id)pairedPunctuationDictionary;
+(id)punctuationPredictionsForString:(id)arg1 ;
-(id)firstCandidate;
-(void)dealloc;
-(unsigned long long)initialSelectedIndex;
-(BOOL)isAlphabeticPlane;
-(void)setIsAlphabeticPlane:(BOOL)arg1 ;
-(void)clearInput;
-(id)replacementForDoubleSpace;
-(unsigned long long)initialCandidateBatchCount;
-(id)keyEventMap;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(NSOperationQueue *)operationQueue;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setInput:(id)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(id)wordSearch;
-(TIMecabraContext *)adaptationContext;
-(void)setShouldLearnAcceptedCandidate:(BOOL)arg1 ;
-(BOOL)shouldLearnAcceptedCandidate;
-(MecabraRef)mecabra;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)loadFavoniusLanguageModel;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(id)wordCharacters;
-(void)syncToLayoutState:(id)arg1 ;
-(void)inputLocationChanged;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sortingMethods;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)didAcceptCandidate:(id)arg1 ;
-(id)sortMethodsGroupsForCandidates:(id)arg1 ;
-(BOOL)showingFacemarks;
-(BOOL)updateCompletionCandidatesIfAppropriate;
-(void)setShowingFacemarks:(BOOL)arg1 ;
-(BOOL)isInCompletionMode;
-(void)setIsInCompletionMode:(BOOL)arg1 ;
-(BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(CIMCandidateData *)candidateData;
-(TIInputManagerZephyr*)initImplementationWithMode:(id)arg1 andLanguage:(id)arg2 ;
-(TIWordSearchCandidateResultSet *)wordSearchCandidateResultSet;
-(void)setWordSearchCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(void)setModeName:(NSString *)arg1 ;
-(void)setCurrentKeyHint:(NSString *)arg1 ;
-(void*)mecabraCandidateRefFromCandidate:(id)arg1 ;
-(BOOL)shouldSearchCompletionForSubstrings;
-(unsigned long long)predictionOptions;
-(BOOL)analyzeForPredictionsWithOption:(unsigned long long)arg1 ;
-(void)willExitCompletionMode;
-(NSString *)currentKeyHint;
-(id)completionCandidateResultSetForKeyHint:(id)arg1 ;
-(id)generateCompletions;
-(BOOL)supportsPairedPunctutationInput;
-(NSString *)pairedPunctuationOpenQuote;
-(NSString *)pairedPunctuationSelectedText;
-(void)setPairedPunctuationOpenQuote:(NSString *)arg1 ;
-(void)setPairedPunctuationSelectedText:(NSString *)arg1 ;
-(void)acceptFirstCandidateWithContext:(id)arg1 ;
-(void)resetCommitHistory;
-(WordTrie*)loadTrie:(id)arg1 ;
-(id)candidateResultSetUsedForCompletionQuery;
-(void*)mecabraCandidateRefFromPointerValue:(id)arg1 ;
-(id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1 ;
-(BOOL)handlePairedPunctuationInput:(id)arg1 context:(id)arg2 ;
-(NSString *)modeName;
-(TICandidateCommitHistory *)candidateCommitHistory;
-(void)setCandidateCommitHistory:(TICandidateCommitHistory *)arg1 ;
@end

