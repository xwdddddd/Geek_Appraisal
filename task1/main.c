#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double y=2;
	printf("enter your number:%d",y);
	//scanf("%lf",&y);
	printf("\tx\t\ty\n",y);
	double x=0;
	for(printf("\t%lf\t%lf\n",x,y);y-y*0.999>=0.001;y+0)
	{
		x=x+0.001;
		y=y*0.999;
		printf("\t%lf\t%lf\n",x,y);
	}
	return 0;
}

