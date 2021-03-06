/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDCell, EDWorkbook, ECMappingContext;



@interface EDFormulaHelper : NSObject 
{
    EDCell *mCell;
    EDWorkbook *mWorkbook;
    ECMappingContext *mMappingContext;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mImporting;

}

+ (id)formulaHelperWithWorkbook:(id)arg1 withCell:(id)arg2 isImport:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg3;
     /* Encoded args for previous method: @20@0:4@8@12B16 */


- (id)initWithWorkbook:(id)arg1 withCell:(id)arg2 isImport:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg3;
     /* Encoded args for previous method: @20@0:4@8@12B16 */

- (void)dealloc;
- (NSUInteger)resolveName:(id)arg1;
- (NSUInteger)resolveSheet:(id)arg1;
- (NSUInteger)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (NSUInteger)resolveFile:(id)arg1;
- (NSUInteger)resolveAddInLinkReference;
- (NSUInteger)addExternalAddInName:(id)arg1;
- (id)resolveTable:(id)arg1;
- (NSUInteger)resolveTableToSheetId:(id)arg1;
- (NSUInteger)resolveTableColumn:(id)arg1 columnName:(id)arg2;
- (BOOL)isCurrentSheet:(id)arg1;

@end
