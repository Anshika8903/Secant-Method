#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define F(x) (x*x*x-x-4)
void main()
{
    int i=1;
    float a,b,c,fa,fb,fc;
    printf("enter the value of a: ");
    scanf("%f",&a);
    printf("\nenter the value of b: ");
    scanf("%f",&b);

    do
    {
       fa=F(a);
       fb=F(b);
       c=((a*fb-b*fa)/(fb-fa));
       fc=F(c);
       a=b;
       b=c;
       i++;
       printf("\niteration:%d",i);
       printf("\troot:%0.3f",c);
       printf("\t\tfunction value:%0.3f",fc);



    }while(fabs(fc)>e);


     printf("\n\napproximateroot:%0.3f",c);





}

