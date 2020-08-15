<h3>Problem Statement</h3>

<h2>Iterator for Combination</h2>

Design an Iterator class, which has:<br>

- A constructor that takes a string characters of sorted distinct lowercase English letters and a number combinationLength as arguments.
- A function next() that returns the next combination of length combinationLength in lexicographical order.
- A function hasNext() that returns True if and only if there exists a next combination.
 

**Example:** <br>

>CombinationIterator iterator = new CombinationIterator("abc", 2); // creates the iterator.<br>
>iterator.next(); // returns "ab"<br>
>iterator.hasNext(); // returns true<br>
>iterator.next(); // returns "ac"<br>
>iterator.hasNext(); // returns true<br>
>iterator.next(); // returns "bc"<br>
>iterator.hasNext(); // returns false<br>
 

**Constraints:**

- 1 <= combinationLength <= characters.length <= 15
- There will be at most 10^4 function calls per test.
- It's guaranteed that all calls of the function next are valid.

__Runtime Distribution__<br>
![SNIP](RuntimeDay13.JPG)

__Memory Distribution__<br>
![SNIP](MemoryDay13.JPG)
