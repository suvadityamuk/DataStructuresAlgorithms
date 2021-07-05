# Data Structures and Algorithms  
## Introduction
This repository contains my implementations of several simple and different Data Structures and Algorithms, made in C++ and in a header-file format for easy usage. 
Currently, this repository contains the following implementations:
- **deque.hpp** : This file is the base implementation of a deque using a bi-directional Linked List. It has been built keeping in mind, the Deque Abstract Data Type. To supplement portability, the code has been written in the form of a template, allowing the use of technically any conceivable data-type as its base.  
![image](https://user-images.githubusercontent.com/70141886/124502775-b80a6080-dde1-11eb-9d30-2b54a3200196.png)
____
- **stack.hpp** : This file is an implementation of the stack, using the deque as a base. It has been built in accordance with the Stack Abstract Data Type  
![image](https://user-images.githubusercontent.com/70141886/124502792-c35d8c00-dde1-11eb-81d8-a71a54fd228d.png)
____
- **queue.hpp** : This file is an implementation of the queue, using the deque as a base. It has been built in accordance with the Queue Abstract Data Type  
![image](https://user-images.githubusercontent.com/70141886/124502979-2bac6d80-dde2-11eb-8b1a-b2e3211b6e4d.png)
____
- **bfsdfs.cpp** : This is an implementation of the Breadth-First-Search and Depth-First-Search algorithms on a graph. This .cpp file contains a piece of runner code as well, which demonstrates the algorithms in action.  
![image](https://user-images.githubusercontent.com/70141886/124503261-cefd8280-dde2-11eb-8adb-fe9c844a1929.png)
____
- **quick_sort.hpp** : This is an implementation of the Quick-sort algorithm, one of the fastest sorting algorithms present. This header file has been defined as a template, to make sure that portability of code is maintained.
![image](https://user-images.githubusercontent.com/70141886/124503452-34ea0a00-dde3-11eb-8313-c3be6aaa3dae.png)
____

## How to Use
The Queue and Stack implementations depend on the Deque for their base implementation. Hence, to use either the Stack or Queue, place both Stack/Queue and Deque header files in your workspace folder. The Deque can also be used as a standalone structure as well.  
The BFS-DFS Algorithms are implemented as a whole, but can be repurposed from the file as well.  
The Quick-sort algorithm, being implemented in the form of a template and header, only needs to be placed in the workspace to use.  
