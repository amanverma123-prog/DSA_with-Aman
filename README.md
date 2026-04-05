# 🚀 Striver's DSA – Binary Search

This repository contains my solutions to Binary Search problems from Striver's DSA Sheet, with a focus on patterns and optimization.

---

## 📂 Problems Solved

### 📌 Pattern-Based Problems

* **LC34 – Find First and Last Position**
  `LC34_search_range.cpp`
  → Used binary search twice (first & last occurrence)

* **LC35 – Search Insert Position**
  `LC35_search_insert.cpp`
  → Applied lower bound concept

* **Count Occurrences of Target**
  `count_occurrences.cpp`
  → Count = last - first + 1

* **LC33 – Search in Rotated Sorted Array**
  `search_rotated.cpp`
  → Modified binary search using sorted half logic

* **LC81 – Search in Rotated Sorted Array II**
  `search_rotated_duplicates.cpp`
  → Handled duplicates using shrinking technique (`low++`, `high--`)

* **LC153 – Find Minimum in Rotated Sorted Array**
  `findMin.cpp`
  → Compared `mid` with `high` to locate rotation pivot efficiently

* **LC154 – Find Minimum in Rotated Sorted Array II**
  `findMin_duplicates.cpp`
  → Handled ambiguity using `high--` when duplicates occur
---

### 📌 Concept-Based Problems

* **Floor and Ceil in Sorted Array**
  `floor_ceil.cpp`
  → Tracked potential answers using binary search

* **Upper Bound of an Element**
  `upperBound.cpp`
  → First index where element > target

---

## 📈 Progress

* Total Problems Solved: **9**
* Topic: **Binary Search**

---

## 💡 Key Learnings

* Binary search patterns (left bias / right bias)
* Lower bound & upper bound
* Floor & ceil concepts
* Handling rotated sorted arrays (with & without duplicates)
* Managing ambiguity in binary search
* Edge case handling

---

## 🎯 Next Goals

* Solve more advanced binary search problems
* Move to next topic (Arrays / Sliding Window)

---

## 📌 Note

I consistently update this repository as I progress through the sheet.
