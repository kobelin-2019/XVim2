//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSProgressIndicator, NSTextField;

@interface IDETestTableCellView : NSTableCellView
{
    BOOL _enabled;
    BOOL _missing;
    NSTextField *_subtitleTextField;
    NSProgressIndicator *_progressIndicator;
    NSButton *_optionsButton;
}

@property(retain) NSButton *optionsButton; // @synthesize optionsButton=_optionsButton;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
- (void).cxx_destruct;
- (void)updateTextColors;
@property(getter=isMissing) BOOL missing;
@property(getter=isEnabled) BOOL enabled;
- (void)setBackgroundStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initSubclassIvars;

@end

