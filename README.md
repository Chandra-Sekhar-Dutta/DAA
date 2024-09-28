<!DOCTYPE html>
<html>
<head>
    
</head>
<body>

<h1>Algorithms in C++</h1>

<p style="font-size: 18px;">Welcome to the GitHub repository dedicated to understanding and implementing various algorithms in C++. This repository contains code examples, explanations, and pseudo-codes for each algorithm to illustrate their practical applications and implementations.</p>

<h2>Table of Contents</h2>
<ol>
    <li><a href="#binary-search-while">Binary Search using While Loop</a></li>
    <li><a href="#binary-search-recursive">Binary Search using Recursive Function</a></li>
    <li><a href="#bubble-sort">Bubble Sort</a></li>
    <li><a href="#finding-max-min">Finding Maximum and Minimum in an Array</a></li>
    <li><a href="#insertion-sort">Insertion Sort</a></li>
    <li><a href="#knapsack-dp">Knapsack Problem using Dynamic Programming</a></li>
    <li><a href="#knapsack-greedy">Knapsack Problem using Greedy Algorithm</a></li>
    <li><a href="#linear-search">Linear Search in Array</a></li>
    <li><a href="#merge-sort">Merge Sort</a></li>
    <li><a href="#n-queen-backtracking">N-Queen Problem using Backtracking</a></li>
    <li><a href="#palindrome-recursion">Palindrome Check using Recursion</a></li>
    <li><a href="#prims-algorithm">Prim's Algorithm</a></li>
    <li><a href="#quick-sort">Quick Sort</a></li>
    <li><a href="#randomized-quick-sort">Randomized Quick Sort</a></li>
    <li><a href="#reverse-string-recursion">Reverse a String using Recursion</a></li>
    <li><a href="#selection-sort">Selection Sort</a></li>
    <li><a href="#finding-subsequence">Finding Subsequences</a></li>
    <li><a href="#finding-subset-sum">Finding Subset of Sum using Recursion</a></li>
    <li><a href="#finding-any-one-subset">Finding Any One Subset of the Sum using Recursion</a></li>
    <li><a href="#getting-started">Getting Started</a></li>
    <li><a href="#contact">Contact</a></li>
</ol>

<h2 id="binary-search-while">Binary Search using While Loop</h2>
<p style="font-size: 16px;">This file demonstrates the implementation of the binary search algorithm using a while loop. Binary search efficiently finds the position of a target value within a sorted array, operating in O(log n) time complexity.</p>
<pre>
<code>
Pseudo-code:
1. Initialize start and end indices
2. While start is less than or equal to end:
   a. Find the middle index
   b. If the middle element is the target, return the middle index
   c. If the middle element is greater than the target, update end to middle - 1
   d. If the middle element is less than the target, update start to middle + 1
3. If the target is not found, return -1
</code>
</pre>

<h2 id="binary-search-recursive">Binary Search using Recursive Function</h2>
<p style="font-size: 16px;">This file provides the implementation of the binary search algorithm using a recursive function. It offers a clean and elegant way to perform binary search on a sorted array.</p>
<pre>
<code>
Pseudo-code:
1. Define a recursive function with start, end, and target parameters
2. If start is greater than end, return -1 (base case)
3. Find the middle index
4. If the middle element is the target, return the middle index
5. If the middle element is greater than the target, call the function with end = middle - 1
6. If the middle element is less than the target, call the function with start = middle + 1
</code>
</pre>

<h2 id="bubble-sort">Bubble Sort</h2>
<p style="font-size: 16px;">This file demonstrates the bubble sort algorithm, a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.</p>
<pre>
<code>
Pseudo-code:
1. For i from 0 to n-1:
   a. For j from 0 to n-i-1:
      i. If arr[j] is greater than arr[j+1], swap them
2. End the outer loop
</code>
</pre>

<h2 id="finding-max-min">Finding Maximum and Minimum in an Array</h2>
<p style="font-size: 16px;">This file covers methods to find the maximum and minimum elements in an array. These operations are fundamental in many algorithms and data manipulation tasks.</p>
<pre>
<code>
Pseudo-code:
1. Initialize max and min with the first element of the array
2. For each element in the array:
   a. If the element is greater than max, update max
   b. If the element is less than min, update min
3. Return max and min
</code>
</pre>

