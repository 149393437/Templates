/*
 *  ___FILENAME___
 *  ___PACKAGENAME___
 *
 *  Created by ___FULLUSERNAME___ on ___DATE___.
 *___COPYRIGHT___
 *
 */

#include "___PACKAGENAMEASIDENTIFIER___.h"
#include "___PACKAGENAMEASIDENTIFIER___Priv.h"

CFStringRef ___PACKAGENAMEASIDENTIFIER___UUID(void)
{
	C___PACKAGENAMEASIDENTIFIER___* theObj = new C___PACKAGENAMEASIDENTIFIER___;
	return theObj->UUID();
}

CFStringRef C___PACKAGENAMEASIDENTIFIER___::UUID()
{
	return CFSTR("0001020304050607");
}
