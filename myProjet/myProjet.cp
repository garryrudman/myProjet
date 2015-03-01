/*
 *  myProjet.cp
 *  myProjet
 *
 *  Created by Garry Rudman on 01/03/2015.
 *  Copyright (c) 2015 Garry Rudman. All rights reserved.
 *
 */

#include "myProjet.h"
#include "myProjetPriv.h"

CFStringRef myProjetUUID(void)
{
	CmyProjet* theObj = new CmyProjet;
	return theObj->UUID();
}

CFStringRef CmyProjet::UUID()
{
	return CFSTR("0001020304050607");
}
