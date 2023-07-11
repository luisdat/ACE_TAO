#include "tao/Exception.h"

#ifndef _REQUESTENV
#define _REQUESTENV

// Base class in order to store the last user exception
class RequestEnv {
	public:
		virtual ~RequestEnv() {}

		virtual void environment(CORBA::Exception &ex)=0;

		virtual CORBA::Exception* environment()=0;
};


#endif
