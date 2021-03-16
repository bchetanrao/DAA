# Assignment-4

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019018  |   B Chetan Rao | bchetanrao |
|    IIB2019019  |   Kalpana | Kalpana200 | 
|    IIB2019020  |   Devang Bharti | Horseman-droid  |

**Group No-**"7"

**Faculty Name-**"Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Given an array representing n positions along a straight line. Find k
(where k <= n) elements from the array such that the minimum
distance between any two (consecutive points among the k points) is
maximized. Solve using divide and conquer algorithm.

---
## How to use code
```
#Download project
git clone https://github.com/bchetanrao/DAA 
```
Project Initialize 
```
cd DAA
#create assignment-4 folder
mkdir assignment_04

#go to assignment-4
cd assignment_04

#Create file
touch readme.md
touch code.c
.
.
```
---

Run the code
```
gcc code.c
```
Output
```
Largest Minimum Distance
```
---

**Test case**

Find max
```
Test Case-1
Input:
6
2 4 8 0 2 1
Out:
8
#--------------------------#
Test Case-2
Input:
6
2 4 8 0 2 1
Out:
8
```

---

### Theory
The Solution to this problem is based on Binary Search which uses the Divide and Conquer algorithm technique. Here, We first sort the array. Now we know that the maximum possible value result is arr[n-1] – arr[0] (for k = 2). We do binary search for maximum result for given k. We start with the middle of maximum possible result. If middle is a feasible solution, we search on right half of mid. Else we search is left half. To check feasibility, we place k elements under given mid-distance.

---

### Analysis

**Time Complexity**

A quick and simplified answer is that Lorem Ipsum refers to text that the DTP (Desktop Publishing) industry use as replacement text when the real text is not available. Lorem Ipsum is dummy text which has no meaning however looks very similar to real text.

**Space Complexity**

A quick and simplified answer is that Lorem Ipsum refers to text that the DTP (Desktop Publishing) industry use as replacement text when the real text is not available. ... Lorem Ipsum is dummy text which has no meaning however looks very similar to real text.

---

### References

https://www.geeksforgeeks.org/place-k-elements-such-that-minimum-distance-is-maximized/
