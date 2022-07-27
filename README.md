# LC-Practice (C++)
Leetcode solutions, tips and notes

# Arrays and Hashing: 

## Contains dublicate: 

First thought: Sort, iterate, if appears twice through i == i -1, return true, else false

Notes: Sort works with begin and end, Remmeber to check vector content and not actual iteration, vector.at() and not vector()

## Valid Anangram: 

First thought: Given both strings, sort both strings, if every char in the string matches, return true, else false

Notes: Returning false if strings are different sizes

## Two Sum: 

First thought: For each iteration, check the whole array for anything that when added to the iteration, leads to the number, this is an O(n^2) solution

Notes: Cannot use same element twice - being the same iteration, still can have different iteration but same content in those iterations, created a new array by using vector<int> ans = {i, j}; to return the answer, if no match for the numbers is found, return the given array nums instead. 

## Group Anagrams (Realized I need understanding and experience of how to use a map in c++, will review first before attempting) : 

First thought: Reviewed other submissions, trying it blind now, so first create an unordered map where the key is the sorted word, as to help group each of the anagrams, and the value type is the word itself. Using a loop that goes through the vector, we can push every value into the map, where the keys only increase for non anagrams, and therefore we group all the words based on their sorted anagram. Finally, we can create a new vector OF vector strings where we push into it only the value types from the map. 

Notes: Only contains lowercase letters, The maps key must be a string but the value type as to be an array, since we are grouping by arrays, need auto for the for loop of pushing in the values into the return array because its not a string, better to let the compiler figure it out, also REMEMBER to return the array. 

## Top K Frequent Elements: 

First Thought: K frequent elements asks for k number of repeating elements, so with the example {1,1,2,2,2,3,3,3,3,4,4,4,4,4,5,5,6,6,6} and K being 2, it will return {4, 3}, the two most repeated elements. First thought would be to create a hashmap with the all the individual numbers being keys, and just count the number of values in each key and return k keys. In order to count the 

Notes: 



# Two Pointers: 
