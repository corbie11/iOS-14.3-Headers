/* Generated by RuntimeBrowser.
 */

@protocol NSURLSessionDelegate_Internal <NSURLSessionDelegate>

@required

- (void)_URLSession:(void *)arg1 task:(void *)arg2 getAuthHeadersForResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSURLSession *, NSURLSessionTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSURLRequest *, void*

@optional

- (void)_URLSession:(NSURLSession *)arg1 companionAvailabilityChanged:(bool)arg2;
- (void)_URLSession:(void *)arg1 needConnectedSocketToHost:(void *)arg2 port:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURLSession *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct { long long x1; int x2; }, void*
- (void)_URLSession:(void *)arg1 openFileAtPath:(void *)arg2 mode:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end