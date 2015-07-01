#ifndef __ENCDEC_H__
#define __ENCDEC_H__

#include <openssl/md5.h>

class CMd5
{
public:
	static void MD5_Calculate(const char *pContent, unsigned int nLen, char *md5);
};

#endif

