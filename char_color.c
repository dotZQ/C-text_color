#include <stdio.h>
int main(){
	printf("This is 3 and 4 bits.\n");
	for(int i=0;i<108;i++){
		printf("\t\033[%dm %d\033[m\n",i,i);
	}
	printf("This is 8 bits.\n");
	for(int i=0;i<256;i++){
		printf("\t\033[48;5;%dm %d \033[0m\n",i,i);
	}
	printf("\a"); // For some nice sound
	return 0;
}
