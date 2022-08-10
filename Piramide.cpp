#include<stdio.h>
 
void fuerzaBruta();
void pro();
void nivelMamador();
 
int main () {
    
    nivelMamador();
}

void nivelMamador(){
	int nivel = 4;
	for(int i = 1; i <= nivel; i++){
		int n = 0;
		for(int j = 1; j <= nivel + i - 1; j++)
			printf(j <= nivel - i ? " " : "%i", j <= nivel - i ? 0 : j <= nivel ? ++n : --n);			
		printf("\n");
	}
	
}

void nivelPro(){
	
	int nivel = 4;
	for(int i = 1; i <= nivel; i++){
		int n = 0;
		for(int j = 1; j <= (nivel-i)+(i)+(i-1); j++){
			if(j<=nivel-i)
				printf(" ");
			else if(j <= nivel)
				printf("%i", ++n);
			else
				printf("%i", --n);
			
		}
			
		printf("\n");
	}
}

void nivelNoob(){
	int nivel = 4;
    for(int i = 1; i <= nivel; i++)
    {
    	for(int j = 0; j<nivel-i; j++)
    		printf(" ");
    	for(int j = 1; j <= i; j++){
    		printf("%i", j);
		}
		
		for(int j = i-1; j > 0; j--){
    		printf("%i", j);
		}
			
    	printf("\n");
	}
}


//   1
//  121
// 12321
//1234321
