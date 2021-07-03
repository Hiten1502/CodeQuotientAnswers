# include<bits/stdc++.h>

void primeFactors(int n){
  // Write your code here
  while (n%2 == 0) 
    { 
        printf("%d\n", 2); 
        n = n/2; 
    } 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            printf("%d\n", i); 
            n = n/i; 
        } 
    } 
    if (n > 2) 
        printf ("%d\n", n); 
}