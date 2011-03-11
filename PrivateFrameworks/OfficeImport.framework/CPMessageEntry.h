/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSString, NSArray;

@interface CPMessageEntry : NSObject  {
    int m_timeStamp;
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
}

@property int timeStamp;

+ (void)initialize;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (int)timeStamp;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(void*)arg4;
- (int)getMessageTag;
- (id)getMessageText;
- (int)getParameterCount;
- (id)getParameter:(unsigned int)arg1;
- (id)affectedObjects;
- (int)getCount;
- (int)timeStampCompare:(id)arg1;
- (void)logWithCat:(id)arg1;
- (void)mergeEntries:(id)arg1;
- (void)addAffectedObject:(id)arg1;
- (void)setTimeStamp:(int)arg1;

@end
