#Editorial

The first thing to figure out is, which trees are getting blocked. A tree is not visible, if there is one or more tree lying on the line joining that tree with the origin. If the forest is considered to be the 2D coordinate system, it means that for every unique slope of a line passing through the origin, there is exactly one tree visible. For example for a slope of 1/1, only the tree at (1,1) is visible and (2,2) (3,3) etc are not visible. The problem therefore boils down to finding the maximum number of fractions in reduced form such that both the denominator and numerator are less than or equal to (n-1)/2. For example for n=7, the allowed fractions consist of 1/2, 3/2, 1/3 etc. We also have to take into account all four quadrants and the points (1,0), (0,1), (-1,0), (0,-1) since they have zero or infinite slope and can be treated as special cases. 
A naive approach might be to take all the numbers from 1 to  (n-1)/2 and find all the coprime integers for every number. However this would not be efficient. 
A more efficient approach is by using Euler's totient function. F(n) = number of natural numbers less than n that are coprime to n. (where F is Euler's totient function).
A property of F(n) is, F(n) = (1-1/p_1)*(1-1/p_2)*(1-1/p_3)*... , where p_i are primes that appear in the prime factorization of n. 
Also F(m*n) = F(m)*F(n).
F(1) is taken to be 1.

