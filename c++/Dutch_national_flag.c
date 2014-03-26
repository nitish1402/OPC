#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*
 * The Dutch national flag problem.
 * Given an array of REDs, WHITEs and BLUES,
 * separate them out so that the REDs come first,
 * then the WHITEs and last the BLUEs.  The only
 * operations we are allowed to do on the array
 * are test colors of elements and swap pairs of
 * elements.  An optimal solution would do one test
 * and at most one swap per element.
 *
 * E W Dijkstra is inordinately fond of this problem,
 * which is nevertheless useful, for example to
 * do the partitioning step of Quicksort.
 *
 * The array is divided into four segments
 *	| RED | WHITE | GREY | BLUE |
 * Pointers white, grey and blue point at
 * the first element of the appropriate segment.
 * (The reds are at the beginning of the array.)
 * Initially, the greys encompass the whole array,
 * the other segments being empty.  We loop through the
 * grey elements, swapping each into the appropriate
 * segment of the array.
 *
 * loop invariant:
 *	All elements *[flag,white)==RED
 *	All elements *[white,grey)==WHITE
 *	All elements *[blue,flag+nflag)==BLUE
 * Termination condition, no elements in [grey,blue).
 * Termination proof:
 *	each case either increments grey or
 *	decrements blue, moving them closer
 * 	together.
 */
#define	RED	0
#define	WHITE	1
#define	BLUE	2
void dnf(int flag[], int nflag){
	int *white, *grey, *blue, t;
	white=&flag[0];
	grey=&flag[0];
	blue=&flag[nflag];
	while(grey!=blue) switch(*grey){
	case RED:
		t=*grey;
		*grey=*white;
		*white=t;
		white++;
		grey++;
		break;
	case WHITE:
		grey++;
		break;
	case BLUE:
		--blue;
		t=*grey;
		*grey=*blue;
		*blue=t;
		break;
	}
}
#define	NFLAG	73
main(void){
	int i, nflag;
	int flag[NFLAG];
	for(nflag=0;nflag<=NFLAG;nflag++){
		for(i=0;i!=nflag;i++) flag[i]=rand()%3;
		dnf(flag, nflag);
		for(i=0;i!=nflag;i++) putchar("R B"[flag[i]]);
		printf(".\n");
	}
	exit(0);
}
