//
//  OSMKSpatialLiteStorage.h
//  OSMKit
//
//  Created by David Chiles on 4/11/14.
//  Copyright (c) 2014 davidchiles. All rights reserved.
//

#import "OSMKStorage.h"

@class OSMKObject, OSMKNode, OSMKWay, OSMKRelation, OSMKUser, OSMKNote;

@interface OSMKSpatiaLiteStorage : OSMKStorage

- (OSMKNode *)nodeWithOsmId:(int64_t)osmId;
- (OSMKWay *)wayWithOsmId:(int64_t)osmId;
- (OSMKRelation *)relationWithOsmId:(int64_t)osmId;
- (OSMKUser *)userWithOsmId:(int64_t)osmId;
- (OSMKNote *)noteWithOsmId:(int64_t)osmId;

- (void)nodeWithOsmId:(int64_t)osmId completion:(void (^)(OSMKNode *node, NSError *error))completionBlock;
- (void)wayWithOsmId:(int64_t)osmId completion:(void (^)(OSMKWay *way, NSError *error))completionBlock;
- (void)relationWithOsmId:(int64_t)osmId completion:(void (^)(OSMKRelation *relation, NSError *error))completionBlock;
- (void)userWithOsmId:(int64_t)osmId completion:(void (^)(OSMKUser *user, NSError *error))completionBlock;
- (void)noteWithOsmId:(int64_t)osmId completion:(void (^)(OSMKNote *note, NSError *error))completionBlock;

- (void)saveOsmObject:(OSMKObject *)object;
- (void)saveUser:(OSMKUser *)user;
- (void)saveNote:(OSMKNote *)note;

- (void)saveOsmObject:(OSMKObject *)object completion:(void (^)(void))completion;
- (void)saveUser:(OSMKUser *)user completion:(void (^)(void))completion;
- (void)saveNote:(OSMKNote *)note completion:(void (^)(void))completion;


+ (NSString *)tableNameForObject:(id)object;

@end
