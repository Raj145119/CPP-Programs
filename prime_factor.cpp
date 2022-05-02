#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void primeFactors(int n)
{
    int i;
    int pf_e=0,pf_o=0;
    int max=0;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        pf_e++;
        n = n/2;
    }
    max=pf_e;
    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            pf_o++;
            n = n/i;
        }
        if(max<pf_o){
            max=pf_o;
        }
        pf_o=0;
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        pf_o++;

    if(max<pf_o){
        max=pf_o;
    }
    if(max%2==0)
        printf("Strong Number");
    else
        printf("Weak Number");
}

/* Driver program to test above function */
int main()
{
    int n = 72;
    primeFactors(n);
    return 0;
}
