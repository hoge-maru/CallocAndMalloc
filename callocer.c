#include <stdio.h>
#include <stdlib.h>

const int MBYTE = 1024*1024;

int main()
{
	while(1){

		int n = 0;
		scanf("%d", &n);
		n = n*MBYTE;
		char* p = (char *)calloc(n, 1);
		if(p != NULL){
			continue;
		}else{
			break;
		}
	}
}

