<h3>Problem Statement</h3>

<h2>Vertical Order Traversal of a Binary Tree</h2>
Given a binary tree, return the vertical order traversal of its nodes values.<br>

For each node at position (X, Y), its left and right children respectively will be at positions (X-1, Y-1) and (X+1, Y-1).<br>

Running a vertical line from X = -infinity to X = +infinity, whenever the vertical line touches some nodes, we report the values of the nodes in order from top to bottom (decreasing Y coordinates).<br>

If two nodes have the same position, then the value of the node that is reported first is the value that is smaller.<br>

Return an list of non-empty reports in order of X coordinate.  Every report will have a list of values of nodes.<br>

**Example 1:** <br>

**Input:** 
[3,9,20,null,null,15,7]<br>
**Output:**
[[9],[3,15],[20],[7]]<br>
*Explanation:* <br> 
Without loss of generality, we can assume the root node is at position (0, 0):<br>
Then, the node with value 9 occurs at position (-1, -1);<br>
The nodes with values 3 and 15 occur at positions (0, 0) and (0, -2);<br>
The node with value 20 occurs at position (1, -1);<br>
The node with value 7 occurs at position (2, -2).<br>

**Example 2:** <br>

**Input:** [1,2,3,4,5,6,7]<br>
**Output:** [[4],[2],[1,5,6],[3],[7]]<br>
*Explanation:*<br> 
The node with value 5 and the node with value 6 have the same position according to the given scheme.<br>
However, in the report "[1,5,6]", the node value of 5 comes first since 5 is smaller than 6.<br>
 

**Note:** <br>
- The tree will have between 1 and 1000 nodes.
- Each node's value will be between 0 and 1000.

__Runtime Distribution__<br>
![SNIP](RuntimeDay7.JPG)

__Memory Distribution__<br>
![SNIP](MemoryDay7.JPG)
