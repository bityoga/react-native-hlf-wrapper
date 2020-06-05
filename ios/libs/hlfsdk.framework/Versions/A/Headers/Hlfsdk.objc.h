// Objective-C API for talking to github.com/achak1987/hlf-driver Go package.
//   gobind -lang=objc github.com/achak1987/hlf-driver
//
// File is generated by gobind. Do not edit.

#ifndef __Hlfsdk_H__
#define __Hlfsdk_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class HlfsdkWallet;

@interface HlfsdkWallet : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull cert;
@property (nonatomic) NSString* _Nonnull certName;
@property (nonatomic) NSString* _Nonnull privKeyName;
@end

FOUNDATION_EXPORT NSString* _Nonnull HlfsdkEnroll(NSString* _Nullable user, NSString* _Nullable secret, NSString* _Nullable connectionProfilePath, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull HlfsdkHello(void);

FOUNDATION_EXPORT NSString* _Nonnull HlfsdkInvoke(NSString* _Nullable user, NSString* _Nullable connectionProfilePath, NSString* _Nullable channelName, NSString* _Nullable chaincodeName, NSString* _Nullable fcn, NSString* _Nullable args, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSString* _Nonnull HlfsdkQuery(NSString* _Nullable user, NSString* _Nullable connectionProfilePath, NSString* _Nullable channelName, NSString* _Nullable chaincodeName, NSString* _Nullable fcn, NSString* _Nullable args, NSError* _Nullable* _Nullable error);

#endif