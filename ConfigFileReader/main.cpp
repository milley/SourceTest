#include <iostream>

#include "ConfigFileReader.h"

using namespace std;

int main()
{
	CConfigFileReader config_file("dbproxyserver.conf");
	
	char* listen_ip = config_file.GetConfigName("ListenIP");
	char* str_listen_port = config_file.GetConfigName("ListenPort");
	char* str_thread_num = config_file.GetConfigName("ThreadNum");
    	char* str_file_site = config_file.GetConfigName("MsfsSite");
    	char* str_aes_key = config_file.GetConfigName("aesKey");

	printf("ListenIP = %s\n", listen_ip);
	printf("ListenPort = %s\n", str_listen_port);
	printf("ThreadNum = %s\n", str_thread_num);
	printf("MsfsSite = %s\n", str_file_site);
	printf("aesKey = %s\n", str_aes_key);

	return 0;
}

