#include <iostream>
#include <string>
#include <stdio.h>

#include "EncDec.h"

using namespace std;

int main()
{
	string strInPass("teamtalk");
	char szMd5[33];
	//cout << "f**k" << endl;
	//cout << strInPass.length() << endl;
	//cout << strInPass << "--" << strInPass.length() << endl;
	CMd5::MD5_Calculate(strInPass.c_str(), strInPass.length(),szMd5);
	printf("szMd5 = [%s]\n", szMd5);
}

