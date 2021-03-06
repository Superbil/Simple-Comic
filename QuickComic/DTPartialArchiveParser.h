//
//  DTPartialArchiveParser.h
//  QuickComic
//
//  Created by Alexander Rauchfuss on 7/12/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class XADArchiveParser, XADString;

NS_ASSUME_NONNULL_BEGIN

@interface DTPartialArchiveParser : NSObject 

- (instancetype)initWithPath:(NSString *)archivePath searchString:(NSString *)search;
@property (readonly, copy, nullable) NSData *searchResult;

-(void)archiveParser:(XADArchiveParser *)parser foundEntryWithDictionary:(NSDictionary *)dict;
-(BOOL)archiveParsingShouldStop:(XADArchiveParser *)parser;

@end

NS_ASSUME_NONNULL_END