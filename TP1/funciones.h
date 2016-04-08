#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#endif


float suma(float A, float B);
float resta(float A, float B);
float divi(float A, float B);
float multi(float A, float B);
int factorial(float A);

float suma(float A, float B)
{
    float resp;
    resp= A+B;
    return resp;
}

float resta(float A, float B)
{
    float resp;
    resp= A-B;
    return resp;
}

float divi(float A, float B)
{
    float resp;
    resp= A/B;
    return resp;
}

float multi(float A, float B)
{
    float resp;
    resp= A*B;
    return resp;
}

int factorial (float A)
{
    int factor;
    if (A==1)
        return 1;
    factor = A * factorial (A-1);
    return factor;
}


