<p align="center">
  <img src="https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=white" alt="C">
  <img src="https://img.shields.io/badge/Algorithms-FF6B6B?style=for-the-badge&logo=algorithm&logoColor=white" alt="Algorithms">
  <img src="https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge" alt="Status">
  <img src="https://img.shields.io/badge/Level-Advanced-red?style=for-the-badge" alt="Level">
</p>

<div align="center">
  <h1>🔄 Sorting Algorithms & Big O</h1>
  <p><em>Comprehensive implementation and analysis of fundamental sorting algorithms with time complexity evaluation</em></p>
</div>

---

## 📋 Table of Contents
- [📖 Overview](#-overview)
- [🎯 Learning Objectives](#-learning-objectives)
- [🛠️ Tech Stack](#️-tech-stack)
- [📁 Project Structure](#-project-structure)
- [🚀 Getting Started](#-getting-started)
- [💡 Usage](#-usage)
- [🏆 Implemented Algorithms](#-implemented-algorithms)
- [📊 Time Complexity Analysis](#-time-complexity-analysis)
- [🔍 Algorithm Comparison](#-algorithm-comparison)
- [📚 Resources](#-resources)
- [👥 Contributors](#-contributors)

## 📖 Overview

The Sorting Algorithms & Big O project is a comprehensive collection of fundamental sorting algorithm implementations in C, featuring detailed time complexity analysis and performance evaluation. This project demonstrates mastery of algorithmic thinking, efficiency optimization, and computational complexity theory through practical implementation of classic computer science algorithms.

**Project Mission**: *"Implement and analyze a complete suite of sorting algorithms while mastering Big O notation and algorithmic complexity evaluation for optimal performance understanding."*

This implementation showcases proficiency in:
- **Algorithm Design**: Implementation of diverse sorting strategies from simple to advanced
- **Complexity Analysis**: Deep understanding of time and space complexity using Big O notation
- **Performance Optimization**: Code efficiency and memory management considerations
- **Data Structure Manipulation**: Working with arrays and linked lists for different sorting approaches
- **Mathematical Analysis**: Formal analysis of algorithm behavior across different input scenarios

The project covers sorting algorithms ranging from simple O(n²) algorithms like Bubble Sort to advanced O(n log n) algorithms like Merge Sort and Quick Sort, providing a complete foundation in algorithmic problem-solving.

## 🎯 Learning Objectives

Through this advanced algorithms project, students will master:

- **🔢 Algorithm Implementation Mastery**: Implement at least 4 different sorting algorithms from scratch using proper C programming techniques
- **📈 Big O Notation Expertise**: Analyze and document time complexity in best, average, and worst-case scenarios for each algorithm
- **🎯 Algorithmic Thinking**: Develop systematic approach to algorithm design, implementation, and optimization
- **⚡ Performance Analysis**: Compare and contrast different sorting strategies based on input size and data characteristics
- **🔧 Data Structure Manipulation**: Master array and linked list operations for efficient sorting implementations
- **📊 Complexity Trade-offs**: Understand space vs time complexity trade-offs in algorithm selection
- **🧮 Mathematical Reasoning**: Apply mathematical analysis to predict and verify algorithm performance
- **💻 Code Optimization**: Write efficient, readable, and maintainable sorting algorithm implementations

## 🛠️ Tech Stack

**Core Technologies:**
- **C Programming Language**: Primary implementation language for algorithm development
- **GCC Compiler**: Standard C compiler with optimization flags for performance testing
- **Big O Analysis**: Mathematical framework for complexity evaluation

**Development Tools:**
- **Makefile**: Build automation and compilation management
- **Valgrind**: Memory leak detection and profiling
- **GDB**: Debugging and algorithm step-through analysis
- **Time Profiling**: Performance measurement and benchmarking tools

**Algorithm Categories:**
- **Simple Sorts**: Bubble, Selection, Insertion Sort (O(n²))
- **Advanced Sorts**: Merge, Heap, Quick Sort (O(n log n))
- **Specialized Sorts**: Counting, Radix, Shell Sort
- **Hybrid Approaches**: Cocktail Sort, Quick Sort with Hoare partition

## 📁 Project Structure

```
sorting_algorithms/
├── 📄 README.md                    # Project documentation
├── 📄 sort.h                       # Header file with function prototypes
├── 📄 print_array.c                # Utility function for array visualization
├── 📄 print_list.c                 # Utility function for list visualization
├── 📄 deck.h                       # Card deck structure for advanced sorting
│
├── 🔵 Simple Sorting Algorithms
│   ├── 0-bubble_sort.c             # Bubble Sort implementation
│   ├── 1-insertion_sort_list.c     # Insertion Sort for linked lists
│   └── 2-selection_sort.c          # Selection Sort implementation
│
├── 🟢 Advanced Sorting Algorithms
│   ├── 3-quick_sort.c              # Quick Sort with Lomuto partition
│   ├── 103-merge_sort.c            # Merge Sort implementation
│   ├── 104-heap_sort.c             # Heap Sort implementation
│   └── 107-quick_sort_hoare.c      # Quick Sort with Hoare partition
│
├── 🟡 Specialized Algorithms
│   ├── 100-shell_sort.c            # Shell Sort implementation
│   ├── 101-cocktail_sort_list.c    # Cocktail Shaker Sort
│   ├── 102-counting_sort.c         # Counting Sort implementation
│   ├── 105-radix_sort.c            # Radix Sort implementation
│   ├── 106-bitonic_sort.c          # Bitonic Sort implementation
│   └── 1000-sort_deck.c            # Card deck sorting algorithm
│
└── 📊 Big O Analysis Files
    ├── 0-O, 1-O, 2-O, 3-O...       # Time complexity documentation
    └── 101-O, 102-O, 103-O...      # Complexity for each algorithm
```

## 🚀 Getting Started

### Prerequisites

- **GCC Compiler**: Version 4.8.4 or higher
- **Linux/Unix Environment**: For optimal development experience
- **Basic C Knowledge**: Understanding of pointers, arrays, and structures
- **Mathematical Foundation**: Basic understanding of logarithms and complexity analysis

### Installation

1. **Clone the repository**:
```bash
git clone https://github.com/yungryce/sorting_algorithms.git
cd sorting_algorithms
```

2. **Compile individual algorithms**:
```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
gcc -Wall -Wextra -Werror -pedantic 1-insertion_sort_list.c 1-main.c print_list.c -o insertion
```

3. **Create test programs**:
```bash
# Test with sample data
echo "Testing Bubble Sort..."
./bubble
```

### Running the Project

```bash
# Test individual sorting algorithms
./bubble                    # Run Bubble Sort
./insertion                 # Run Insertion Sort
./selection                 # Run Selection Sort

# Compare algorithm performance
time ./quick_sort          # Measure execution time
valgrind ./merge_sort      # Check memory usage
```

## 💡 Usage

### Basic Algorithm Testing

```c
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    print_array(array, n);
    
    bubble_sort(array, n);
    
    printf("Sorted array: ");
    print_array(array, n);
    return (0);
}
```

### Performance Analysis

```bash
# Test with different input sizes
./algorithm_test 100       # Small dataset
./algorithm_test 10000     # Medium dataset  
./algorithm_test 1000000   # Large dataset

# Compare algorithms
./performance_comparison
```

## 🏆 Implemented Algorithms

### Simple Sorting Algorithms (O(n²))

| Algorithm | Best Case | Average Case | Worst Case | Space | Stable |
|-----------|-----------|--------------|------------|-------|--------|
| **Bubble Sort** | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| **Selection Sort** | O(n²) | O(n²) | O(n²) | O(1) | ❌ |
| **Insertion Sort** | O(n) | O(n²) | O(n²) | O(1) | ✅ |

### Advanced Sorting Algorithms (O(n log n))

| Algorithm | Best Case | Average Case | Worst Case | Space | Stable |
|-----------|-----------|--------------|------------|-------|--------|
| **Quick Sort (Lomuto)** | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ |
| **Quick Sort (Hoare)** | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ |
| **Merge Sort** | O(n log n) | O(n log n) | O(n log n) | O(n) | ✅ |
| **Heap Sort** | O(n log n) | O(n log n) | O(n log n) | O(1) | ❌ |

### Specialized Algorithms

| Algorithm | Best Case | Average Case | Worst Case | Space | Notes |
|-----------|-----------|--------------|------------|-------|-------|
| **Counting Sort** | O(n + k) | O(n + k) | O(n + k) | O(k) | Integer only |
| **Radix Sort** | O(d × n) | O(d × n) | O(d × n) | O(n + k) | Non-negative |
| **Shell Sort** | O(n log n) | O(n^1.5) | O(n²) | O(1) | Gap sequence |
| **Cocktail Sort** | O(n) | O(n²) | O(n²) | O(1) | Bidirectional |

## 📊 Time Complexity Analysis

### Big O Notation Files

Each algorithm includes a corresponding Big O file with three lines:
1. **Best-case time complexity**
2. **Average-case time complexity**
3. **Worst-case time complexity**

Example for Bubble Sort (`0-O`):
```
O(n)
O(n^2)
O(n^2)
```

### Performance Characteristics

- **O(n)**: Linear time - best possible for comparison-based sorting (best case only)
- **O(n log n)**: Optimal for comparison-based sorting algorithms
- **O(n²)**: Quadratic time - inefficient for large datasets
- **O(n + k)**: Linear time for non-comparison sorts (k = range of input)

## 🔍 Algorithm Comparison

### When to Use Each Algorithm

- **Bubble Sort**: Educational purposes, very small datasets
- **Selection Sort**: When memory writes are expensive
- **Insertion Sort**: Small datasets, nearly sorted data
- **Quick Sort**: General purpose, average case optimization
- **Merge Sort**: Stable sort required, guaranteed O(n log n)
- **Heap Sort**: Space-constrained environments
- **Counting Sort**: Integer data with known range
- **Radix Sort**: Large datasets of integers/strings

## 📚 Resources

### Algorithm Analysis
- [Big O Cheat Sheet](https://www.bigocheatsheet.com/)
- [Introduction to Algorithms (CLRS)](https://mitpress.mit.edu/books/introduction-algorithms)
- [Sorting Algorithm Visualizations](https://www.toptal.com/developers/sorting-algorithms)

### C Programming
- [The C Programming Language](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628)
- [GCC Compiler Documentation](https://gcc.gnu.org/onlinedocs/)

### Mathematical Foundations
- [Asymptotic Notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Algorithm Complexity Analysis](https://www.khanacademy.org/computing/computer-science/algorithms)

## 👥 Contributors

**Primary Author**: Chigbu Joshua
- 📧 Email: [chigbujoshua@yahoo.com](mailto:chigbujoshua@yahoo.com)
- 🐙 GitHub: [@yungryce](https://github.com/yungryce)
- 🎓 ALX Software Engineering Program

---

<div align="center">
  <p><strong>🏫 ALX Software Engineering Program</strong></p>
  <p><em>Project: 0x1B. C - Sorting algorithms & Big O</em></p>
  <p>⭐ Star this repository if it helped you learn sorting algorithms!</p>
</div>