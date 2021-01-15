/* Generated by RuntimeBrowser.
 */

@protocol SGDSuggestManagerEventsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol>

@required

- (void)allEventsLimitedTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)eventFromUniqueId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)isEventCandidateForURL:(void *)arg1 title:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)launchAppForSuggestedEventUsingLaunchInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGSuggestedEventLaunchInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(void *)arg1 sourceURL:(void *)arg2 clientLocale:(void *)arg3 ignoreUserActivitySupport:(void *)arg4 ignoreMailCheck:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSString *, NSURL *, NSLocale *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)schemaOrgToEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)suggestionsFromURL:(void *)arg1 title:(void *)arg2 HTMLPayload:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*

@end