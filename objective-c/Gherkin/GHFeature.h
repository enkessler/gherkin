﻿#import "GHHasLocationProtocol.h"
#import "GHHasDescriptionProtocol.h"
#import "GHHasTagsProtocol.h"

@class GHTag;
@class GHLocation;
@class GHBackground;
@class GHScenarioDefinition;
@class GHComment;

@interface GHFeature : NSObject <GHHasLocationProtocol, GHHasDescriptionProtocol, GHHasTagsProtocol>

@property (nonatomic, readonly) NSArray<GHTag *>                * tags;
@property (nonatomic, readonly) GHLocation                      * location;
@property (nonatomic, readonly) NSString                        * language;
@property (nonatomic, readonly) NSString                        * keyword;
@property (nonatomic, readonly) NSString                        * name;
@property (nonatomic, readonly) NSString                        * desc;
@property (nonatomic, readonly) GHBackground                    * background;
@property (nonatomic, readonly) NSArray<GHScenarioDefinition *> * scenarioDefinitions;
@property (nonatomic, readonly) NSArray<GHComment *>            * comments;

- (id)initWithTags:(NSArray<GHTag *> *)theTags location:(GHLocation *)theLocation language:(NSString *)theLanguage keyword:(NSString *)theKeyword name:(NSString *)theName description:(NSString *)theDescription background:(GHBackground *)theBackground scenarioDefinitions:(NSArray<GHScenarioDefinition *> *)theScenarioDefinitions comments:(NSArray<GHComment *> *)theComments;

@end
