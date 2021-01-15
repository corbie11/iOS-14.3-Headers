/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRImageReader : NSObject {
    NSObject<CREngine> * _engine;
    NSArray * _outputObjectTypes;
    bool  _shouldCancel;
    NSDictionary * _userOptions;
}

@property (nonatomic, retain) NSObject<CREngine> *engine;
@property (copy) NSArray *outputObjectTypes;
@property bool shouldCancel;
@property (nonatomic, retain) NSDictionary *userOptions;

+ (Class)_engineClassFromOptions:(id)arg1 error:(id*)arg2;
+ (id)_engineFromOptions:(id)arg1 error:(id*)arg2;
+ (id)defaultOptions;
+ (unsigned long long)defaultRevisionNumber;
+ (id)descriptionForErrorCode:(long long)arg1;
+ (id)errorWithErrorCode:(long long)arg1;
+ (id)languageSetFromOptionsDictionary:(id)arg1;
+ (id)supportedLanguagesForOptions:(id)arg1 revision:(long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (id)confidenceThresholdProvider;
- (id)detectorInferenceStats;
- (id)detectorStats;
- (id)engine;
- (id)initWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)outputObjectTypes;
- (id)postProcStats;
- (bool)purgeCaches:(id)arg1;
- (id)recognizerDecodingStats;
- (id)recognizerInferenceStats;
- (id)recognizerStats;
- (id)resultsForPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (id)resultsForPixelBuffer:(struct __CVBuffer { }*)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 options:(id)arg3 error:(id*)arg4;
- (id)resultsForPixelBuffer:(struct __CVBuffer { }*)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 options:(id)arg3 error:(id*)arg4 withProgressHandler:(id /* block */)arg5;
- (void)setEngine:(id)arg1;
- (void)setOutputObjectTypes:(id)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setUserOptions:(id)arg1;
- (bool)shouldCancel;
- (id)signpostLog;
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)textDetectorResultsForImage:(id)arg1 error:(id*)arg2;
- (id)textRecognizerResultsForTextFeatures:(id)arg1 forImageAtURL:(id)arg2 options:(id)arg3;
- (id)textRecognizerResultsForTextFeatures:(id)arg1 inImage:(id)arg2 options:(id)arg3;
- (id)textResultsForImage:(id)arg1 options:(id)arg2;
- (id)textResultsForImage:(id)arg1 options:(id)arg2 withProgressHandler:(id /* block */)arg3;
- (id)textResultsForImage:(id)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 options:(id)arg3 error:(id*)arg4 withProgressHandler:(id /* block */)arg5;
- (id)textResultsForImageAtURL:(id)arg1 options:(id)arg2;
- (id)userOptions;

@end