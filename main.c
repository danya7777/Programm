#include <stdio.h>

int main() {
	char type;
	printf("Square or circle?(s/c)");	
	scanf("%c", &type);
	if(type=='s') {
		    for(int i =1;i<=25;i++){
        printf("*");
        if(i==5||i==10||i==15||i==20) {
            printf("\n");
        }
    }
    printf("\n");
	}else if(type=='c') {
		for(int i = 1;i<=24;i++){
		if(i==3||i==7||i==13||i==19||i==23) {
			printf("\n");
		}
		if(i==1||i==23) {
			printf("  ");
		}
		if(i==3||i==19) {
			printf(" ");
		}
		printf("+");
	}
	printf("\n");
	}else{
	return 0;
	}
	return 0;
}
