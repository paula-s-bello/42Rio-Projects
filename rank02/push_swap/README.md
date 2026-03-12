# push_swap

## Overview

**push_swap** is a sorting algorithm project from **42 School**. The goal is to sort a list of integers using two stacks (**A** and **B**) and a limited set of operations, while producing the smallest possible number of moves.

The program receives a list of integers as arguments and outputs a sequence of operations that sorts the numbers in ascending order in stack **A**.

---

## Rules and Constraints

* Only two stacks are allowed: **A** and **B**
* Only the following operations can be used:

  * `sa`, `sb`, `ss`
  * `pa`, `pb`
  * `ra`, `rb`, `rr`
  * `rra`, `rrb`, `rrr`
* No memory leaks
* No forbidden functions
* The project must follow the **Norminette** coding standard

---

## Algorithm Used

This implementation uses a **Chunk Sort (Index-Based Sorting)** algorithm.

### Key Ideas

1. **Indexing**

   * All values are converted into indexes based on their sorted order.
   * This allows the algorithm to work with a normalized range (`0` to `n - 1`).

2. **Chunk Division**

   * The indexed values are divided into chunks (ranges).
   * Each chunk is pushed from stack **A** to stack **B**.

3. **Reconstruction**

   * Stack **B** is sorted back into **A** by always pushing the largest index first.

This approach is efficient and well adapted to the constraints of the push_swap project.

---

## Project Structure

```
push_swap/
├── Makefile
├── push_swap.h
├── main.c
├── parse.c
├── error.c
├── stack.c
├── index.c
├── operations_push.c
├── operations_rotate.c
├── operations_reverse.c
├── chunk_sort.c
└── utils.c
```

---

## Compilation

To compile the project:

```bash
make
```

This will generate the executable `push_swap`.

To clean object files:

```bash
make clean
```

To remove all compiled files:

```bash
make fclean
```

To recompile everything:

```bash
make re
```

---

## Usage

```bash
./push_swap <list_of_integers>
```

Example:

```bash
./push_swap 3 2 5 1 4
```

The output will be a list of operations that sort the stack.

---

## Error Handling

The program handles the following errors:

* Non-numeric arguments
* Integer overflow
* Duplicate numbers
* Empty input

In case of error, the program prints `Error` to standard error and exits.

---

## Norminette

* Each function has a single responsibility
* No function exceeds 25 lines
* Maximum of 5 variables per function
* Proper file separation and header usage

The project fully complies with the **42 Norminette**.

---

## Conclusion

This push_swap implementation focuses on clarity, efficiency, and full compliance with 42 School rules. The Chunk Sort strategy provides a solid balance between simplicity and performance, making it suitable for sorting large input sizes within the required constraints.

