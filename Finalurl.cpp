#include <windows.h>
#include <stdio.h>
#include "sqlite3.h"
#pragma comment( lib, "sqlite3.lib" ) 

int getopen()
{

   sqlite3 *db;
   char *zErrMsg = 0;
   char szWinSxsPath[MAX_PATH] = {0};
   int rc=0;
               //GetEnvironmentVariable("LOCALAPPDATA", szWinSxsPath, sizeof(szWinSxsPath));

        strcat(szWinSxsPath,"C:\\Browser\\ChromeURL.db");
        printf(szWinSxsPath);
		 rc = sqlite3_open(szWinSxsPath, &db);
  rc = sqlite3_open_v2(szWinSxsPath,  &db,SQLITE_OPEN_FULLMUTEX|SQLITE_OPEN_CREATE|SQLITE_OPEN_READWRITE,NULL);
      rc = sqlite3_open("C:\\Browser URL.", &db);
        if( rc ) {
               
    fprintf(stderr, "Can't open database: %s\n", NULL);
      return(0);
   } else {
 printf("test1 \n");
   fprintf(stderr, "Opened database successfully\n");
   }
 sqlite3_close(db);
}

int main(int argc, char* argv[]) {
 
    printf("test \n");
   getopen();
}