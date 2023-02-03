#include<stdio.h>
#include<string.h>

main(){

	char string[50]; 
	int i,lenght,t=0,t1=0;

	while(fgets(string, 50, stdin)) {
		lenght = strlen(string);

		for(i = 0; i < lenght; i++){
			if(string[i] == '_' ){
				if(t == 0){
					printf("<i>");
					t = 1;
				}
				else{
					printf("</i>");
					t = 0;
				}
			}
			else if(string [i] == '*'){
				if(t1 == 0 ){
					printf("<b>");
					t1 = 1;
				}
				else{
					printf("</b>");
					t1 = 0;
				}
			}
			else
				printf("%c", string[i]);
		}
	}	
	return 0;

}
