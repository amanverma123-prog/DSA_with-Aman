# 🔍 Striver's DSA — Sorting

> C++ solutions from Striver's DSA Sheet, organized by algorithm.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Sorting-red?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-5%20Algorithms-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

## 📁 Algorithms Implemented

### 📌 Comparison-Based Sorting

| Algorithm | Time (Best) | Time (Avg) | Time (Worst) | Space | File |
| --------- | ----------- | ---------- | ------------ | ----- | ---- |
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | `bubble_sort.cpp` |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | `selection_sort.cpp` |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | `insertion_sort.cpp` |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | `quick_sort.cpp` |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | `merge_sort.cpp` |

---

## 📈 Progress

| Metric | Value |
| ------ | ----- |
| Algorithms Implemented | 5 |
| Category | Comparison-Based Sorting |
| Language | C++ |

---

## 💡 Key Learnings

* Bubble sort with early termination optimization (best case O(n))
* Selection sort — always O(n²), minimum swaps property
* Insertion sort — efficient for nearly sorted arrays
* Quick sort — pivot selection, partition logic (Lomuto vs Hoare)
* Merge sort — divide & conquer, stable sort, guaranteed O(n log n)
* Stable vs unstable sorting algorithms
* In-place vs auxiliary space tradeoffs
* Recursion depth and stack space in Quick/Merge sort
* Why merge sort is preferred for linked lists
* Why quick sort is preferred for arrays (cache locality)

---

> 📌 Updated regularly as part of ongoing DSA practice on Striver's sheet.
