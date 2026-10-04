# 🚀 MAANG DSA ROADMAP — Pattern-Based Interview Preparation

> A complete **Data Structures & Algorithms roadmap** focused on cracking **MAANG / top product companies / high-quality startups**.
>
> The goal is **not to memorize LeetCode questions**.
>
> The goal is to recognize the **underlying pattern**, derive the solution, analyze complexity, and implement it cleanly under interview pressure.

---

# 🎯 What This Roadmap Covers

This repository covers:

* Data Structures
* Algorithms
* Problem-solving patterns
* Recursion & Backtracking
* Trees & BST
* Graphs
* Dynamic Programming
* Greedy
* Advanced Data Structures
* Advanced Graph Algorithms
* String Algorithms
* Bit Manipulation
* Mathematical techniques
* Interview patterns
* Complexity analysis
* OA preparation
* System-design fundamentals
* CS fundamentals required for software/AI engineering interviews

---

# 🧠 The Real Goal

For every problem, you should be able to answer:

1. **What is the brute-force solution?**
2. **Why is it too slow?**
3. **What pattern does this problem use?**
4. **What data structure helps?**
5. **Can I optimize time complexity?**
6. **Can I optimize space complexity?**
7. **What are the edge cases?**
8. **Can I explain the solution clearly?**
9. **Can I implement it without looking at the solution?**
10. **Can I solve a variation of the problem?**

---

# 📊 DSA Difficulty Levels

| Level       | Meaning                           |
| ----------- | --------------------------------- |
| 🟢 Easy     | Understand the concept            |
| 🟡 Medium   | Recognize and apply patterns      |
| 🔴 Hard     | Combine multiple patterns         |
| 🔥 MAANG    | Solve under interview constraints |
| 💀 Advanced | Derive/modify known techniques    |

---

# 🗺️ COMPLETE DSA ROADMAP

## 1. Complexity Analysis

### Learn

* Big O
* Big Ω
* Big Θ
* Time complexity
* Space complexity
* Amortized complexity
* Best / Average / Worst case

### Important Patterns

* Single loop
* Nested loops
* Logarithmic loops
* Divide & conquer
* Recursive complexity
* Recurrence relations
* Amortized analysis

### Must Know

```text
O(1)
O(log n)
O(n)
O(n log n)
O(n²)
O(n³)
O(2ⁿ)
O(n!)
```

---

# 2. Arrays

Arrays are one of the most important interview topics.

## Patterns

### Pattern 1 — Traversal

Used for:

* Searching
* Counting
* Transformation
* Min/max
* Frequency

---

### Pattern 2 — Two Pointers

Recognize when:

* Array is sorted
* Need pair/triplet
* Need to shrink search space
* Need in-place modification

Examples:

* Two Sum II
* 3Sum
* Container With Most Water
* Remove Duplicates
* Move Zeroes

---

### Pattern 3 — Sliding Window

Used for:

* Subarrays
* Substrings
* Maximum/minimum window
* Longest/shortest valid range

Types:

```text
Fixed-size window
Variable-size window
Longest valid window
Shortest valid window
Count valid windows
```

---

### Pattern 4 — Prefix Sum

Used when:

* Repeated range queries
* Subarray sum
* Cumulative information

Patterns:

```text
Prefix Sum
Prefix XOR
Prefix Product
2D Prefix Sum
```

---

### Pattern 5 — Difference Array

Useful for:

* Range updates
* Multiple interval modifications

---

### Pattern 6 — Kadane's Algorithm

Used for:

* Maximum subarray
* Minimum subarray
* Maximum circular subarray

---

### Pattern 7 — Hashing

Used for:

* Frequency
* Duplicate detection
* Pair lookup
* Subarray problems

Structures:

```text
unordered_map
unordered_set
map
set
```

---

### Pattern 8 — Sorting + Scanning

Useful for:

* Intervals
* Duplicates
* Greedy problems
* Pair/triplet problems

---

# 3. Strings

## Core Concepts

* Character frequency
* ASCII
* Unicode basics
* String manipulation
* String comparison

## Patterns

### Frequency Map

Examples:

* Valid Anagram
* Group Anagrams

### Two Pointers

Examples:

* Valid Palindrome
* Reverse String

### Sliding Window

Examples:

* Longest Substring Without Repeating Characters
* Minimum Window Substring

### Prefix / Suffix

Examples:

