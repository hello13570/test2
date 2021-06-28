# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int main(int argc, char *argv[]){

	int a, b,c ;
	double x,x1,x0;

	if(argc!=4){
		printf("Need optrions\n");
		return 0;
	}

	for(a=0; a< argc; a++);
		printf("argv[%d]\t%s\n",a,argv[a]);


	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);

	x0 = sqrt(b*b - 4*a*c);

	x = (-b-x0)/ (2*a);
	printf("%f\n",x);
	x1 = (-b+x0) / (2*a);
	printf("%f\n",x1);
	return 0;
}

	





