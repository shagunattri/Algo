### Frequenct count method

```c
//sum of elements of array
algorithm sum(a,n)
{
    s = 0;                  = 1
    for(i=0;i<n;i++){       = n + 1
    s = s+a[i];             = n
    }
    return s;               = 1
}                       ------------
                            2n + 3 = O(n)
```
`a` is array,`n` is the number

variables used a,n,s,i

A - n

n,s,i - 1

S(n) = n + 3 => o(n)


```c
// sum of two square matrices (order of nxn)

algorithm sum(a,b,n) 
{
    for(i = 0;i<n;i++0){                = n+1
        for(j = 0;j<n;j++){             = n*(n+1)
            c[i,j] = a[i,j] + b[i,j];   = n*n
            }                       ----------------
        }                           2n^2 + 2n + 1
}                                   O(n^2)
````
variables used are a,b,c,n,i,j
a,b,c - n^2

n,i,j - 1

S(n) = 3n^2 + 3 = O(n^2)


```c
//multiplication of two matrices
algorithm multiply(a,b,n)
{
    for(i=0;i<n;i++){                               = n+1
        for(j=0;j<n;j++){                           = (n+1)*n
            c[i,j] = 0;                             = n*n
            for(k=0;k<n;k++){                       = n*n*(n+1)
                c[i,j] = c[i,j] + a[i,k] * b[k,j];  = n*n*n
            }                                   ----------------
        }                                           f(n) = 2n^3 + 3n^2 + 2n + 1 = O(n^3)
    }
}
```

variables used are a,b,c = n^2

n,i,j,k = 1

S(n) = 3n^2 + 4 = O(n^2)
