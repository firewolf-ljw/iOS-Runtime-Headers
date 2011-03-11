/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNullFileHandle : NSFileHandle  {
}


- (int)fileDescriptor;
- (id)availableData;
- (id)readDataOfLength:(unsigned int)arg1;
- (id)readDataToEndOfFile;
- (void)writeData:(id)arg1;
- (unsigned long long)offsetInFile;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (void)closeFile;

@end
