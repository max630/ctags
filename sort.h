/*
*   $Id: sort.h,v 1.1 2001/11/02 04:53:43 darren Exp $
*
*   Copyright (c) 1998-2001, Darren Hiebert
*
*   This source code is released for free distribution under the terms of the
*   GNU General Public License.
*
*   External interface to sort.c
*/
#ifndef _SORT_H
#define _SORT_H

/*
*   INCLUDE FILES
*/
#include "general.h"	/* must always come first */

/*
*   FUNCTION PROTOTYPES
*/
extern void catFile (const char *const name);

#ifdef EXTERNAL_SORT
extern void externalSortTags (const boolean toStdout);
#else
extern void internalSortTags (const boolean toStdout);
#endif

#endif	/* _SORT_H */

/* vi:set tabstop=8 shiftwidth=4: */
