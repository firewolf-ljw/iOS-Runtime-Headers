/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSMutableDictionary, NSArray, NSMutableArray, NSDictionary, CTPhoneNumber, NSString, NSDate, NSObject<CTMessageAddress><NSCopying>;

@interface CTMessage : NSObject  {
    NSObject<CTMessageAddress><NSCopying> *_sender;
    NSMutableArray *_recipients;
    NSMutableArray *_items;
    NSDictionary *_rawHeaders;
    NSDate *_date;
    unsigned int _messageId;
    int _messageType;
    CTPhoneNumber *_serviceCenter;
    NSString *_subject;
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    unsigned int _replaceMessage;
    NSString *_countryCode;
}

@property(copy,readonly) NSString * countryCode;
@property(readonly) unsigned int replaceMessage;
@property(copy) NSString * contentType;
@property(readonly) NSDictionary * rawHeaders;
@property(copy) NSObject<CTMessageAddress><NSCopying> * sender;
@property(copy) NSString * subject;
@property(copy) CTPhoneNumber * serviceCenter;
@property int messageType;
@property(readonly) NSArray * items;
@property unsigned int messageId;
@property(readonly) NSDate * date;
@property(readonly) NSArray * recipients;


- (void)setContentType:(id)arg1;
- (id)subject;
- (void)removeRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (id)date;
- (id)sender;
- (id)items;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)contentType;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)addText:(id)arg1;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (unsigned int)messageId;
- (void)setMessageId:(unsigned int)arg1;
- (int)messageType;
- (id)serviceCenter;
- (id)rawHeaders;
- (unsigned int)replaceMessage;
- (void)setRawHeaders:(id)arg1;
- (void)setReplaceMessage:(unsigned int)arg1;
- (void)removeRecipientsInArray:(id)arg1;
- (void)addPhoneRecipient:(id)arg1;
- (void)addEmailRecipient:(id)arg1;
- (id)addData:(id)arg1 withContentType:(id)arg2;
- (id)addPart:(id)arg1;
- (void)removePartAtIndex:(unsigned int)arg1;
- (id)contentTypeParameterWithName:(id)arg1;
- (id)allContentTypeParameterNames;
- (void)setSender:(id)arg1;
- (void)setServiceCenter:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setRecipient:(id)arg1;
- (void)setSubject:(id)arg1;

@end
