/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;

@interface MFDataMessageStore : MailMessageStore  {
    NSData *_data;
    Class _messageClass;
}


- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)mailboxUid;
- (id)storePath;
- (void)writeUpdatedMessageDataToDisk;
- (void)setMessageClass:(Class)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)message;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
