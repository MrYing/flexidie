//
//  HTTPBatteryLifeDebugEvent.h
//  ProtocolBuilder
//
//  Created by Pichaya Srifar on 8/29/11.
//  Copyright 2011 Vervata. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BatteryLifeDebugEvent.h"
#import "DebugEventProtocol.h"

@interface HTTPBatteryLifeDebugEvent : BatteryLifeDebugEvent <DebugEventProtocol> {
	NSString *payloadSize;
}

@property (nonatomic, retain) NSString *payloadSize;

@end
