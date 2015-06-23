#include <iostream>
#include <cstdlib>
#include <mysql.h>

using namespace std;

int main(void)
{
	MYSQL conn;

	char *server = "192.168.1.110";
	//char *server = "localhost";
	unsigned int port = 3306;
	char *user = "teamtalk";
	char *password = "test@123";
	char *database = "teamtalk";
	char *socketname = "/tmp/mysql.sock";
	
	if (mysql_init(&conn) == NULL ) {
		cout << "Init mysql err!" << endl;
		return -1;
	}

	if (!mysql_real_connect(&conn, server, user, password, database, port,
		socketname, 0)) {
		cout << "Connection error " << mysql_errno(&conn) << ": "
		     << mysql_error(&conn) << endl;
		exit(1);
	} else {
		cout << "connect successful!" << endl;
	}

	mysql_close(&conn);

	return 0;
}
