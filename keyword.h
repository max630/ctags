/*
*   $Id: keyword.h,v 1.1 2001/11/02 04:53:43 darren Exp $
*
*   Copyright (c) 1998-2001, Darren Hiebert
*
*   This source code is released for free distribution under the terms of the
*   GNU General Public License.
*
*   External interface to keyword.c
*/
#ifndef _KEYWORD_H
#define _KEYWORD_H

/*
*   INCLUDE FILES
*/
#include "general.h"	/* must always come first */

#include "parse.h"

/*
*   FUNCTION PROTOTYPES
*/
extern void addKeyword (const char *const string, langType language, int value);
extern int lookupKeyword (const char *const string, langType language);
extern void freeKeywordTable (void);
#ifdef DEBUG
extern void printKeywordTable (void);
#endif

#endif	/* _KEYWORD_H */

/* vi:set tabstop=8 shiftwidth=4: */
