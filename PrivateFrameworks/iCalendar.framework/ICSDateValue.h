/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDateValue : NSObject <NSCoding> {
    int _year;
    int _month;
    int _day;
}

@property(readonly) int day;
@property(readonly) int month;
@property(readonly) int year;

+ (id)dateFromICSUTF8String:(const char *)arg1;
+ (id)dateFromICSString:(id)arg1;

- (int)month;
- (int)day;
- (int)compare:(id)arg1;
- (int)year;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (int)dateType;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (id)components;

@end
