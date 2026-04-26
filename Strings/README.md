# 🔍 Striver's DSA — Strings

> C++ solutions from Striver's DSA Sheet, organized by pattern.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Strings-teal?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-13%20Problems-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

## 📁 Problems Solved

### 📌 String Basics

| #       | Problem              | File                      |
| ------- | -------------------- | ------------------------- |
| LC 344  | Reverse String       | `reverseString.cpp`       |
| —       | Palindrome or Not    | `palindrome.cpp`          |
| LC 125  | Valid Palindrome     | `validpalindrome-125.cpp` |
| —       | Strings Basics       | `stringsBasics.cpp`       |

---

### 📌 String Manipulation

| #       | Problem                      | File                          |
| ------- | ---------------------------- | ----------------------------- |
| LC 1108 | Defang an IP Address         | `defangIPAdrress-1108.cpp`    |
| LC 1910 | Remove Occurrences           | `removeOccurences-1910.cpp`   |
| LC 2785 | Sort Vowels in a String      | `sortVowels-2785.cpp`         |
| LC 415  | Add Strings                  | `addStrings-415.cpp`          |
| LC 13   | Roman to Integer             | `romanToInteger-13.cpp`       |
| LC 12   | Integer to Roman             | `integerToRoman-12.cpp`       |
| LC 151  | Reverse Words in a String    | `reverseWords-151.cpp`        |

---

### 📌 String Properties & Checks

| #       | Problem                    | File                          |
| ------- | -------------------------- | ----------------------------- |
| LC 1832 | Pangram Check              | `PanagramOrNot-1832.cpp`      |
| —       | Check String Rotation      | `stringRotated.cpp`           |
| LC 58   | Length of Last Word        | `lengthOfLastWord-58.cpp`     |

---

## 📈 Progress

| Metric          | Value |
| --------------- | ----- |
| Problems Solved | 13    |
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
* Adding large numbers using strings (carry-based addition)  
* Greedy approach for number-to-symbol mapping (Integer to Roman)  
* Handling subtractive cases (`IV`, `IX`, `XL`, `XC`, `CD`, `CM`)  
* Reverse traversal for string parsing problems  
* Handling trailing spaces before extracting meaningful data  
* Pattern: parsing + word extraction + reconstruction  
* Trade-off: O(n) extra space vs O(1) in-place reversal approach  

---

> 📌 Updated regularly as part of ongoing DSA practice on Striver's sheet.
