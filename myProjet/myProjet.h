/*
 *  myProjet.h
 *  myProjet
 *
 *  Created by Garry Rudman on 01/03/2015.
 *  Copyright (c) 2015 Garry Rudman. All rights reserved.
 *
 */

extern "C" {
#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(default)

/* External interface to the myProjet, C-based */

CFStringRef myProjetUUID(void);

#pragma GCC visibility pop
}
