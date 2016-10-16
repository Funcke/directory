#include <stdio.h>
#include <errno.h>
//include file for errorhandling
#ifdef __unix__
//includes for Unix systems
	#include <sys/stat.h>
#else
//includes for windows systems
	#include <sys\stat.h>
#endif

int main(void){
	char dirpath[10000];
        //string wich holds the directory
	int errorhandl;
        //integer for catching the reutrn of mkdir
        
	fgets(dirpath, 10000, stdin);
        
	if(dirpath!=NULL){
                //testing if fgets was successful
		dirpath[strlen-2]='\0';
               //deleting the newline
                
		errorhandl=mkdir(dirpath);
                //creating the directory
                
		if(errorhandl==0){
                        //testing errno for an error
			printf("Sucessful");
		}else{
			printf("%s", strerror(errno));
		}
                
	}else{
		printf("Fehler bei Stringeingabe");
	}
        
	getchar();
        //giving the user time to read the output
	
	return 0;
}
