//
//  CSampleHTTPHandler.h
//  TouchHTTP
//
//  Created by Jonathan Wight on 03/11/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "CTCPServer.h"
#import "CRoutingHTTPConnection.h"

@class CQTCaptureSnapshot;

@interface CSampleHTTPHandler : NSObject <CTCPServerDelegate, CHTTPRequestRouter> {
	CQTCaptureSnapshot *snapshot;
}

- (BOOL)routeConnection:(CRoutingHTTPConnection *)inConnection request:(CFHTTPMessageRef)inRequest toTarget:(id *)outTarget selector:(SEL *)outSelector error:(NSError **)outError;

@end