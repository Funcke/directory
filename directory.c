#include <stdio.h>
#include <stdlib.h>
#include <dir.h>
#include <errno.h>
#include <sys\stat.h>
#include <windows.h>
#include "killnewline.h"
int main(void){
	char dirname[10000];
	int errorhandl;
	fgets(dirname, 10000, stdin);
	if(dirname!=NULL){
		killnewline(dirname);
		errorhandl=mkdir(dirname);
		if(errorhandl==0){
			printf("Sucessful");
		}else{
			printf("%s", strerror(errno));
		}
	}else{
		printf("Fehler bei Stringeingabe");
	}
	getchar();
	return 0;
}