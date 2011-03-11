/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, <CalSearchDataSink>;

@interface CalSpotlightSearch : NSObject  {
    struct CalDatabase { } *_database;
    NSString *_titleString;
    NSString *_locationString;
    NSString *_descriptionString;
    NSString *_participantString;
    <CalSearchDataSink> *_dataSink;
    bool_moreResultsAvailable;
    bool_onlySearchEvents;
    struct __CFArray { } *_partialResults;
    struct __CFSet { } *_matchedEventsSet;
    struct __CFSet { } *_matchedParticipantsSet;
    bool_implementsCancellationCallback;
    struct __CFDictionary { } *_closestEventOccurrences;
    bool_cancelled;
}

+ (struct __CFDictionary { }*)newQueryCache;

- (void)dealloc;
- (id)initWithDatabase:(struct CalDatabase { }*)arg1 searchString:(struct __CFString { }*)arg2 dataSink:(id)arg3 queryCache:(struct __CFDictionary { }*)arg4;
- (id)initWithDatabase:(struct CalDatabase { }*)arg1 titleString:(id)arg2 locationString:(id)arg3 descriptionString:(id)arg4 participantString:(id)arg5 queryCache:(struct __CFDictionary { }*)arg6;
- (void)performWithBlock:(id)arg1;
- (id)initWithDatabase:(struct CalDatabase { }*)arg1 titleString:(id)arg2 locationString:(id)arg3 descriptionString:(id)arg4 participantString:(id)arg5 dataSink:(id)arg6 queryCache:(struct __CFDictionary { }*)arg7;
- (void)_startLoadingResults:(id)arg1;
- (void)_getSpotlightEvents:(struct CalEventSpotlightContext { boolx1; boolx2; struct __CFSet {} *x3; struct __CFSet {} *x4; struct __CFArray {} *x5; bool*x6; bool*x7; struct CalDatabase {} *x8; int (*x9)(); void *x10; int x11; int x12; int x13; struct __CFDictionary {} *x14; double x15; double x16; double x17; struct CalSpotlightMatchedEventContext { int x_18_1_1; char *x_18_1_2; char *x_18_1_3; char *x_18_1_4; double x_18_1_5; double x_18_1_6; int x_18_1_7; int x_18_1_8; char *x_18_1_9; char *x_18_1_10; char *x_18_1_11; int x_18_1_12; struct __CFArray {} *x_18_1_13; int x_18_1_14; } x18; }*)arg1 callback:(id)arg2;
- (void)calculateSearchWindow:(struct CalEventSpotlightContext { boolx1; boolx2; struct __CFSet {} *x3; struct __CFSet {} *x4; struct __CFArray {} *x5; bool*x6; bool*x7; struct CalDatabase {} *x8; int (*x9)(); void *x10; int x11; int x12; int x13; struct __CFDictionary {} *x14; double x15; double x16; double x17; struct CalSpotlightMatchedEventContext { int x_18_1_1; char *x_18_1_2; char *x_18_1_3; char *x_18_1_4; double x_18_1_5; double x_18_1_6; int x_18_1_7; int x_18_1_8; char *x_18_1_9; char *x_18_1_10; char *x_18_1_11; int x_18_1_12; struct __CFArray {} *x_18_1_13; int x_18_1_14; } x18; }*)arg1;
- (struct CalEventSpotlightContext { boolx1; boolx2; struct __CFSet {} *x3; struct __CFSet {} *x4; struct __CFArray {} *x5; bool*x6; bool*x7; struct CalDatabase {} *x8; int (*x9)(); void *x10; int x11; int x12; int x13; struct __CFDictionary {} *x14; double x15; double x16; double x17; struct CalSpotlightMatchedEventContext { int x_18_1_1; char *x_18_1_2; char *x_18_1_3; char *x_18_1_4; double x_18_1_5; double x_18_1_6; int x_18_1_7; int x_18_1_8; char *x_18_1_9; char *x_18_1_10; char *x_18_1_11; int x_18_1_12; struct __CFArray {} *x_18_1_13; int x_18_1_14; } x18; }*)_createSpotlightEventsContext;
- (void)_deleteSpotlightEventsContext:(struct CalEventSpotlightContext { boolx1; boolx2; struct __CFSet {} *x3; struct __CFSet {} *x4; struct __CFArray {} *x5; bool*x6; bool*x7; struct CalDatabase {} *x8; int (*x9)(); void *x10; int x11; int x12; int x13; struct __CFDictionary {} *x14; double x15; double x16; double x17; struct CalSpotlightMatchedEventContext { int x_18_1_1; char *x_18_1_2; char *x_18_1_3; char *x_18_1_4; double x_18_1_5; double x_18_1_6; int x_18_1_7; int x_18_1_8; char *x_18_1_9; char *x_18_1_10; char *x_18_1_11; int x_18_1_12; struct __CFArray {} *x_18_1_13; int x_18_1_14; } x18; }*)arg1;
- (void)startSearching;
- (void)stopSearching;
- (void)_addMatchedParticipantIds:(struct __CFArray { }*)arg1;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)arg1;
- (struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)_createParticipantIdsSearchContext;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)arg1;

@end
