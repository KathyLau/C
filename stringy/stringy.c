#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int strlen(char *s) {
	int reti = 0;
	while (*s) {
	reti++;
	s++;
	}
	return reti;
}


char * strncpy(char * dest, char * source, int n) {

}

char strcat( char *dest, char *source) {
	
}

int strcmp(char *s1, char *s2) {
 	 }
	
char * strchr(char *s, char *c){
	
}



int main() {
  char g[5] = "str";
  printf( "Problem 1: %d\n", strlen(g) );
  printf( "Problem 2: %d\n" );
  printf( "Problem 3: %d\n" );
}