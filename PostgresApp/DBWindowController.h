//
//  DBWindowController.h
//  PostgresApp
//
//  Created by thiago on 12/23/14.
//  Copyright (c) 2014 thiagobrandam. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class PGConnection;

@interface DBWindowController : NSWindowController

- (instancetype)initWithConnection:(PGConnection *)connection;
- (PGConnection *)connection;
- (void)setConnection:(PGConnection*)connection;

@end
