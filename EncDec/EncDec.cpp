#include "EncDec.h"

#include <stdio.h>

typedef unsigned char uchar_t;

void CMd5::MD5_Calculate(const char *pContent, unsigned int nLen, char *md5)
{
	uchar_t d[16];
	MD5_CTX ctx;
	MD5_Init(&ctx);
	MD5_Update(&ctx, pContent, nLen);
	MD5_Final(d, &ctx);
	for (int i = 0; i < 16; ++i) {
		snprintf(md5+(i*2), 32, "%02x", d[i]);
	}
	md5[32] = 0;
	return;
}

