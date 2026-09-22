# 🌳 Striver's DSA — Binary Search Tree (BST)

> C++ solutions from Striver's DSA Sheet, focused on Binary Search Tree concepts, operations, and problem-solving patterns.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Binary%20Search%20Tree-teal?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-2%20Problems-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

## 📁 Problems Solved

### 📌 BST Operations

| #     | Problem                          | File                     |
| ----- | -------------------------------- | ------------------------ |
| LC 701 | Insert into a Binary Search Tree | `insertIntoBST-701.cpp` |

---

### 🔍 BST Search

| #     | Problem                       | File                  |
| ----- | ----------------------------- | --------------------- |
| LC 700 | Search in a Binary Search Tree | `searchBST-700.cpp` |

---

## 📈 Progress

| Metric          | Value |
| --------------- | ----- |
| Problems Solved | 2     |
| Pattern Groups  | 2     |
| Language        | C++   |

---

## 💡 Key Learnings

* Binary Search Tree properties
* Searching efficiently in a BST
* Insertion in a Binary Search Tree
* Iterative BST traversal
* Finding the correct position for a new node
* Navigating left when `val < root->data`
* Navigating right when `val > root->data`
* Maintaining BST ordering property
* Handling an empty BST
* Handling values that are not present in the BST
* Working with dynamically allocated tree nodes
* Time complexity based on BST height
* Using constant auxiliary space with iterative solutions

---

## 🧠 BST Property

For every node in a Binary Search Tree:

```text
        Left Subtree < Node < Right Subtree
