/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebEditCommand : NSObject  {
    struct RefPtr<WebCore::EditCommand> { 
        struct EditCommand {} *m_ptr; 
    } m_command;
}

+ (id)commandWithEditCommand:(struct PassRefPtr<WebCore::EditCommand> { struct EditCommand {} *x1; })arg1;
+ (void)initialize;

- (id)initWithEditCommand:(struct PassRefPtr<WebCore::EditCommand> { struct EditCommand {} *x1; })arg1;
- (void)finalize;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct EditCommand { int (**x1)(); int x2; struct RefPtr<WebCore::Document> { struct Document {} *x_3_1_1; } x3; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; int x_1_2_2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 1; } x_4_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; int x_2_2_2; unsigned int x_2_2_3 : 2; unsigned int x_2_2_4 : 1; } x_4_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; int x_3_2_2; unsigned int x_3_2_3 : 2; unsigned int x_3_2_4 : 1; } x_4_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; int x_4_2_2; unsigned int x_4_2_3 : 2; unsigned int x_4_2_4 : 1; } x_4_1_4; int x_4_1_5; int x_4_1_6; boolx_4_1_7; } x4; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; int x_1_2_2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 1; } x_5_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; int x_2_2_2; unsigned int x_2_2_3 : 2; unsigned int x_2_2_4 : 1; } x_5_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; int x_3_2_2; unsigned int x_3_2_3 : 2; unsigned int x_3_2_4 : 1; } x_5_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; int x_4_2_2; unsigned int x_4_2_3 : 2; unsigned int x_4_2_4 : 1; } x_5_1_4; int x_5_1_5; int x_5_1_6; boolx_5_1_7; } x5; struct RefPtr<WebCore::Element> { struct Element {} *x_6_1_1; } x6; struct RefPtr<WebCore::Element> { struct Element {} *x_7_1_1; } x7; struct CompositeEditCommand {} *x8; }*)command;

@end
