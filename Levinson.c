#include <stats.h>

/* Calculate the Levinson-Durbin recursion for the autocorrelation
sequence R of length P+1 and return the autocorrelation coefficients
 a and reflection coefficients K. Autocorrelationen beräknar vi mha 
 DSP functionen autocorr, input is the input signal i ett block om */
 
void LevinsonRecursion(int P, double *input[], double *A, double *K)
{
	int samples = 160;//längden av blocken
	double R[P];
	autocorr(R, input, samples, P);
    double Am1[62];

    if(R[0]==0.0) { 
        for(unsigned int i=1; i<=P; i++) 
        {
            K[i]=0.0; 
            A[i]=0.0;
        }}
    else {
        double km,Em1,Em;
        unsigned int k,s,m;
        for (k=0;k<=P;k++){
            A[0]=0;
            Am1[0]=0; }
        A[0]=1;
        Am1[0]=1;
        km=0;
        Em1=R[0];
        for (m=1;m<=P;m++)                    //m=2:N+1
        {
            double err=0.0f;                    //err = 0;
            for (k=1;k<=m-1;k++)            //for k=2:m-1
                err += Am1[k]*R[m-k];        // err = err + am1(k)*R(m-k+1);
            km = (R[m]-err)/Em1;            //km=(R(m)-err)/Em1;
            K[m-1] = -float(km);
            A[m]=(float)km;                        //am(m)=km;
            for (k=1;k<=m-1;k++)            //for k=2:m-1
                A[k]=float(Am1[k]-km*Am1[m-k]);  // am(k)=am1(k)-km*am1(m-k+1);
            Em=(1-km*km)*Em1;                //Em=(1-km*km)*Em1;
            for(s=0;s<=P;s++)                //for s=1:N+1
                Am1[s] = A[s];                // am1(s) = am(s)
            Em1 = Em;                        //Em1 = Em;
        }
    }
    return;
}

