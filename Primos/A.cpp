#include<stdio.h>
#include<math.h>

#define N 1000000
 
 
int primesTable[N];
int onlyPrimesTable[N];
int k = 0;
 
 
void SieveOfEratosthenes(){
 
    int i = 2;
 
    /**
     * Set Every index in the table to be prime.
     */
    for(; i <= N; ++i)
        primesTable[i] = 1;
 
    /**
     * Base case 0 and 1 are not primes.
     */
    primesTable[0] = primesTable[1] = 0;
 
    int len = sqrt(N);
 
    /**
     * Set all multiples of a number to 0 since primes can't divisible by other than itself.
     */
    for(i = 2; i <= len; ++i){
        if(primesTable[i]){
            for( int k = i << 1; k <= N; k += i )
                primesTable[k] = 0;
        }
    }
 
 
    /**
     * This is not really a part of Sieve of Eratosthenes.
     * It checks if a number is prime then it moves primes
     * to another array which only contain primes and this
     * reduces the number of lookups.
     */
    for(i = 0; i <= N; ++i){
        if(primesTable[i])
            onlyPrimesTable[k++] = i;
    }
}
 
int main() {

    SieveOfEratosthenes();
 
 
    int n;
 
    /**
     * Input the number and check if its 0.
     */
    while(scanf("%d", &n) && n){
 
        int c = 0;
 
        /**
         * If the number is divisible by a prime then,
         * increase prime factor count.
         */
 
        for(int i = 0; i < k; ++i){
            if( n % onlyPrimesTable[i] == 0)
                ++c;
        }
 
        printf("%d : %d\n", n, c);
 
    }
 
 
    return 0;
}