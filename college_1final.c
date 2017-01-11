#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define R sqrt(pow(x2-x1,2)+pow(y2-y1,2))/2
#define AREA(u,v) u*v
int main(int argc,char *argv[])
{
	int x1,x2,x3,x4,y1,y2,y3,y4,x,y,temp;
	float e,l,h;
	x1=atoi(argv[0]);
	y1=atoi(argv[1]);
	x2=atoi(argv[2]);
	y2=atoi(argv[3]); 
	
	
	if(x1==x2&&y1==y2)
	printf("enter distict points");	
	else if(x1!=x2&&y1!=y2)
	{
		x3=x1; y3=y2; x4=x2; y4=y1;
		printf("other points are....x3=(%d,%d),x4=(%d,%d)",x3,y3,x4,y4);
		l=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
		h=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
		e=AREA(l,h);
		printf("area=%f\n",e);	
	}
	else if(y1==y2&&x1!=x2)
	{
		if(x2>x1)
		{
			for(x=x1;x<x2;x++)
			{
			for(y=y1+1;y<=(y1+y2)/2+R;y++)
			{
				if((y-y1)*(y-y1)+(x-x1)*(x-x1)+(x-x2)*(x-x2)+(y-y2)*(y-y2)==(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1))
				{
					x3=x;
					y3=y;
					x4=x1+x2-x3;
					y4=y1+y2-y3;
					printf("numbers are=(%d,%d),(%d,%d)\n",x3,y3,x4,y4);
					l=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));								
					h=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
					e=AREA(l,h);
					printf("area=%f\n",e);
				}
			}
			}
		}
		else	
		{
			temp=x2;
			x2=x1;
			x1=temp;
			for(x=x1;x<x2;x++)
			{
				for(y=y1+1;y<=(y1+y2)/2+R;y++)
				{
					if((y-y1)*(y-y1)+(x-x1)*(x-x1)+(x-x2)*(x-x2)+(y-y2)*(y-y2)==(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1))
					{
						x3=x;
						y3=y;
					x4=x1+x2-x3;
					y4=y1+y2-y3;
					printf("numbers are=(%d,%d),(%d,%d)\n",x3,y3,x4,y4);
					l=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));								
					h=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));								
					e=AREA(l,h);
					printf("area=%f\n",e);
					}
				}
			}
		}
	}
	else if(x1==x2&&y1!=y2)
	{
		if(y2>y1)
		{
			for(y=y1;y<y2;y++)
		{
			for(x=x1+1;x<=(x1+x2)/2+R;x++)
			{
				if((y-y1)*(y-y1)+(x-x1)*(x-x1)+(x-x2)*(x-x2)+(y-y2)*(y-y2)==(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1))
				{
					x3=x;
					y3=y;
					x4=x1+x2-x3;
					y4=y1+y2-y3;
					printf("numbers are=(%d,%d),(%d,%d)\n",x3,y3,x4,y4);
					l=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));								
					h=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));								
					e=AREA(l,h);
					printf("area=%f\n",e);
				}
			}
		}
		}
		else
		{
			temp=y2;
			y2=y1;
			y1=temp;	
			for(y=y1;y<y2;y++)
			{
				for(x=x1+1;x<=(x1+x2)/2+R;x++)
				{
					if((y-y1)*(y-y1)+(x-x1)*(x-x1)+(x-x2)*(x-x2)+(y-y2)*(y-y2)==(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1))
					{
						x3=x;
						y3=y;
					x4=x1+x2-x3;
					y4=y1+y2-y3;
					printf("numbers are=(%d,%d),(%d,%d)\n",x3,y3,x4,y4);
					l=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));								
					h=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));								
					e=AREA(l,h);
					printf("area=%f\n",e);
					}
				}
			}
		}
		
	}
	return 0;
}
