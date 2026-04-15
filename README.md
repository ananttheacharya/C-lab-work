# 🖥️ C Lab Programs

A collection of C programming exercises organized by concept, written as part of my lab coursework. Programs cover everything from basic conditionals to pointers, arrays, strings, and user-defined structs.

---

## 📁 Folder Structure

```
C lab work/
├── loops/          → Programs primarily using for / while / do-while loops
├── if_else/        → Programs primarily using if-else conditional logic
├── arrays/         → Programs that work with single/multi-dimensional arrays
├── strings/        → Programs that manipulate character arrays / strings
├── functions/      → Programs demonstrating user-defined functions
└── structs/        → Programs using C structures (struct)
```

---

## 🔁 Loops

Programs that rely on `for`, `while`, or `do-while` loops as their core logic.

| File | Description |
|------|-------------|
| `pattern1.c` – `pattern9.c` | Prints various star/number patterns using nested loops |
| `fibonacci series.c` | Generates the Fibonacci sequence up to N terms |
| `armstrongnumber.c` | Checks if a number is an Armstrong number |
| `palindromecheck.c` | Checks if a number reads the same forwards and backwards |
| `revint.c` | Reverses the digits of an integer |
| `primecheck.c` | Checks if a given number is prime |
| `hcoftwo.c` | Finds the HCF (GCD) of two numbers |
| `sumdigit.c` | Computes the sum of digits of a number |
| `sumoffirstn.c` | Calculates the sum of first N natural numbers |
| `countposnegative.c` | Counts positive, negative, and zero values from user input |
| `input.c` | Repeatedly accepts numbers and classifies them (pos/neg/zero) using a do-while loop |
| `palindromecheck.c` | Reversal-based palindrome check using a loop |
| `helloworld.c` | 2D array input, display, addition, and multiplication using nested loops |
| `halleluaj .c` | Area of a triangle using Heron's formula |

---

## 🔀 If / Else

Programs whose main logic is driven by conditional branching.

| File | Description |
|------|-------------|
| `alphabetchecker.c` | Checks if a character is an alphabet, digit, or special character |
| `checkposneg.c` | Checks if a number is positive, negative, or zero |
| `evenoddchecker.c` | Determines if a number is even or odd |
| `maxoftwo.c` | Finds the maximum of two numbers |
| `minoftwo.c` | Finds the minimum of two numbers |
| `averageof3.c` | Computes average of three numbers and classifies result |
| `areaoftriangle.c` | Calculates the area of a triangle given base and height |
| `quadraticroots.c` | Finds real/complex roots of a quadratic equation using discriminant |
| `gradecalc.c` | Assigns letter grade based on marks using cascaded if-else |
| `pricequantity.c` | Calculates total price with discount brackets |
| `salarycalcq22.c` | Computes net salary after deductions based on pay grade |
| `telephonebill.c` | Calculates a telephone bill based on units consumed |
| `randomgen.c` | Generates and displays a random number |
| `hohoho.c` | Simple random number generator demo |
| `test1.c` | Bitwise AND test snippet |

---

## 🗃️ Arrays

Programs that store, process, and manipulate data in arrays.

| File | Description |
|------|-------------|
| `array.c` | Basic array input and output operations |
| `minmax.c` | Finds the minimum and maximum element in an array |
| `revarrayinplace.c` | Reverses an array in-place |
| `leftrotate1.c` | Left-rotates an array by one position |
| `removeduplicate.c` | Removes duplicate elements from an array |
| `seperatevenodd.c` | Separates even and odd numbers from an array |
| `freqofeachelement.c` | Counts the frequency of each element in an array |
| `secondlargestelementarray.c` | Finds the second largest element in an array |
| `majorityelement.c` | Finds the element that appears more than n/2 times |
| `pairwithsum.c` | Finds a pair of elements that add up to a target sum |

---

## 🔤 Strings

Programs that work with character arrays and string manipulation.

| File | Description |
|------|-------------|
| `lengthofastring.c` | Finds the length of a string without `strlen()` |
| `reverseastring.c` | Reverses a string manually |
| `stringreverse.c` | Another approach to reversing a string |
| `displaystringreverse.c` | Displays a string in reverse order |
| `checkpalindrome.c` | Checks if a string is a palindrome |
| `checkpalindromestring.c` | Palindrome check using string comparison |
| `comparetwostrings.c` | Compares two strings without `strcmp()` |
| `concatenatestrings.c` | Concatenates two strings without `strcat()` |
| `converttolowercase.c` | Converts a string to lowercase |
| `converttouppercase.c` | Converts a string to uppercase |
| `uppercase.c` | Another uppercase conversion implementation |
| `countwordsinstring.c` | Counts the number of words in a sentence |
| `findsubstring.c` | Searches for a substring within a string |

---

## 🔧 Functions

Programs that demonstrate user-defined functions, return values, and function calls.

| File | Description |
|------|-------------|
| `squareofnumberusingfunc.c` | Returns the square of a number via a function |
| `cubeofnumberusingfunc.c` | Returns the cube of a number via a function |
| `powerofanumber.c` | Computes base^exponent using a custom power function |
| `factorialsuingfunc.c` | Calculates factorial of a number using a recursive/iterative function |
| `returnsum.c` | Returns the sum of two numbers through a function |

---

## 🏗️ Structs

Programs demonstrating the use of C `struct` to group related data.

| File | Description |
|------|-------------|
| `structure 1 .c` | Defines a struct and demonstrates accessing member variables |
| `structure 2.c` | More advanced struct usage with multiple records |

---

## 🛠️ How to Compile & Run

Make sure you have GCC installed. Then compile any file like this:

```bash
gcc loops/fibonacci\ series.c -o fibonacci
./fibonacci
```

Or on Windows (MinGW / Git Bash):

```bash
gcc loops/"fibonacci series.c" -o fibonacci.exe
fibonacci.exe
```

> Some programs use `conio.h` (`getch()`) which is Windows-specific. On Linux/Mac, remove or replace `getch()` with `getchar()`.

---

## 👤 Author

**Anant Acharya** — [@ananttheacharya](https://github.com/ananttheacharya)