* Prefix matching
* String preprocessing

### String Hashing

Learn:

* Rolling hash
* Polynomial hashing

### Advanced String Algorithms

Learn eventually:

* KMP
* Z Algorithm
* Rabin-Karp
* Trie
* Suffix Array
* Suffix Automaton

---

# 4. Linked List

## Core Patterns

### Pattern 1 — Fast & Slow Pointer

Used for:

* Middle node
* Cycle detection
* Cycle entry
* Happy number style problems

Classic:

```text
slow = slow->next
fast = fast->next->next
```

---

### Pattern 2 — Reverse Linked List

Variations:

* Reverse entire list
* Reverse first N nodes
* Reverse in groups
* Reverse sublist

---

### Pattern 3 — Dummy Node

Useful for:

* Deletion
* Insertion
* Merging
* Head modification

---

### Pattern 4 — Merge Linked Lists

Examples:

* Merge Two Sorted Lists
* Merge K Sorted Lists

---

### Pattern 5 — Reordering

Examples:

* Reorder List
* Palindrome Linked List

Usually combines:

```text
Find middle
+
Reverse
+
Two pointers
```

---

# 5. Stack

## Patterns

### Basic Stack

Applications:

* Parentheses
* Undo
* Expression evaluation
* Parsing

### Monotonic Stack

Extremely important.

Used for:

* Next Greater Element
* Next Smaller Element
* Previous Greater
* Previous Smaller
* Largest Rectangle in Histogram
* Daily Temperatures
* Stock Span

Types:

```text
Monotonic Increasing Stack
Monotonic Decreasing Stack
```

### Expression Problems

Learn:

* Infix
* Prefix
* Postfix
* Operator precedence

---

# 6. Queue & Deque

## Patterns

### BFS

Queue is fundamental for:

* Trees
* Graphs
* Shortest path in unweighted graphs

### Sliding Window Maximum

Use:

```text
Deque
+
Monotonic property
```

### Circular Queue

Understand implementation.

---

# 7. Hashing

## Important Concepts

* Hash table
* Hash function
* Collision
* Chaining
* Open addressing
* Load factor

## Interview Patterns

* Frequency counting
* Complement lookup
* Duplicate detection
* Prefix sum + hashmap
* Grouping
* Memoization

---

# 8. Binary Search

One of the highest-value interview patterns.

## Pattern 1 — Normal Binary Search

```text
Find target
```

---

## Pattern 2 — First / Last Occurrence

Examples:

* First occurrence
* Last occurrence
* Lower bound
* Upper bound

---

## Pattern 3 — Binary Search on Answer

Extremely important.

Used when:

> "Find the minimum possible maximum..."

or

> "Find the maximum possible minimum..."

Examples:

* Capacity to Ship Packages
* Koko Eating Bananas
* Allocate Books
* Aggressive Cows

---

## Pattern 4 — Rotated Sorted Array

Examples:

* Search in Rotated Sorted Array
* Minimum in Rotated Sorted Array

---

## Pattern 5 — Peak Finding

Examples:

* Find Peak Element
* Mountain Array

---

# 9. Sorting

## Must Know

### Elementary

* Bubble Sort
* Selection Sort
* Insertion Sort

### Important

* Merge Sort
* Quick Sort
* Heap Sort

### Non-comparison

* Counting Sort
* Radix Sort
* Bucket Sort

## Interview Understanding

Know:

* Time complexity
* Space complexity
* Stability
* In-place property
* When to use which algorithm

---

# 10. Intervals

Extremely common.

## Core Pattern

```text
Sort intervals
↓
Scan
↓
Merge / Compare
```

## Patterns

* Merge intervals
* Insert interval
* Overlapping intervals
* Meeting rooms
* Meeting rooms II
* Minimum platforms
* Sweep line
* Interval scheduling

---

# 11. Recursion

## Learn

* Base case
* Recursive case
* Call stack
* Tree recursion
* Backtracking

## Patterns

### Linear Recursion

```text
f(n) → f(n-1)
```

### Tree Recursion

```text
f(n)
├── f(n-1)
└── f(n-2)
```

### Divide & Conquer

```text
Divide
Solve
Combine
```

Examples:

* Merge Sort
* Quick Sort
* Binary Search

---

# 12. Backtracking

Very important for MAANG.

## Core Template

```text
choose
explore
unchoose
```

## Patterns

