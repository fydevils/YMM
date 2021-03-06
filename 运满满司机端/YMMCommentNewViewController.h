//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMCommentTypeViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView, YMMCommentBubbleCell, YMMCommentCommitCell, YMMCommentDraftModel, YMMCommentInfoHeaderView, YMMCommentInitModel, YMMCommentModel, YMMCommentSuccessHeaderView, YMMCommentTagsManager, YMMCommentViewModel, YMMUpdateCommentModel;

@interface YMMCommentNewViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource, YMMCommentTypeViewDelegate>
{
    _Bool _needUpdateCommentDraft;
    CDUnknownBlockType _commentSuccessCallback;
    long long _commentVCType;
    long long _commentVCSceneType;
    YMMUpdateCommentModel *_updateCommentInfo;
    YMMCommentModel *_commentInfo;
    UITableView *_tableView;
    YMMCommentBubbleCell *_buddleCell;
    YMMCommentCommitCell *_commitCell;
    YMMCommentSuccessHeaderView *_successHeaderView;
    YMMCommentInfoHeaderView *_infoHeaderView;
    YMMCommentTagsManager *_tagsManager;
    long long _selectedType;
    NSArray *_selectedTagsArray;
    YMMCommentInitModel *_commentInitModel;
    YMMCommentDraftModel *_commentDraftModel;
    YMMCommentViewModel *_viewModel;
    NSString *_orderId;
    long long _rowNumber;
    NSMutableArray *_dataArrayHandle;
}

@property(retain, nonatomic) NSMutableArray *dataArrayHandle; // @synthesize dataArrayHandle=_dataArrayHandle;
@property(nonatomic) long long rowNumber; // @synthesize rowNumber=_rowNumber;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) YMMCommentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YMMCommentDraftModel *commentDraftModel; // @synthesize commentDraftModel=_commentDraftModel;
@property(retain, nonatomic) YMMCommentInitModel *commentInitModel; // @synthesize commentInitModel=_commentInitModel;
@property(copy, nonatomic) NSArray *selectedTagsArray; // @synthesize selectedTagsArray=_selectedTagsArray;
@property(nonatomic) long long selectedType; // @synthesize selectedType=_selectedType;
@property(nonatomic) _Bool needUpdateCommentDraft; // @synthesize needUpdateCommentDraft=_needUpdateCommentDraft;
@property(retain, nonatomic) YMMCommentTagsManager *tagsManager; // @synthesize tagsManager=_tagsManager;
@property(retain, nonatomic) YMMCommentInfoHeaderView *infoHeaderView; // @synthesize infoHeaderView=_infoHeaderView;
@property(retain, nonatomic) YMMCommentSuccessHeaderView *successHeaderView; // @synthesize successHeaderView=_successHeaderView;
@property(retain, nonatomic) YMMCommentCommitCell *commitCell; // @synthesize commitCell=_commitCell;
@property(retain, nonatomic) YMMCommentBubbleCell *buddleCell; // @synthesize buddleCell=_buddleCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YMMCommentModel *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) YMMUpdateCommentModel *updateCommentInfo; // @synthesize updateCommentInfo=_updateCommentInfo;
@property(nonatomic) long long commentVCSceneType; // @synthesize commentVCSceneType=_commentVCSceneType;
@property(nonatomic) long long commentVCType; // @synthesize commentVCType=_commentVCType;
@property(copy, nonatomic) CDUnknownBlockType commentSuccessCallback; // @synthesize commentSuccessCallback=_commentSuccessCallback;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tagsViewTextViewIsHidden:(_Bool)arg1;
- (void)deselectTagAtCommentType:(long long)arg1 selectedTags:(id)arg2;
- (void)submitCommentJournal;
- (void)pagePVJournal;
- (id)ymm_pageName;
- (_Bool)ymm_supportBackGesture;
- (void)commitButtonCanUse;
- (void)commentSuccess:(id)arg1;
- (void)submitComment;
- (void)dismissKeyBoard;
- (void)dismissDetailVC;
- (void)jumpToCommentFinishWeb:(id)arg1;
- (void)requestCommentInitData;
- (void)configDraft;
- (void)setupDraftDataTags;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

