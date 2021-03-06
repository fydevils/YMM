//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface HCBETCCreditZTRequestModel : NSObject
{
    _Bool _userNameEditable;
    _Bool _enableOpen;
    _Bool _authFourExist;
    _Bool _bankCardEditable;
    _Bool _idcardsEditable;
    _Bool _phoneEditable;
    long long _creditChannel;
    long long _productType;
    long long _originClient;
    NSString *_sourceApp;
    NSString *_authCode;
    NSString *_creditApplicantId;
    id _extData;
    NSString *_userName;
    NSString *_idcards;
    NSString *_mobile;
    NSString *_idcardsFrontPic;
    NSString *_idcardsBackPic;
    NSString *_idcardsFrontPicUrl;
    NSString *_idcardsBackPicUrl;
    NSString *_address;
    NSString *_addressForEtc;
    NSString *_idCardFontString;
    NSString *_idCardBackString;
    NSDictionary *_idCardFontMetaData;
    NSDictionary *_idCardBackMetaData;
    NSString *_bankCard;
    NSString *_bankName;
    NSString *_vanNumber;
    long long _vanPlateColor;
    NSString *_vehicleLicenseFront;
    NSString *_vehicleLicenseBack;
    NSString *_vehicleLicenseFrontUrl;
    NSString *_vehicleLicenseBackUrl;
    NSString *_owner;
    NSString *_useCharacter;
    NSString *_model;
    NSString *_engineNo;
    NSString *_vin;
    NSString *_vehicleTotalMass;
    NSString *_vehicleSeats;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool phoneEditable; // @synthesize phoneEditable=_phoneEditable;
@property(nonatomic) _Bool idcardsEditable; // @synthesize idcardsEditable=_idcardsEditable;
@property(nonatomic) _Bool bankCardEditable; // @synthesize bankCardEditable=_bankCardEditable;
@property(nonatomic) _Bool authFourExist; // @synthesize authFourExist=_authFourExist;
@property(nonatomic) _Bool enableOpen; // @synthesize enableOpen=_enableOpen;
@property(nonatomic) _Bool userNameEditable; // @synthesize userNameEditable=_userNameEditable;
@property(retain, nonatomic) NSString *vehicleSeats; // @synthesize vehicleSeats=_vehicleSeats;
@property(retain, nonatomic) NSString *vehicleTotalMass; // @synthesize vehicleTotalMass=_vehicleTotalMass;
@property(retain, nonatomic) NSString *vin; // @synthesize vin=_vin;
@property(retain, nonatomic) NSString *engineNo; // @synthesize engineNo=_engineNo;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *useCharacter; // @synthesize useCharacter=_useCharacter;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *vehicleLicenseBackUrl; // @synthesize vehicleLicenseBackUrl=_vehicleLicenseBackUrl;
@property(retain, nonatomic) NSString *vehicleLicenseFrontUrl; // @synthesize vehicleLicenseFrontUrl=_vehicleLicenseFrontUrl;
@property(retain, nonatomic) NSString *vehicleLicenseBack; // @synthesize vehicleLicenseBack=_vehicleLicenseBack;
@property(retain, nonatomic) NSString *vehicleLicenseFront; // @synthesize vehicleLicenseFront=_vehicleLicenseFront;
@property(nonatomic) long long vanPlateColor; // @synthesize vanPlateColor=_vanPlateColor;
@property(retain, nonatomic) NSString *vanNumber; // @synthesize vanNumber=_vanNumber;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *bankCard; // @synthesize bankCard=_bankCard;
@property(retain, nonatomic) NSDictionary *idCardBackMetaData; // @synthesize idCardBackMetaData=_idCardBackMetaData;
@property(retain, nonatomic) NSDictionary *idCardFontMetaData; // @synthesize idCardFontMetaData=_idCardFontMetaData;
@property(retain, nonatomic) NSString *idCardBackString; // @synthesize idCardBackString=_idCardBackString;
@property(retain, nonatomic) NSString *idCardFontString; // @synthesize idCardFontString=_idCardFontString;
@property(retain, nonatomic) NSString *addressForEtc; // @synthesize addressForEtc=_addressForEtc;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *idcardsBackPicUrl; // @synthesize idcardsBackPicUrl=_idcardsBackPicUrl;
@property(retain, nonatomic) NSString *idcardsFrontPicUrl; // @synthesize idcardsFrontPicUrl=_idcardsFrontPicUrl;
@property(retain, nonatomic) NSString *idcardsBackPic; // @synthesize idcardsBackPic=_idcardsBackPic;
@property(retain, nonatomic) NSString *idcardsFrontPic; // @synthesize idcardsFrontPic=_idcardsFrontPic;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *idcards; // @synthesize idcards=_idcards;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) id extData; // @synthesize extData=_extData;
@property(retain, nonatomic) NSString *creditApplicantId; // @synthesize creditApplicantId=_creditApplicantId;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(retain, nonatomic) NSString *sourceApp; // @synthesize sourceApp=_sourceApp;
@property(nonatomic) long long originClient; // @synthesize originClient=_originClient;
@property(nonatomic) long long productType; // @synthesize productType=_productType;
@property(nonatomic) long long creditChannel; // @synthesize creditChannel=_creditChannel;
- (void).cxx_destruct;

@end

