# Unexpected Behavior with Nested Vectors in C++

This repository demonstrates a subtle but important issue related to nested vectors (vectors of vectors) in C++.  The core problem revolves around how copies of inner vectors are handled.

## The Problem

When you create a copy of an inner vector from a nested vector using assignment, you're not creating a deep copy. Instead, you're creating a shallow copy that still points to the same underlying data in memory. Modifying the copy can therefore inadvertently modify the original vector as well.

## How to Reproduce

1. Compile and run the `bug.cpp` file.
2. Observe the output; the change made to the copy of the inner vector also affects the original nested vector.

## The Solution

The `bugSolution.cpp` file offers a solution. To correctly modify an inner vector without changing the original, you need to create a deep copy using a suitable method, like copying element-by-element or using a function that creates copies recursively.

## Lessons Learned

* Be mindful of shallow vs. deep copies when working with nested vectors (or other complex data structures) in C++.
* Always ensure you are correctly handling memory and data ownership to avoid unexpected behavior and potential bugs.