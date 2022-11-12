# Empirical Formula

## Description

Calculate empirical formula (ratio of particles)

### Input Specification

1. Number of elements
2. Molar mass * n
3. Mass or percentage * n

### Output Specification

1. Original ratio
2. Empirical Formula

## Example 1

3 elements (C, H, O)  
molar mass: carbon 12.01, hydrogen 1.01, oxygen 16  
percentage: 58.8%, 9.80%, 31.4%

### Sample Input 1

``` console
3
12.01 1.01 16
58.8 9.8 31.4
```

### Output for Sample Input 1

``` console
2.49474 4.94419 1
5 10 2
```

## Example 2

4 elements (C, H, N, O)  
molar mass: 12.01 1.01 14.01 16.00  
percentage: 67.31% 6.98% 4.62% 21.10%

### Sample Input 2

``` console
4
12.01 1.01 14.01 16
67.31 6.98 4.62 21.10
```

### Output for Sample Input 2

``` console
16.9955 20.9571 1 3.99907
17 21 1 4
```

## More examples

``` console
Mass or percentage:
67.31 6.98 4.62 21.10
63.15 5.30 0 31.55
46.66 4.48 31.1 17.76
72.18 7.04 4.68 16.03
15.87 2.16 18.15 63.41
75.42 6.63 8.38 9.57
37.01 2.22 18.5 42.27
57.14 6.16 9.52 27.18
80.66 7.39 9.39 2.68
81.58 8.90 9.52 27.18
80.66 7.39 9.39 2.68
81.58 8.90 9.52 0
60.00 4.48 0 35.53
63.56 6.00 9.27 21.17

Answers:
17 21 1 4
8 8 0 3
7 8 4 2
18 21 1 3
3 5 3 9
21 22 2 2
7 5 3 6
14 18 2 5
120 131 12 3
20 26 2 5
120 131 12 3
10 13 1 0
9 8 0 4
8 9 1 2
```