### Subsets

* Subsets
* Subsets II

### Permutations

* Permutations
* Unique permutations

### Combination

* Combination Sum
* Combination Sum II

### Grid Backtracking

* Word Search
* Rat in a Maze

### Constraint Problems

* N-Queens
* Sudoku Solver

### Key Concepts

* Decision tree
* State
* Choice
* Constraint
* Pruning

---

# 13. Trees

One of the most important topics.

## Traversals

### DFS

```text
Preorder
Inorder
Postorder
```

### BFS

```text
Level Order
```

---

## Recursive Tree Pattern

```text
solve(node):

    if node == NULL:
        return

    solve(node->left)
    solve(node->right)
```

---

## Important Patterns

### Height / Depth

* Maximum depth
* Minimum depth

### Diameter

* Diameter of Binary Tree

### Balanced Tree

* Height balanced

### Path Problems

* Root-to-leaf path
* Path Sum
* Path Sum II
* Maximum path sum

### Lowest Common Ancestor

* LCA Binary Tree
* LCA BST

### Views

* Left view
* Right view
* Top view
* Bottom view
* Boundary traversal

### Vertical Traversal

Understand:

```text
row
column
node
```

### Serialization

* Serialize tree
* Deserialize tree

---

# 14. Binary Search Tree

## Core Properties

```text
left < root < right
```

## Patterns

* Search
* Insert
* Delete
* Minimum
* Maximum
* Predecessor
* Successor
* Validate BST
* Kth smallest
* Kth largest
* LCA
* Two Sum BST
* Convert sorted array to BST

## Advanced

* AVL Tree
* Red-Black Tree
* Self-balancing BST

---

# 15. Heap / Priority Queue

## Types

```text
Min Heap
Max Heap
```

## Patterns

### Top K

* K largest
* K smallest
* K frequent elements

### Two Heaps

Used for:

* Median from Data Stream

### Merge K Sorted

* Merge K sorted arrays
* Merge K sorted lists

### Scheduling

* CPU scheduling
* Meeting rooms

### Greedy + Heap

Very common combination.

---

# 16. Trie

Used for prefix-based problems.

## Core Operations

```text
Insert
Search
StartsWith
Delete
```

## Patterns

* Prefix search
* Autocomplete
* Word dictionary
* Word Search II
* Maximum XOR

---

# 17. Graphs

🔥 One of the most important MAANG topics.

## Representation

### Adjacency Matrix

### Adjacency List

### Edge List

---

# Graph Traversal

## BFS

Used for:

* Shortest path in unweighted graph
* Level traversal
* Multi-source BFS

---

## DFS

Used for:

* Components
* Cycle detection
* Path exploration
* Islands
* Topological structures

---

# Graph Patterns

## Pattern 1 — Connected Components

Examples:

* Number of Islands
* Number of Provinces

---

## Pattern 2 — Cycle Detection

### Undirected

```text
DFS + parent
```

or

```text
DSU
```

### Directed

```text
DFS + recursion stack
```

---

## Pattern 3 — Topological Sort

Algorithms:

```text
Kahn's Algorithm
DFS Topological Sort
```

Used for:

* Course Schedule
* Dependency resolution
* Build systems

---

## Pattern 4 — Shortest Path

### Unweighted

```text
BFS
```

### Positive Weighted

```text
Dijkstra
```

### Negative Edges

```text
Bellman-Ford
```

### All Pairs

```text
Floyd-Warshall
```

---

# 18. Disjoint Set Union

Also called:

```text
Union Find
```

## Core Operations

```text
find()
union()
```

## Optimizations

```text
Path Compression
Union by Rank
Union by Size
```

## Applications

* Connected components
* Cycle detection
* Kruskal
* Network connectivity
* Dynamic connectivity

---

# 19. Minimum Spanning Tree

## Algorithms

### Kruskal

```text
Sort edges
+
DSU
```

### Prim

```text
Priority Queue
+
Graph
```

Know when to use each.

---

# 20. Dynamic Programming

🔥 One of the biggest differentiators between average and strong candidates.

Do NOT memorize DP solutions.

Learn to identify:

```text
State
Transition
Base Case
Answer
```

---

# DP Pattern 1 — 1D DP

Examples:

* Climbing Stairs
* House Robber
* Decode Ways

---

# DP Pattern 2 — 2D DP

Examples:

