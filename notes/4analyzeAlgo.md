### Write and Analyze ALlgorithm

```c

algorithm swap(a,b)
==== BEGIN
{
    temp := a;
    a := b;
    b := temp;
}
==== END
```

### Analyze
Base analysis on
- Time
to be time efficient and in terms of a time fn.
- Space
Amount of memory space it consumes
- N/w Consumption
Amount of data it transfers and consumes
- Power Consumption
- CPU Registers
Register mem. algo is consuming


### Analysing a program
```c

algorithm swap(a,b)
==== BEGIN
{
    temp := a;  = 1
    a := b;     = 1
    b := temp;  = 1
}
==== END
```

- Time 
 f(n) = 3 //constant value
- Space
3 Variables a,b,temp
 S(n) = 3
 O(1) 
