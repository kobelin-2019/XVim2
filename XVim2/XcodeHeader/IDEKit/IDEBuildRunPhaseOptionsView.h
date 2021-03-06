//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IDEBuildSchemeAction, NSStackView;

@interface IDEBuildRunPhaseOptionsView : NSView
{
    IDEBuildSchemeAction *_runPhase;
    NSView *_contentView;
    NSStackView *_stackView;
}

@property __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) IDEBuildSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
- (void).cxx_destruct;
- (Class)loadConditionalViewClassFromExtensionIdentifier:(id)arg1 viewClassKey:(id)arg2 requiredSuperClass:(Class)arg3;
- (void)addExtraConfigurations;
- (id)initWithFrame:(struct CGRect)arg1;

@end