* Unique Paths
* Grid problems
* Minimum Path Sum

---

# DP Pattern 3 — Knapsack

### 0/1 Knapsack

### Unbounded Knapsack

### Subset Sum

### Partition

### Target Sum

---

# DP Pattern 4 — Subsequences

* Longest Common Subsequence
* Longest Increasing Subsequence
* Longest Palindromic Subsequence

---

# DP Pattern 5 — String DP

* Edit Distance
* Wildcard Matching
* Regex Matching

---

# DP Pattern 6 — Interval DP

Examples:

* Matrix Chain Multiplication
* Burst Balloons
* Palindrome Partitioning

---

# DP Pattern 7 — Tree DP

Examples:

* House Robber III
* Maximum independent set style problems

---

# DP Pattern 8 — Bitmask DP

Used for:

* Subset states
* Traveling Salesman
* Assignment problems

---

# DP Pattern 9 — Digit DP

Used for:

* Counting numbers satisfying digit constraints

---

# DP Pattern 10 — DP + Graph

Examples:

* DAG DP
* Shortest path style DP

---

# 21. Greedy Algorithms

## Recognition

Greedy often works when:

> A locally optimal choice can lead to a globally optimal solution.

## Patterns

* Activity selection
* Interval scheduling
* Fractional knapsack
* Jump Game
* Gas Station
* Partition Labels
* Minimum number of platforms
* Huffman Coding

## Common Combination

```text
Greedy + Sorting
Greedy + Heap
Greedy + Intervals
```

---

# 22. Bit Manipulation

## Must Know

```text
AND
OR
XOR
NOT
LEFT SHIFT
RIGHT SHIFT
```

## Patterns

* Check odd/even
* Check power of 2
* Set bit
* Clear bit
* Toggle bit
* Count set bits
* XOR tricks
* Bitmasking

## Important Problems

* Single Number
* Missing Number
* Counting Bits
* Subsets using bitmask

---

# 23. Mathematics

## Topics

* GCD
* LCM
* Prime numbers
* Sieve of Eratosthenes
* Modular arithmetic
* Fast exponentiation
* Combinatorics
* Permutations
* Probability basics
* Matrix operations

---

# 24. Advanced Data Structures

Learn after mastering the core topics.

## Segment Tree

Operations:

```text
Range Query
Point Update
Range Update
```

Applications:

* Range minimum
* Range maximum
* Range sum

---

## Fenwick Tree

Also called:

```text
Binary Indexed Tree
```

Useful for:

* Prefix queries
* Point updates
* Frequency counting

---

## Sparse Table

Useful for:

* Static range queries
* RMQ

---

## Ordered Set / Ordered Map

Understand concepts such as:

* Order statistics
* Balanced BST

---

# 25. Advanced Graph Algorithms

After mastering BFS, DFS, Dijkstra and DSU:

* Bellman-Ford
* Floyd-Warshall
* Bridges
* Articulation Points
* Strongly Connected Components
* Kosaraju
* Tarjan
* Eulerian Path
* Eulerian Circuit
* Bipartite Graph
* Max Flow
* Min Cut

---

# 26. Computational Geometry

Lower priority for most interviews but useful for advanced preparation.

* Orientation
* Cross product
* Line intersection
* Convex hull
* Closest pair of points

---

# 🔥 MOST IMPORTANT INTERVIEW PATTERNS

If you have limited time, master these first:

```text
1. Two Pointers
2. Sliding Window
3. Prefix Sum
4. HashMap / HashSet
5. Binary Search
6. Fast & Slow Pointer
7. Stack
8. Monotonic Stack
9. BFS
10. DFS
11. Backtracking
12. Heap / Priority Queue
13. Intervals
14. Greedy
15. Topological Sort
16. Union Find
17. Dijkstra
18. 1D DP
19. 2D DP
20. Knapsack
21. Tree DFS
22. Tree BFS
23. Binary Search on Answer
24. Trie
25. Bit Manipulation
```

---

# 🧩 HOW TO RECOGNIZE PATTERNS

## "Longest / Shortest Subarray"

Think:

```text
Sliding Window
```

---

## "Pair in Sorted Array"

Think:

```text
Two Pointers
```

---

## "Find Something Efficiently in Sorted Data"

Think:

```text
Binary Search
```

---

## "Next Greater / Smaller"

Think:

```text
Monotonic Stack
```

---

## "Top K"

