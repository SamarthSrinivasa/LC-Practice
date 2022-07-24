# LC-Practice (C++)
Leetcode solutions, tips and notes

# Arrays and Hashing: 

Contains dublicate: 

First thought: Sort, iterate, if appears twice through i == i -1, return true, else false

Notes: Sort works with begin and end, Remmeber to check vector content and not actual iteration, vector.at() and not vector()

Valid Anangram: 

First thought: Given both strings, sort both strings, if every char in the string matches, return true, else false

Notes: Returning false if strings are different sizes

Two Sum: 

First thought: For each iteration, check the whole array for anything that when added to the iteration, leads to the number, this is an O(n^2) solution

Notes: Cannot use same element twice - being the same iteration, still can have different iteration but same content in those iterations, created a new array by using vector<int> ans = {i, j}; to return the answer, if no match for the numbers is found, return the given array nums instead. 

# Two Pointers: 
