//
//  SOFetcher.h
//  SOTopUsers
//
//  Created by Amit Barman on 10/5/16.
//  Copyright (c) 2016 Apollo Software All rights reserved.
//

#import <Foundation/Foundation.h>

#define SO_ITEMS @"items"
#define SO_USER_DISPLAY_NAME @"display_name"
#define SO_USER_BADGES @"badge_counts"
#define SO_USER_ACCOUNT_ID @"account_id"
#define SO_USER_IMAGE_URL @"profile_image"
#define SO_USER_LINK_URL @"link"
#define SO_USER_REPUTATION @"reputation"
#define SO_USER_AGE @"age"
#define SO_USER_LOCATION @"location"

@interface SOFetcher : NSObject

+ (NSDictionary *)executeSOFetch;
+ (NSDictionary *)executeSOFetch:(NSString *)URL;
+ (NSDictionary *)executeSOSearch:(NSString *)searchCriteria;
+ (NSArray *)topSOUsers;
+ (NSArray *)searchSOUsers:(NSString * )seachCriteria;
+ (NSDictionary *)getUser:(NSArray *)user atIndex:(NSUInteger)index;
+ (void)setSearchCriteria:(NSString *)searchCriteria;
+ (NSString *) fetchSearchCriteria;
@end
