/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUBacktrace : NSObject <NSCopying> {
    int _flavor;
    struct { 
        struct { 
            double t_begin; 
            double t_end; 
            int pid; 
            unsigned int thread; 
            int run_state; 
            unsigned long long dispatch_queue_serial_num; 
        } context; 
        unsigned int *frames; 
        char *frame_types; 
        unsigned int length; 
    } _callstack;
}


- (unsigned int)backtraceLength;
- (unsigned int*)backtrace;
- (void)fixupStackWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2 taskMemoryCache:(id)arg3;
- (unsigned int)thread;
- (struct _CSTypeRef { unsigned int x1; unsigned int x2; })_symbolicator;
- (id)initWithSamplingContext:(struct sampling_context_t { }*)arg1 thread:(unsigned int)arg2;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(BOOL)arg3;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(BOOL)arg3 taskMemoryCache:(id)arg4;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { }*)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)hasSameCallstack:(id)arg1;
- (unsigned int)topmostFrame;
- (void)removeTopmostFrame;
- (void)setLengthTime:(double)arg1;
- (void)setThreadState:(int)arg1;
- (int)threadState;
- (unsigned long long)dispatchQueueSerialNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)setStartTime:(double)arg1;
- (void)setEndTime:(double)arg1;

@end