Think:

```text
Heap
```

---

## "Shortest Path in Unweighted Graph"

Think:

```text
BFS
```

---

## "Shortest Path with Positive Weights"

Think:

```text
Dijkstra
```

---

## "Dependencies / Prerequisites"

Think:

```text
Topological Sort
```

---

## "Connected Components"

Think:

```text
DFS / BFS / DSU
```

---

## "Generate All Possibilities"

Think:

```text
Backtracking
```

---

## "Optimal Choices Over Previous Choices"

Think:

```text
Dynamic Programming
```

---

## "Overlapping Intervals"

Think:

```text
Sort + Greedy / Sweep Line
```

---

## "Prefix Search"

Think:

```text
Trie
```

---

# 🏆 MAANG PROBLEM-SOLVING FRAMEWORK

For every problem follow:

```text
                 PROBLEM
                    ↓
             Understand Input
                    ↓
             Brute Force
                    ↓
          Find Bottleneck
                    ↓
       Identify DSA Pattern
                    ↓
         Optimize Algorithm
                    ↓
          Prove Correctness
                    ↓
             Code
                    ↓
           Test Edge Cases
                    ↓
        Analyze Complexity
                    ↓
       Think of Variations
```

---

# 📝 PROBLEM TRACKING SYSTEM

Do not maintain only:

```text
Question → Solved
```

Instead maintain:

| Problem   | Topic  | Pattern       | Difficulty | Attempt | Hint | Solved Without Help | Revisit |
| --------- | ------ | ------------- | ---------- | ------- | ---- | ------------------- | ------- |
| Two Sum   | Array  | HashMap       | Easy       | 1       | No   | Yes                 | 7 days  |
| 3Sum      | Array  | Two Pointer   | Medium     | 2       | Yes  | Yes                 | 14 days |
| LRU Cache | Design | HashMap + DLL | Hard       | 3       | Yes  | No                  | 7 days  |

---

# 🔁 REVISION SYSTEM

Use spaced repetition.

```text
Day 1
↓
Day 3
↓
Day 7
↓
Day 14
↓
Day 30
↓
Day 60
```

If you cannot solve it during revision:

```text
Mark → Relearn Pattern → Reattempt
```

---

# 🎯 PROBLEM TARGET

Do NOT chase random 1000+ problems.

A strong target is:

### Foundation

```text
100–150 problems
```

### Interview Ready

```text
250–350 quality problems
```

### Strong MAANG Preparation

```text
350–500 carefully selected problems
```

Quality > quantity.

The important thing is that you can solve **variations**, not just the exact problem you have seen before.

---

# 🧠 DIFFICULTY DISTRIBUTION

Recommended:

```text
Easy       → 20%
Medium     → 60%
Hard       → 20%
```

Medium problems should form the core of preparation.

---

# 🏗️ RECOMMENDED ORDER

Follow this sequence instead of randomly jumping between topics.

```text
Phase 1
│
├── Complexity
├── Arrays
├── Strings
├── Hashing
├── Two Pointers
├── Sliding Window
└── Prefix Sum

Phase 2
│
├── Linked List
├── Stack
├── Queue
├── Binary Search
├── Sorting
└── Intervals

Phase 3
│
├── Recursion
├── Backtracking
├── Trees
├── BST
└── Heap

Phase 4
│
├── Graph BFS
├── Graph DFS
├── Topological Sort
├── DSU
├── Shortest Path
└── MST

Phase 5
│
├── Greedy
├── 1D DP
├── 2D DP
├── Knapsack
├── Subsequence DP
├── String DP
└── Tree DP

Phase 6
│
├── Trie
├── Segment Tree
├── Fenwick Tree
├── Advanced Graph
├── Bitmask DP
└── Advanced Algorithms
```

---

# 💻 CODING INTERVIEW REQUIREMENTS

Knowing DSA alone is not enough.

You should also be comfortable with:

## Programming Language

Choose one primary interview language.

Recommended:

```text
C++
```

Know:

* STL
* vector
* string
* map
* unordered_map
* set
* unordered_set
* stack
* queue
* deque
* priority_queue
* pair
* tuple
* algorithms
* lambda basics

---

# 🧪 COMPUTER SCIENCE FUNDAMENTALS

For MAANG-level preparation, also study:

## OOP

* Encapsulation
* Inheritance
* Polymorphism
* Abstraction
* SOLID basics

