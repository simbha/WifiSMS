/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableData, NSDictionary, NSURLConnection;



@interface GMMLoader : NSObject 
{
    NSURLConnection *_connection;

  /* Error parsing encoded ivar type info: ^{Requester=^^?i^{Connection}*BB} */
    struct Requester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; } *_requester;

    struct Response { int (**x1)(); NSDictionary *x2; } *_response;
    NSMutableData *_data;
}


- (id)initWithURL:(id)arg1 postData:(id)arg2 requester:(struct Requester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; }*)arg3 timeout:(double)arg4;
     /* Encoded args for previous method: @28@0:4@8@12^{Requester=^^?i^{Connection}*BB}16d20 */

- (void)_lock;
- (void)_unlock;
- (BOOL)_unlockIfNotLoading;
- (void)dealloc;
- (void)_cleanup;
- (void)cancel;
- (void)_failWithError:(id)arg1;
- (void)_failWithErrorCode:(NSInteger)arg1;
- (void)_cancelWithErrorCode:(NSInteger)arg1;
- (BOOL)_continueReadStream:(BOOL)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;

@end
