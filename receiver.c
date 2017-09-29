#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
int str = 0, t = 0;
void f1 (int signo) {

	t = 1;
	str *= 2;
	return;
}
void f11 (int signo) {

	t = 1;

	str *= 2;

	str += 1;

	return;
}
int main(int argc, char **argv){
	int pid , k;
	char i = 0;
	printf("pid is %d\n",pid = getpid());
	scanf("%d",&pid);

	signal(SIGINT , f1);
	signal(SIGILL , f11);

	while(0 == 0){

		if( t == 1 ){

			for (k = 0; k < 8; k ++){
				usleep(1000);
				fprintf(stdin," ");

			}
			for(k = 0; k < 8; k ++){
				i *= 2;
				i += str % 2;
				str /= 2;

			}

			printf("%c",i);
			i = 0;

			t = 0;
		}

		usleep(1000);
		fprintf(stdin,"\n");

	}

	return 0;
}
