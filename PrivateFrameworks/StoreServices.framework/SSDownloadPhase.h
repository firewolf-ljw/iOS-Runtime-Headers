/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <NSCopying> {
    SSOperationProgress *_operationProgress;
}

@property(readonly) int phaseType;
@property(readonly) long long progressValue;
@property(readonly) long long totalProgressValue;
@property(readonly) int progressUnits;
@property(readonly) double estimatedSecondsRemaining;
@property(readonly) float progressChangeRate;
@property(readonly) SSOperationProgress * operationProgress;


- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)progressValue;
- (double)estimatedSecondsRemaining;
- (int)progressUnits;
- (float)progressChangeRate;
- (long long)totalProgressValue;
- (id)operationProgress;
- (id)initWithOperationProgress:(id)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (int)phaseType;

@end
