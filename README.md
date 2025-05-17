## CodeChef Distinct Arrays:


### Approach:


This C++ program calculates a special result based on a given array for multiple test cases. For each test case, the program first reads an integer `N` (the number of elements), then reads `N` integers into an array `A`. It sorts the array in increasing order, which is crucial for the next step. After sorting, it computes the product of `(A[i] - i)` for each element `A[i]` in the array, where `i` is the index. If `(A[i] - i)` is negative, it uses `0` instead to avoid invalid results.

The result is calculated using modular arithmetic with a modulus value of `998244353` to prevent overflow and keep results manageable. The final result is printed for each test case. This logic can be interpreted as counting how many valid permutations or arrangements exist under a certain constraint where each element must be greater than or equal to its index in the sorted list. If any `A[i] - i` is zero or negative, the whole product becomes zero, indicating that no valid arrangement is possible.

### Array:


### ✅ What is an **array in C++**?

An **array** in C++ is a **collection of elements of the same data type** stored **in contiguous memory locations**. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

---

### 🧾 **Basic Syntax:**

```cpp
data_type array_name[size];
```

### 🧪 **Example:**

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

* `int` → data type
* `numbers` → name of the array
* `5` → number of elements (size)
* `{10, 20, 30, 40, 50}` → initial values

---

### 🛠️ **Accessing Elements:**

C++ arrays use **0-based indexing**, meaning the first element is at index 0.

```cpp
cout << numbers[0];  // Output: 10
numbers[2] = 99;     // Changes third element to 99
```

---

### 📌 Key Points:

* Fixed size (cannot grow or shrink after declaration).
* All elements must be of the **same type**.
* You can use loops to iterate through arrays.

---

### 🔁 **Using a Loop:**

```cpp
for (int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
}
```

Would you like to explore **multidimensional arrays**, **dynamic arrays (like `vector`)**, or **array-related coding problems** next?