<h2 id="insertion-sort">Insertion Sort</h2>
<p style="font-size: 16px;">This file demonstrates the insertion sort algorithm, which builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.</p>
<pre>
<code>
Pseudo-code:
1. For i from 1 to n-1:
   a. Set key to arr[i]
   b. Set j to i-1
   c. While j >= 0 and key < arr[j]:
      i. Set arr[j+1] to arr[j]
      ii. Decrement j by 1
   d. Set arr[j+1] to key
</code>
</pre>

<h2 id="knapsack-dp">Knapsack Problem using Dynamic Programming</h2>
<p style="font-size: 16px;">This file provides a solution to the Knapsack Problem using dynamic programming. It efficiently solves the problem of finding the most valuable combination of items that can fit in a knapsack of fixed capacity.</p>
<pre>
<code>
Pseudo-code:
1. Initialize a 2D array dp of size (n+1) x (W+1)
2. For i from 0 to n:
   a. For w from 0 to W:
      i. If i == 0 or w == 0, dp[i][w] = 0
      ii. If weight[i-1] <= w, dp[i][w] = max(value[i-1] + dp[i-1][w-weight[i-1]], dp[i-1][w])
      iii. Else, dp[i][w] = dp[i-1][w]
3. Return dp[n][W]
</code>
</pre>

<h2 id="knapsack-greedy">Knapsack Problem using Greedy Algorithm</h2>
<p style="font-size: 16px;">This file demonstrates the solution to the Knapsack Problem using a greedy algorithm. It provides an approximation to the problem by selecting the most valuable items first until the capacity is reached.</p>
<pre>
<code>
Pseudo-code:
1. Sort items by value-to-weight ratio in descending order
2. Initialize totalValue to 0
3. For each item:
   a. If the item's weight is less than or equal to the remaining capacity, add the item's value to totalValue and subtract the item's weight from capacity
   b. If the item's weight is greater than the remaining capacity, add the fractional value to totalValue and break
4. Return totalValue
</code>
</pre>

<h2 id="linear-search">Linear Search in Array</h2>
<p style="font-size: 16px;">This file covers the implementation of the linear search algorithm, which checks every element in the list until the desired element is found or the list ends. It operates in O(n) time complexity.</p>
<pre>
<code>
Pseudo-code:
1. For each element in the array:
   a. If the element is equal to the target, return the index
2. If the target is not found, return -1
</code>
</pre>

<h2 id="merge-sort">Merge Sort</h2>
<p style="font-size: 16px;">This file demonstrates the merge sort algorithm, a divide-and-conquer algorithm that divides the array into halves, sorts them, and then merges them back together. It operates in O(n log n) time complexity.</p>
<pre>
<code>
Pseudo-code:
1. Define mergeSort(arr):
   a. If the length of arr is greater than 1:
      i. Find the middle index
      ii. Divide the array into left and right halves
      iii. Recursively call mergeSort on left and right halves
      iv. Merge the sorted halves
2. Define merge(left, right):
   a. Initialize an empty result array
   b. While left and right are not empty:
      i. If left[0] is less than right[0], add left[0] to result and remove it from left
      ii. Else, add right[0] to result and remove it from right
   c. Append any remaining elements from left or right to result
3. Return result
</code>
</pre>

<h2 id="n-queen-backtracking">N-Queen Problem using Backtracking</h2>
<p style="font-size: 16px;">This file provides a solution to the N-Queen Problem using a backtracking algorithm. It places N queens on an N×N chessboard so that no two queens threaten each other.</p>
<pre>
<code>
Pseudo-code:
1. Define solveNQueens(N):
   a. Initialize board with 0s
   b. Call backtrack(row)
2. Define backtrack(row):
   a. If row equals N, print the solution
   b. For each column in the current row:
      i. If placing a queen is safe, place the queen and call backtrack(row + 1)
      ii. Remove the queen (backtrack)
</code>
</pre>

<h2 id="palindrome-recursion">Palindrome Check using Recursion</h2>
<p style="font-size: 16px;">This file covers the implementation of a recursive function to check if a string is a palindrome. It compares characters from both ends of the string moving towards the center.</p>
<pre>
<code>
Pseudo-code:
1. Define isPalindrome(str, start, end):
   a. If start is greater than or equal to end, return true
   b. If str[start] is not equal to str[end], return false
   c. Call isPalindrome with start + 1 and end - 1
</code>
</pre>

