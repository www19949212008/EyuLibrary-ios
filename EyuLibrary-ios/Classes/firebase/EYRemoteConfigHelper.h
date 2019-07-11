//
//  BillingHelper-ios.h
//  ballzcpp-mobile
//
//  Created by apple on 2018/2/24.
//

#ifndef EYRemoteConfigHelper_h
#define EYRemoteConfigHelper_h
#import<StoreKit/StoreKit.h>
#import "Firebase.h"

@interface EYRemoteConfigHelper : NSObject

- (void) setupWithDefault:(NSDictionary *)defDict;
- (NSData*)getData:(NSString*) key;
- (NSString*)getString:(NSString*) key;
- (bool)getBoolean:(NSString*) key;
- (long)getLong:(NSString*) key;
- (double)getDouble:(NSString*) key;
+ (id) sharedInstance;
+ (NSData *)readFileWithName:(NSString *)name;
+ (NSDictionary *)readJsonFileWithName:(NSString *)name;
+ (bool)getBoolean:(NSDictionary*) dict;
+ (NSString*)getString:(NSDictionary*) dict;
+ (long)getLong:(NSDictionary*) dict;
+ (double)getDouble:(NSDictionary*) dict;
@end
#endif /* EYRemoteConfigHelper_h */
