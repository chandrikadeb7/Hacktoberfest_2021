#include <stdio.h>
#include <conio.h>
main() {
	int n , r, ncr( int , int);
	long npr( int , int);
	long double fact( int);
	printf(" Enter value of n & r \n");
	scanf("%d %d",&n , &r);
	if( n>= r) {
		printf( " %dC%d is %d\n", n,r,ncr( n , r));
		printf(" %dP%d  is %ld", n,r,npr( n, r));
	} else {
		printf("WRONG INPUT?? enter the correct input");
	}
}
long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
int ncr ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long npr( int n , int r) {
	return( fact( n) / fact( n- r));
}
