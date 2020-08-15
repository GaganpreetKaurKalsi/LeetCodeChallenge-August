<h3>Problem Statement</h3>

<h2>Design Add and Search Words Data Structure</h2>
You should design a data structure that supports adding new words and finding if a string matches any previously added string.<br>

Implement the WordDictionary class:

- WordDictionary() Initializes the object.
- void addWord(word) adds word to the data structure, it can be matched later.
- bool search(word) returns true if there is any string in the data structure that matches word or false otherwise. word may contain dots '.' where dots can be matched with any letter.
 

**Example:**

>Input<br>
>["WordDictionary","addWord","addWord","addWord","search","search","search","search"]<br>
>[[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]]<br>
>Output<br>
>[null,null,null,null,false,true,true,true]<br>

>Explanation<br>
>WordDictionary wordDictionary = new WordDictionary();<br>
>wordDictionary.addWord("bad");<br>
>wordDictionary.addWord("dad");<br>
>wordDictionary.addWord("mad");<br>
>wordDictionary.search("pad"); // return False<br>
>wordDictionary.search("bad"); // return True<br>
>wordDictionary.search(".ad"); // return True<br>
>wordDictionary.search("b.."); // return True<br>
 

**Constraints:**
 - 1 <= word.length <= 500
 - word in addWord consists lower-case English letters.
 - word in search consist of  '.' or lower-case English letters.
 - At most 50000 calls will be made to addWord and search .

__Runtime Distribution__<br>
![SNIP](RuntimeDay5.JPG)

__Memory Distribution__<br>
![SNIP](MemoryDay5.JPG)
