/*
Matlab Filter function in C by Chen Yangquan. Hämtad från
http://mechatronics.ece.usu.edu/yqchen/filter.c/FILTER.C
2015-02-13
*/

/*
 FILTER.C
 An ANSI C implementation of MATLAB FILTER.M (built-in)
 Written by Chen Yangquan <elecyq@nus.edu.sg>
 1998-11-11
 */


/*
 void filter(int,float *,float *,int,float *,float *);
 */

filter(int ord, float *a, float *b, int np, float *x, float *y)
{
    int i,j;
    y[0]=b[0]*x[0];
    for (i=1;i<ord+1;i++)
    {
        y[i]=0.0;
        for (j=0;j<i+1;j++)
            y[i]=y[i]+b[j]*x[i-j];
        for (j=0;j<i;j++)
            y[i]=y[i]-a[j+1]*y[i-j-1];
    }
    /* end of initial part */
    for (i=ord+1;i<np+1;i++)
    {
        y[i]=0.0;
        for (j=0;j<ord+1;j++)
            y[i]=y[i]+b[j]*x[i-j];
        for (j=0;j<ord;j++)
            y[i]=y[i]-a[j+1]*y[i-j-1];
    }
} /* end of filter */





#include<stdio.h>
#define ORDER 3
#define NP 1001

