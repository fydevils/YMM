//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "URBaseModel.h"

#import "URModelProtocol.h"

@class NSDictionary, NSString, URCommonModel;

@interface URPagePVActionModel : URBaseModel <URModelProtocol>
{
    URCommonModel *_commonData;
    NSString *_pgn;
    NSString *_fr;
    NSString *_dt;
    NSDictionary *_values;
    NSString *_path;
    NSString *_from_eid;
}

@property(copy, nonatomic) NSString *from_eid; // @synthesize from_eid=_from_eid;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *dt; // @synthesize dt=_dt;
@property(copy, nonatomic) NSString *fr; // @synthesize fr=_fr;
@property(copy, nonatomic) NSString *pgn; // @synthesize pgn=_pgn;
@property(retain, nonatomic) URCommonModel *commonData; // @synthesize commonData=_commonData;
- (void).cxx_destruct;
- (void)logMsg;
- (_Bool)saveWithDB:(id)arg1 uuid:(id)arg2;
- (void)save2DBWithCompletedBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

