Time complaxity- how much tiume an algorithm takes as input size increases.
Big O notation- upper bound of time complexity of running time , it gives the worst-case senario 
for an algorithm. It describe the max time an 

1. o(1)- Constant time 
for(int i=0;i<5;i++){
    cout<<"Hello";
}
2. o(log n) - Logarathmic time - time grows logarathmitically as the input size increases, often 
see in alog thatbdivide the divide in half , like binary search 
3. o(n)- Linear Search - the time grows directly propotional to input size .
for(int i=0;i<n;i++){
    cout<<"Hello";
}
4. o(nlog n)- Linearathmic time , a mix of linear and logarathmic , quick and merge sort.
5. o(n^2)- Quadratic time - time grows prpotonally to the square 