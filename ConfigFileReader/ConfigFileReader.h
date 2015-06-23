#ifndef CONFIGFILEREADER_H_
#define CONFIGFILEREADER_H_

#include <stdio.h>
#include <string.h>

#include <string>
#include <map>

typedef unsigned int uint32_t;

using namespace std;

class CConfigFileReader
{
public:
	CConfigFileReader(const char* filename);
	~CConfigFileReader();

	char* GetConfigName(const char* name);
	int SetConfigValue(const char* name, const char* value);

private:
	void _LoadFile(const char* filename);
	int _WriteFile(const char* filename = NULL);
	void _ParseLine(char* line);
	char* _TrimSpace(char* name);

	bool m_load_ok;
	map<string, string> m_config_map;
	string m_config_file;
};

#endif

