/*
 *  ___FILENAME___
 *  ___PACKAGENAME___
 *
 *  Created by ___FULLUSERNAME___ on ___DATE___.
 *___COPYRIGHT___
 *
 */

#include <iostream>
#include "___PACKAGENAMEASIDENTIFIER___.h"
#include "___PACKAGENAMEASIDENTIFIER___Priv.h"

void ___PACKAGENAMEASIDENTIFIER___::HelloWorld(const char * s)
{
	 ___PACKAGENAMEASIDENTIFIER___Priv *theObj = new ___PACKAGENAMEASIDENTIFIER___Priv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void ___PACKAGENAMEASIDENTIFIER___Priv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

