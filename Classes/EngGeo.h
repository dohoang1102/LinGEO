//
//  EngGeo.h
//  LinGO
//
//  Created by Mr.Woods on 8/2/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface EngGeo : NSObject {
	NSInteger *pk;
	NSString *eng;
	NSString *transcription;
	NSString *type;
	NSMutableArray *types;
	NSMutableArray *geo;
}

@property (nonatomic) NSInteger *pk;
@property (nonatomic, copy) NSString *eng;
@property (nonatomic, copy) NSString *transcription;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) NSMutableArray *types;
@property (nonatomic, retain) NSMutableArray *geo;

- (void) addGeo:(NSString *)geo;
- (void) addGeo:(NSString *)geo type:(NSString *)typeName;

@end
