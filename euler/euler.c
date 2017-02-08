#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multipleSum() {
	int reti = 0;
	for (int i = 1; i < 1000; i++) {
		if (i%3==0 || i%5==0) {
			reti+= i;
		}
	}
	return reti;
}


int isPrime(int num) {
	int i = 2;
	int sqrtnum = (int)sqrt(num);
	for(;i <= sqrtnum; i++) {
		if(num % i == 0) return 0;
	}
	return 1;
}

int lPrimeFac() {
	int q = 21;
	int currPF = 2;
	int curr=2;
	
	while (q > 1) {
		if (isPrime(curr)) {
			while(q % curr == 0){
				q /= curr;
			}
		currPF = curr;
		}
		curr++;
	}
	return currPF;
}

int smlMult() {
 int a = 2520;
 int n[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 int true = 0;
 while (true != 1) {
	 
	 for (int i = 0; i<20; i++) {
		if ((a%n[i]) != 0) {
			break;
		}
		if (i==19){
			return a;
		}
	 }
	 	 a++;
	 }
	 }
	
int sumSqDiff(){
	int sum;
	int sumSq;
	
}



int main() {
  printf( "Problem 1: %d\n", multipleSum() );
  printf( "Problem 2: %d\n", lPrimeFac() );
  printf( "Problem 3: %d\n", smlMult() );
}