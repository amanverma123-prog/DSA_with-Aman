# 🔍 Striver's DSA — Strings

> C++ solutions from Striver's DSA Sheet, organized by pattern.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Strings-teal?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-8%20Problems-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

## 📁 Problems Solved

### 📌 String Basics

| #       | Problem                  | File                          |
| ------- | ------------------------ | ----------------------------- |
| LC 344  | Reverse String           | `reverseString.cpp`           |
| —       | Palindrome or Not        | `palindrome.cpp`              |
| LC 125  | Valid Palindrome         | `validpalindrome-125.cpp`     |
| —       | Strings Basics           | `stringsBasics.cpp`           |

---

### 📌 String Manipulation

| #       | Problem                  | File                              |
| ------- | ------------------------ | --------------------------------- |
| LC 1108 | Defang an IP Address     | `defangIPAdrress-1108.cpp`        |
| LC 1910 | Remove Occurrences       | `removeOccurences-1910.cpp`       |
| LC 2785 | Sort Vowels in a String  | `sortVowels-2785.cpp`             |

---

### 📌 String Properties & Checks

| #       | Problem                  | File                          |
| ------- | ------------------------ | ----------------------------- |
| LC 1832 | Pangram Check            | `PanagramOrNot-1832.cpp`      |
| —       | Check String Rotation    | `stringRotated.cpp`           |

---

## 📈 Progress

| Metric          | Value |
| --------------- | ----- |
| Problems Solved | 8     |
| Pattern Groups  | 3     |
| Language        | C++   |

---

## 💡 Key Learnings

* Two-pointer technique for palindrome & reverse
* ASCII manipulation for character checks
* `substr()` — pos vs length distinction
* String concatenation trick for rotation check (`s1 + s1`)
* `find()` for substring search — returns `npos` on miss
* `isalnum()` / `tolower()` for valid palindrome filtering
* Pangram — bitmasking vs frequency array approach
* In-place string modification vs building new string
* Sorting vowels while preserving consonant positions
* Trade-off: `O(n log n)` sorting vs `O(n)` counting approach

---

> 📌 Updated regularly as part of ongoing DSA practice on Striver's sheet.
