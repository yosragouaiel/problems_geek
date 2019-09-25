# problems_geek


C++ 14


PROB 1 )


std::pair:

Implement different operations on pairs.

Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of five types 
1. a s x y (Adds a pair with string s and values x,y to the vector A at the end )
2. b (returns the size of the vector A)
3. c (prints space separated values of each element of the vector of pairs A)
4. d (sorts the pair's array with respect to the values x,y in ascending order)


Output:
The output for each test case will  be space separated integers denoting the results of each query . 

Constraints:
1<=T<=100
1<=Q<=100

Example:

Input
2
5
a ga 4 5 a ra 1 2 a sh 1 1 d c
4
a geeks 10 12  a code 11 11 b c

Output
sh 1 1 ra 1 2 ga 4 5 
2 geeks 10 12 code 11 11


Explanation :
For the first test case
There are five queries. Queries are performed in this order
1. a ga 4 5   --> vector contents {ga,4,5} 
2. a ra 1 2    --> vector contents {ga,4,5}, {ra,1,2}
3. a sh 1 1    --> vector contents are {ga,4,5}, {ra,1,2}, {sh,1,1}
4. d               --> vector get sorted as {sh,1,1}, {ra,1,2}, {ga,4,5}
5. c               --> vector values printed as 'sh 1 1 ra 1 2 ga 4 5 ' without quotes 

For the sec test case 
There are four queries. Queries are performed in this order
1. a geeks 10 12 --> vector A has {geeks,10,12}  
2. a code 11 11   --> vector A has {geeks,10,12}, {code,11,11}
3. b       --> prints the size of the vector A ie 2
4. c       --> prints the elements of the pair of vectors as 'geeks 10 12 code 11 11' without quotes.

PROB 2)

std::vector

The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of five types 
1. a x (Adds an element x to the vector A at the end )
2. b (Sorts the vector A in ascending order )
3. c (Reverses the vector A)
4. d (prints the size of the vector)
5. e (prints space separated values of the vector)
5. f  (Sorts the vector A in descending order)


Output:
The output for each test case will  be space separated integers denoting the results of each query . 

Constraints:
1<=T<=100
1<=Q<=100

Example:

Input
2
6
a 4 a 6 a 7 b c e
4
a 55 a 11 d e
 
Output
7 6 4
2 55 11

Explanation :
For the first test case
There are six queries. Queries are performed in this order
1. a 4 { Vector has 4  }
2. a 7 {vector has 7 }
3. a 6 {vector has 6}
4. b {sorts the vector in ascending order, vector now is 5 6 7}
5. c {reverse the vector }
6. e {prints the element of the vectors 7 6 4}

For the sec test case 
There are four queries. Queries are performed in this order
1. a 55  (vector A has 55}
2. a 11  (vector A has 55 ,11}
3. d      (prints the size of the vector A ie. 2 )
4. e      (prints the elements of the vector A ie 55 11)

PROB 3 The Minimum Absolute Difference Algorithm of an Array

Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements. Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows

a, b are from arr
a < b
b – a equals to the minimum absolute difference of any two elements in arr

Example 1:
Input: arr = [4,2,1,3]
Output: [[1,2],[2,3],[3,4]]
Explanation: The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.


 
Example 2:
Input: arr = [1,3,6,10,15]
Output: [[1,3]]

Example 3:
Input: arr = [3,8,-10,23,19,-4,-14,27]
Output: [[-14,-10],[19,23],[23,27]]

Constraints:
2 <= arr.length <= 10^5
-10^6 <= arr[i] <= 10^6

Hints:
Find the minimum absolute difference between two elements in the array.
The minimum absolute difference must be a difference between two consecutive elements in the sorted array.
