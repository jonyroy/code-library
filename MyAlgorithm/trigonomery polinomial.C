/*
---------------------------------------------------------------------------
 Algo5-5.c   C program for implementing Algorithm 5.5
 Algorithm translated to  C  by: Dr. Norman Fahrer
 IBM and Macintosh verification by: Daniel Mathews

 NUMERICAL METHODS: C Programs, (c) John H. Mathews 1995
 To accompany the text:
 NUMERICAL METHODS for Mathematics, Science and Engineering, 2nd Ed, 1992
 Prentice Hall, Englewood Cliffs, New Jersey, 07632, U.S.A.
 Prentice Hall, Inc.; USA, Canada, Mexico ISBN 0-13-624990-6
 Prentice Hall, International Editions:   ISBN 0-13-625047-5
 This free software is compliments of the author.
 E-mail address:       in%"mathews@fullerton.edu"

 Algorithm 5.5 (Trigonometric Polynomials).
 Section   5.4, Fourier Series and Trigonometric Polynomials, Page 311
---------------------------------------------------------------------------
*/
/*
---------------------------------------------------------------------------

 Algorithm 5.5 (Trigonometric Polynomials).

 To construct and evaluate the trigonometric polynomial of
 order M of the form

                  a_0       M
        P(x)  =  -----  +  sum  [a_j * cos(jx) + b_j * sin(jx)],
                   2       j=1

 based on the  N  equally spaced values  x_k = -Pi + 2*Pik/N.
 The construction is possible provided that  2*M + 1 <= N.

---------------------------------------------------------------------------
*/


#define DIM 100  /* Maximum number of points */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*  Main program for algorithm 5.5  */
int  main()
  {
    int J,K;                   /* Loop counters                   */
    int M;                     /* INPUT : degree of trig. polyn.  */
    int N;                     /* INPUT : number of data points   */
    double X[DIM];             /* INPUT : X data points           */
    double Y[DIM];             /* INPUT : Y Data points           */
    double Max;                /* Maximum degree possible         */
    double XV;                 /* INPUT : independent variable    */
    double A[DIM],B[DIM];      /* Coefficients                    */
    double T;                  /* temporary variable              */
    double P;                  /* value of polynomial             */
    double tmp;                /* temporary variable              */
    int Auto;                  /* switch                          */
    printf("For an example try the example on page 311 !:\n");
    printf("===========================================\n");
    printf("Maximum number of points is 100 ! :\n");
    printf("Please enter number of points [12 in example]:\n");
    scanf("%d",&N);
    if(N > 100)
    {
        printf("Not more than 100 points. Try again.\n");
        exit(0);
    }
    printf("===========================================\n");
    printf(" \n");
    printf("Please enter degree of polynomial [5 in example] :\n");
    scanf("%d",&M);
    printf("--------------------------------------------\n");
    Max = (int) ( (N-1) / 2);
    if( M > Max) M = Max;
    printf("Degree of polynomial is: %d\n",M);
    printf("--------------------------------------------\n");
    printf("Data input : type for example : 2.0, 3.0\n");
    printf(" \n");
    for(J = 1; J <= N; J++)
    {
       tmp = -3.141592654 + J * 3.141592654 / 6.0;
       printf("----------------------------------------------\n");
       printf("Give data  x,y  pair number %d\n",J);
                 printf("No. %d in example : %lf %lf\n", J, tmp, tmp/2.0);
       printf("Type 1 if you want this entered automatically\n");
       printf("Otherwise enter your input like : 2.0, 4.0\n");
                 scanf("%d", &Auto);
       if(Auto != 1)
        scanf("%lf, %lf", &X[J-1], &Y[J-1]);
       else
                 {
                      X[J-1] = tmp;
                      Y[J-1] = tmp / 2.0;
                 }

       printf("(x,y) pair Number %d is : %lf %lf\n", J, X[J-1], Y[J-1]);

    }
    printf("--------------------------------------------\n");
    printf("Please enter Independent Variable X for P(X):\n");
    scanf("%lf",&XV);
    printf("The independent variable is : %lf\n",XV);
    printf("--------------------------------------------\n");
    printf("\n");
    /* initialize the coefficients : */
    for(K = 0; K < DIM; K++) A[K] = B[K] = 0;
    for(K = 1; K <= N; K++)
    {
        A[0] = A[0] + Y[K-1];
        for(J = 1; J <= M; J++)
        {
            T = J * X[K-1];
            A[J] = A[J] + Y[K-1] * cos(T);
            B[J] = B[J] + Y[K-1] * sin(T);
        }
    }
    for(J = 0; J <= M; J++)
    {
        A[J] = 2.0 * A[J]/N;
        B[J] = 2.0 * B[J]/N;
        printf("Coefficient a%d = %lf\n", J, A[J]);
        printf("                        Coefficient b%d = %lf\n", J, B[J]);

    }
    P = A[0] / 2.0;
    for(J = 1; J <= M; J++)
    {
        P = P + A[J] * cos(J*XV) + B[J] * sin(J*XV);
    }
    printf("----------------------------------------------\n");
    printf("The value of the trig. poly. P(x) is : %lf\n", P );
    printf("----------------------------------------------\n");
}   /* end main program */

