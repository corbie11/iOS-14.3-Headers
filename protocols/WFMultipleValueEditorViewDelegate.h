/* Generated by RuntimeBrowser.
 */

@protocol WFMultipleValueEditorViewDelegate <NSObject>

@required

- (void)multipleValueEditorView:(WFMultipleValueEditorView *)arg1 didUpdateWithItem:(WFListEditorUpdateItem *)arg2;

@optional

- (void)multipleValueEditorView:(WFMultipleValueEditorView *)arg1 needsConfirmationForDeletion:(WFListEditorDeletionConfirmation *)arg2;
- (void)multipleValueSizeDidInvalidated:(WFMultipleValueEditorView *)arg1;

@end