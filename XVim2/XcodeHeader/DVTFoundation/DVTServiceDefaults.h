//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTServiceDefaults : NSObject
{
    NSString *_serviceXcodeVersionString;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *serviceXcodeVersionString; // @synthesize serviceXcodeVersionString=_serviceXcodeVersionString;
@property(readonly, copy, nonatomic) NSString *serviceXcodeServerUserAgentString;
@property(readonly, copy, nonatomic) NSString *serviceXcodeUserAgentString;

@end

