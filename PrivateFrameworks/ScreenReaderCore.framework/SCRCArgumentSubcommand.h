/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSString, NSMutableArray;



@interface SCRCArgumentSubcommand : NSObject 
{
    NSString *_subcommandName;
    NSMutableArray *_optionArray;
}

+ (id)subcommandWithName:(id)arg1;

- (void)stop;
- (void)addOptions;
- (void)showHelp;
- (void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6;
- (id)optionArray;
- (id)subcommandName;
- (id)formattedHelpHeader;
- (id)formattedHelpFooter;
- (id)initWithName:(id)arg1;
- (NSInteger)compare:(id)arg1;
- (NSInteger)run;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;

@end