## DBMS

* SQL
* Joins
* Indexing
* Normalization
* Transactions
* ACID
* Isolation levels
* SQL vs NoSQL

## Operating Systems

* Process
* Thread
* Concurrency
* Deadlock
* Scheduling
* Virtual memory
* Paging
* Mutex
* Semaphore

## Computer Networks

* TCP/IP
* HTTP/HTTPS
* DNS
* REST
* WebSockets
* TLS
* Load balancing
* Cookies
* Sessions

---

# 🏗️ SYSTEM DESIGN

For experienced roles, system design becomes critical.

For students/new grads, focus first on fundamentals.

Learn:

```text
Client
 ↓
Load Balancer
 ↓
API Servers
 ↓
Cache
 ↓
Database
 ↓
Message Queue
 ↓
Workers
```

Important concepts:

* Scalability
* Availability
* Reliability
* Latency
* Throughput
* Caching
* Database indexing
* Sharding
* Replication
* Load balancing
* Rate limiting
* Message queues
* CAP theorem
* Consistency
* Microservices

Practice designing:

* URL Shortener
* Chat Application
* YouTube
* Instagram
* Uber
* WhatsApp
* Notification System
* Rate Limiter
* Distributed Cache

---

# 🤖 FOR AI/ML ENGINEERING ROLES

If targeting **AI/ML Engineer / GenAI Engineer roles**, DSA is only one part of preparation.

You should additionally know:

## Machine Learning

* Linear Regression
* Logistic Regression
* Decision Trees
* Random Forest
* Gradient Boosting
* SVM
* KNN
* Naive Bayes
* Clustering
* PCA
* Feature Engineering
* Model Evaluation
* Cross Validation

---

# 🧠 Deep Learning

* Neural Networks
* Backpropagation
* Optimization
* CNN
* RNN
* LSTM
* Transformers
* Attention
* Embeddings

---

# 🤖 GenAI

Know:

* LLM fundamentals
* Prompt engineering
* Embeddings
* Vector databases
* RAG
* Chunking
* Retrieval
* Reranking
* Tool calling
* Agents
* Agent memory
* Evaluation
* Fine-tuning
* LoRA / PEFT
* Function calling
* MCP concepts

---

# 🏗️ AI SYSTEM DESIGN

Be able to design:

```text
User
 ↓
API
 ↓
Authentication
 ↓
LLM Router
 ↓
Retrieval
 ↓
Vector DB
 ↓
LLM
 ↓
Tools
 ↓
Response
```

And explain:

* Latency
* Cost
* Caching
* Evaluation
* Hallucination reduction
* Observability
* Scaling
* Security
* Rate limiting

---

# 💼 PROJECTS

For MAANG-level preparation, don't build 15 tutorial projects.

Build **2–4 deep projects**.

Each project should demonstrate:

```text
Problem
↓
Architecture
↓
Implementation
↓
Testing
↓
Deployment
↓
Monitoring
↓
Scalability
```

For AI engineers:

### Project 1

Production-quality RAG application

### Project 2

Agentic AI system

### Project 3

ML system with real data

### Project 4

Full-stack AI product / SaaS

---

# 🌐 SOFTWARE ENGINEERING

Know:

* Git
* GitHub
* REST APIs
* Authentication
* Docker
* CI/CD
* Testing
* Logging
* Monitoring
* Cloud fundamentals
* Database design
* API design

---

# 📄 RESUME

Your resume should be:

```text
1 Page
↓
Strong Skills
↓
Impactful Projects
↓
Internships / Experience
↓
Achievements
↓
Education
```

Avoid:

```text
"I made a chatbot using ChatGPT API."
```

Prefer:

```text
Built a multi-agent RAG system that reduced retrieval latency by X%
and supported Y documents using Z architecture.
```

Use measurable results whenever possible.

---

# 🗣️ INTERVIEW COMMUNICATION

During interviews:

### Step 1

Clarify the problem.

### Step 2

Discuss brute force.

### Step 3

Explain why it is insufficient.

### Step 4

Identify the pattern.

### Step 5

Explain optimized approach.

### Step 6

Walk through an example.

### Step 7

Write code.

### Step 8

Test edge cases.

### Step 9

Give complexity.

---

# ⚠️ COMMON MISTAKES

Avoid:

❌ Memorizing solutions

❌ Solving random problems

❌ Watching solutions without attempting