<h2 id="prims-algorithm">Prim's Algorithm</h2>
<p style="font-size: 16px;">This file implements Prim's algorithm for finding the minimum spanning tree in a weighted undirected graph. It efficiently adds edges to the spanning tree while avoiding cycles.</p>
<pre>
<code>
Pseudo-code:
1. Initialize a min-heap to store edges
2. Add the first vertex to the min-heap
3. While the min-heap is not empty:
   a. Extract the minimum edge
   b. If the edge connects to a vertex not already in the tree, add it to the MST
   c. Add all edges connected to the newly added vertex to the min-heap
</code>
</pre>

<h2 id="quick-sort">Quick Sort</h2>
<p style="font-size: 16px;">This file covers the implementation of the quick sort algorithm, which employs the divide-and-conquer approach to efficiently sort arrays. It operates in O(n log n) time complexity on average.</p>
<pre>
<code>
Pseudo-code:
1. Define quickSort(arr, low, high):
   a. If low < high:
      i. Find pivot using partition
      ii. Call quickSort on left and right partitions
2. Define partition(arr, low, high):
   a. Choose a pivot element
   b. Rearrange the array such that elements less than the pivot come before it and those greater come after
   c. Return the index of the pivot
</code>
</pre>

<h2 id="randomized-quick-sort">Randomized Quick Sort</h2>
<p style="font-size: 16px;">This file demonstrates the randomized quick sort algorithm, which enhances the standard quick sort by randomly selecting a pivot element, reducing the likelihood of worst-case scenarios.</p>
<pre>
<code>
Pseudo-code:
1. Define randomizedQuickSort(arr, low, high):
   a. If low < high:
      i. Randomly select a pivot
      ii. Call partition on the pivot
      iii. Call randomizedQuickSort on left and right partitions
</code>
</pre>

<h2 id="reverse-string-recursion">Reverse a String using Recursion</h2>
<p style="font-size: 16px;">This file implements a recursive method to reverse a string. It constructs the reversed string by combining the last character with the reversed substring.</p>
<pre>
<code>
Pseudo-code:
1. Define reverseString(str):
   a. If the length of str is 0, return an empty string
   b. Return last character of str + reverseString(str without last character)
</code>
</pre>

<h2 id="selection-sort">Selection Sort</h2>
<p style="font-size: 16px;">This file demonstrates the selection sort algorithm, which repeatedly selects the minimum element from the unsorted portion of the array and moves it to the sorted portion.</p>
<pre>
<code>
Pseudo-code:
1. For i from 0 to n-1:
   a. Set minIndex to i
   b. For j from i+1 to n:
      i. If arr[j] < arr[minIndex], update minIndex
   c. Swap arr[i] with arr[minIndex]
</code>
</pre>

<h2 id="finding-subsequence">Finding Subsequences</h2>
<p style="font-size: 16px;">This file demonstrates how to find all subsequences of a given array using recursion. Subsequences are generated by either including or excluding each element.</p>
<pre>
<code>
Pseudo-code:
1. Define findSubsequences(arr, index, current):
   a. If index equals the length of arr, print current
   b. Call findSubsequences with index + 1 (excluding the current element)
   c. Append arr[index] to current and call findSubsequences with index + 1 (including the current element)
</code>
</pre>

<h2 id="finding-subset-sum">Finding Subset of Sum using Recursion</h2>
<p style="font-size: 16px;">This file provides an implementation to find all subsets of a given sum using recursion. It explores combinations of elements to achieve the desired sum.</p>
<pre>
<code>
Pseudo-code:
1. Define findSubsetSum(arr, index, sum, current):
   a. If sum equals 0, print current
   b. If index equals the length of arr, return
   c. Call findSubsetSum with index + 1 and updated sum (excluding the current element)
   d. Append arr[index] to current and call findSubsetSum with index + 1 and updated sum (including the current element)
</code>
</pre>

<h2 id="finding-any-one-subset">Finding Any One Subset of the Sum using Recursion</h2>
<p style="font-size: 16px;">This file demonstrates how to find any one subset of a given sum using recursion. It stops searching once the first valid subset is found.</p>
<pre>
<code>
Pseudo-code:
1. Define findAnySubset(arr, index, sum, current):
   a. If sum equals 0, print current and return true
   b. If index equals the length of arr, return false
   c. If findAnySubset(arr, index + 1, sum, current) is true, return true
   d. Append arr[index] to current and check if findAnySubset(arr, index + 1, sum - arr[index], current) is true
   e. Remove last element from current
</code>
</pre>



<h2 id="contact">Contact</h2>
<p style="font-size: 16px;">For any inquiries, feel free to contact me via GitHub or at my email: <your_email@example.com>.</p>

</body>
</html>
