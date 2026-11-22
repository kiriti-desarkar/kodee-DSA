# kodee-DSA

Code, pseudocode and revision notes for the **Data Structures and Algorithms** episodes of **LearnWithKiriti** on YouTube, starring **Kodee**, a friendly green coder bug.

Each episode teaches one problem the way you would solve it in an interview. You start from the brute force, ask "what am I doing again and again?", and derive the optimal solution step by step. This repo holds everything from the video, so you can copy the code, revise before an interview, or check your own solution.

📺 **YouTube:** [LearnWithKiriti](https://www.youtube.com/@LearnWithKiriti)

## What is in every problem folder

```
Arrays/Easy/MajorityElement/
├── README.md              short revision notes: problem, example, all approaches, complexity
├── Brute/
│   ├── pseudocode.md      idea, pseudocode, dry run
│   ├── Java/
│   ├── C++/
│   ├── Python/
│   └── JS/
├── Better-HashMap/        (when the episode has a middle step)
└── Optimal/
    ├── 1-BitCounting/     (when there is more than one optimal approach)
    └── 2-BoyerMooreVoting/
```

- **README.md** gives the 2-minute revision: the problem, a small example, every approach with its time and space, and the LeetCode follow-ups.
- **pseudocode.md** has the same steps as the video: how to derive the approach under stress, the pseudocode, why it works, and a dry run table.
- **Code in 4 languages:** Java, C++, Python and JavaScript. The variable names match the video, one statement per line, so you can follow along line by line.

## Problems

| # | Problem | LeetCode | Folder | Approaches |
|---|---|---|---|---|
| 1 | Bubble Sort | - | [Sorting/BubbleSort](Sorting/BubbleSort) | All passes, shrink the end + stop early |
| 2 | Selection Sort | - | [Sorting/SelectionSort](Sorting/SelectionSort) | Selection sort |
| 3 | Insertion Sort | - | [Sorting/InsertionSort](Sorting/InsertionSort) | Swap into place, make room then insert |
| 4 | Merge Sort | - | [Sorting/MergeSort](Sorting/MergeSort) | Insertion Sort (bonus), Merge Sort |
| 5 | Quick Sort | - | [Sorting/QuickSort](Sorting/QuickSort) | Quick sort (last number as pivot) |
| 6 | Sort an Array (revise all 5 sorts) | [912](https://leetcode.com/problems/sort-an-array/) | [Sorting/SortAnArray](Sorting/SortAnArray) | Bubble, Insertion, Merge |
| 7 | Binary Search | [704](https://leetcode.com/problems/binary-search/) | [Searching/BinarySearch](Searching/BinarySearch) | Linear search, Binary search |
| 8 | Max Consecutive Ones | [485](https://leetcode.com/problems/max-consecutive-ones/) | [Arrays/Easy/MaxConsecutiveOnes](Arrays/Easy/MaxConsecutiveOnes) | Brute, One pass |
| 9 | Left Rotate Array by One | - | [Arrays/Easy/LeftRotateArrayByOne](Arrays/Easy/LeftRotateArrayByOne) | Temp array, In place |
| 10 | Left Rotate Array by k Places | - (189 rotates right) | [Arrays/Medium/LeftRotateArrayByK](Arrays/Medium/LeftRotateArrayByK) | Rotate by one k times, Three reversals |
| 11 | Move Zeros to End | [283](https://leetcode.com/problems/move-zeroes/) | [Arrays/Easy/MoveZerosToEnd](Arrays/Easy/MoveZerosToEnd) | Temp array, Two pointers |
| 12 | Remove Duplicates from Sorted Array | [26](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [Arrays/Easy/RemoveDuplicatesFromSortedArray](Arrays/Easy/RemoveDuplicatesFromSortedArray) | Set, Two pointers |
| 13 | Find the Missing Number | [268](https://leetcode.com/problems/missing-number/) | [Arrays/Easy/FindTheMissingNumber](Arrays/Easy/FindTheMissingNumber) | Brute, Seen array, Sum formula |
| 14 | Union of Two Sorted Arrays | - | [Arrays/Easy/UnionOf2SortedArrays](Arrays/Easy/UnionOf2SortedArrays) | Sorted set, Two pointers |
| 15 | Intersection of Two Sorted Arrays | [350](https://leetcode.com/problems/intersection-of-two-arrays-ii/) | [Arrays/Easy/IntersectionOf2SortedArrays](Arrays/Easy/IntersectionOf2SortedArrays) | Brute, Two Pointers, all follow-ups (including arrays on disk) |
| 16 | Majority Element I | [169](https://leetcode.com/problems/majority-element/) | [Arrays/Easy/MajorityElement](Arrays/Easy/MajorityElement) | Brute, Hash Map, Bit Counting, Boyer-Moore Voting |
| 17 | Leaders in an Array | - | [Arrays/Easy/LeadersInAnArray](Arrays/Easy/LeadersInAnArray) | Brute, Right to left |
| 18 | Rearrange Array Elements by Sign | [2149](https://leetcode.com/problems/rearrange-array-elements-by-sign/) | [Arrays/Medium/RearrangeArrayElementsBySign](Arrays/Medium/RearrangeArrayElementsBySign) | Brute, Two write pointers, follow-ups |
| 19 | Spiral Matrix | [54](https://leetcode.com/problems/spiral-matrix/) | [Arrays/Medium/SpiralMatrix](Arrays/Medium/SpiralMatrix) | Visited grid, Shrinking boundaries |
| 20 | Pascal's Triangle | [118](https://leetcode.com/problems/pascals-triangle/) | [Arrays/Easy/PascalsTriangle](Arrays/Easy/PascalsTriangle) | One element, One row, Whole triangle |
| 21 | Rotate Matrix by 90 Degrees | [48](https://leetcode.com/problems/rotate-image/) | [Arrays/Medium/RotateMatrix](Arrays/Medium/RotateMatrix) | Second grid, Transpose + reverse |
| 22 | Set Matrix Zeroes | [73](https://leetcode.com/problems/set-matrix-zeroes/) | [Arrays/Medium/SetMatrixZeroes](Arrays/Medium/SetMatrixZeroes) | Copy, Marker arrays, Mark inside the grid |

New problems are added after each episode is released.

## How to use this repo

1. **Watch the episode first.** The derivation is the important part. The code makes sense once you know why each line is there.
2. **Try it yourself.** Close the code, open `pseudocode.md`, and write the solution in your language.
3. **Compare.** Open your language's folder and check your code against it.
4. **Revise.** Before an interview, read the problem's `README.md` only. It is short on purpose.

## Run the code

Each language folder is a standalone program with a small example in `main`.

```bash
# Java
javac MajorityBrute.java && java MajorityBrute

# C++
g++ -std=c++17 majority_brute.cpp -o majority && ./majority

# Python
python majority_brute.py

# JavaScript
node majorityBrute.js
```

File names differ per problem. Use the file inside the folder you opened.

## Found a bug or have a question?

Open an issue, or ask in the comments of the episode on YouTube. If the code helped you, a ⭐ on the repo and a like on the video help the channel grow.

## License

Free to use for learning and interview practice. Please link back to this repo or the channel if you share it.
