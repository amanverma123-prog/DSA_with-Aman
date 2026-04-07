🚀 Striver's DSA – Binary Search

This repository contains my solutions to Binary Search problems from Striver's DSA Sheet, focusing on pattern recognition, optimization, and clean implementation in C++.

📂 Problems Solved
📌 Pattern-Based Problems
LC34 – Find First and Last Position
LC34_search_range.cpp
→ Applied binary search twice to find first & last occurrence
LC35 – Search Insert Position
LC35_search_insert.cpp
→ Used lower bound concept
Count Occurrences of Target
count_occurrences.cpp
→ Count = last - first + 1
LC33 – Search in Rotated Sorted Array
search_rotated.cpp
→ Identified sorted half to reduce search space
LC81 – Search in Rotated Sorted Array II
search_rotated_duplicates.cpp
→ Handled duplicates using shrinking technique (low++, high--)
LC153 – Find Minimum in Rotated Sorted Array
findMin.cpp
→ Compared mid with high to find pivot
LC154 – Find Minimum in Rotated Sorted Array II
findMin_duplicates.cpp
→ Resolved ambiguity with duplicate handling (high--)
Count Rotations in Sorted Array
findKRotation.cpp
→ Index of minimum element gives rotation count
📌 Advanced Binary Search Applications
LC540 – Single Element in a Sorted Array
singleNonDuplicate.cpp
→ Used index parity and pair matching (mid ^ 1)
LC162 – Find Peak Element
findPeakElement.cpp
→ Applied slope-based binary search (compare mid with mid+1)
📌 Concept-Based Problems
Floor and Ceil in Sorted Array
floor_ceil.cpp
→ Maintained potential answers during search
Upper Bound of an Element
upperBound.cpp
→ First index where element > target
📈 Progress
Total Problems Solved: 11
Topic: Binary Search
Language: C++
💡 Key Learnings
Binary search patterns (left bias / right bias)
Lower bound & upper bound concepts
Floor & ceil techniques
Handling rotated sorted arrays (with & without duplicates)
Using index parity for pair-based problems
Slope-based decision making in unsorted arrays
Edge case handling and optimization
🎯 Next Goals
Solve more advanced binary search problems (hard level)
Strengthen intuition for edge cases
Move to next topic (Arrays / Sliding Window)
📌 Note

This repository is consistently updated as I progress through Striver’s DSA Sheet and improve problem-solving skills.