❌ Ignoring complexity

❌ Avoiding hard problems forever

❌ Doing only Easy problems

❌ Switching programming languages constantly

❌ Ignoring CS fundamentals

❌ Ignoring communication

❌ Building projects without understanding them

---

# 🏆 FINAL MAANG CHECKLIST

Before applying, you should be comfortable with:

## DSA

* [ ] Arrays
* [ ] Strings
* [ ] Hashing
* [ ] Two Pointers
* [ ] Sliding Window
* [ ] Prefix Sum
* [ ] Binary Search
* [ ] Linked List
* [ ] Stack
* [ ] Queue
* [ ] Heap
* [ ] Intervals
* [ ] Recursion
* [ ] Backtracking
* [ ] Trees
* [ ] BST
* [ ] Trie
* [ ] Graphs
* [ ] BFS
* [ ] DFS
* [ ] Topological Sort
* [ ] DSU
* [ ] Dijkstra
* [ ] MST
* [ ] Greedy
* [ ] Dynamic Programming
* [ ] Bit Manipulation
* [ ] Segment Tree
* [ ] Advanced Graphs

## CS Fundamentals

* [ ] OOP
* [ ] DBMS
* [ ] OS
* [ ] Computer Networks
* [ ] SQL

## Engineering

* [ ] Git
* [ ] APIs
* [ ] Testing
* [ ] Docker
* [ ] Cloud
* [ ] System Design

## Interview

* [ ] Resume
* [ ] Behavioral questions
* [ ] Mock interviews
* [ ] Coding under time pressure
* [ ] Explain solutions verbally

## AI/ML

* [ ] ML fundamentals
* [ ] Deep Learning
* [ ] Transformers
* [ ] LLMs
* [ ] RAG
* [ ] Agents
* [ ] AI System Design
* [ ] MLOps basics

---

# 🚀 THE FINAL STRATEGY

Don't think:

> "I need to solve 1000 LeetCode questions."

Think:

> **"I need to master the patterns that generate those 1000 questions."**

The ultimate progression is:

```text
Learn Concept
      ↓
Learn Pattern
      ↓
Solve Easy
      ↓
Solve Medium
      ↓
Solve Hard
      ↓
Solve Without Hints
      ↓
Solve Variations
      ↓
Explain Out Loud
      ↓
Timed Practice
      ↓
Mock Interview
      ↓
Real Interview
```

---

# ⭐ GOLDEN RULE

> **Pattern recognition + problem solving + implementation + communication = interview readiness.**

DSA gets you through the coding round.

CS fundamentals make you a stronger engineer.

Projects prove that you can build.

System design proves that you can think at scale.

Communication gets the interviewer to trust your reasoning.

And consistent practice makes all of it reliable under pressure.

---

# 📌 Recommended Repository Structure

```text
DSA-MAANG/
│
├── 01-Complexity/
├── 02-Arrays/
├── 03-Strings/
├── 04-Hashing/
├── 05-Two-Pointers/
├── 06-Sliding-Window/
├── 07-Prefix-Sum/
├── 08-Linked-List/
├── 09-Stack/
├── 10-Queue/
├── 11-Binary-Search/
├── 12-Sorting/
├── 13-Intervals/
├── 14-Recursion/
├── 15-Backtracking/
├── 16-Trees/
├── 17-BST/
├── 18-Heap/
├── 19-Trie/
├── 20-Graphs/
├── 21-DSU/
├── 22-Shortest-Path/
├── 23-MST/
├── 24-Greedy/
├── 25-Dynamic-Programming/
├── 26-Bit-Manipulation/
├── 27-Mathematics/
├── 28-Segment-Tree/
├── 29-Fenwick-Tree/
├── 30-Advanced-Graphs/
│
├── CS-Fundamentals/
│   ├── OOP/
│   ├── DBMS/
│   ├── OS/
│   ├── Networks/
│   └── SQL/
│
├── System-Design/
│
├── AI-ML-Interview/
│
├── Mock-Interviews/
│
└── README.md
```

---

# 🎯 END GOAL

By completing this roadmap, the target is not merely:

**"I solved many DSA questions."**

The target is:

> **Give me a new problem I've never seen before, and I can identify the underlying pattern, derive an efficient solution, implement it correctly, analyze its complexity, and explain my reasoning clearly.**

That is the skill that matters in a top-tier technical interview.
