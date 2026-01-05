Excellent. These pages cover the fundamental building blocks of Java programming: operators and control flow statements. Here are detailed, organized notes based on the provided textbook chapters.

### Notes on Java Operators & Control Statements (Chapters 2 & 3)

These notes explain how to perform calculations, make decisions, and control the flow of execution in a Java program.

---

#### 1. Operators in Java (Chapter 2)

An operator is a symbol that tells the compiler to perform a specific mathematical or logical manipulation.

##### a. Arithmetic Operators

These are used for performing basic mathematical calculations.

| Operator | Meaning | Example | Result of `10 / 3` and `10 % 3` |
| :--- | :--- | :--- | :--- |
| `+` | Addition | `a + b` | `10 + 3` is `13` |
| `-` | Subtraction | `a - b` | `10 - 3` is `7` |
| `*` | Multiplication | `a * b` | `10 * 3` is `30` |
| `/` | Division | `a / b` | `10 / 3` is `3` (integer division truncates) |
| `%` | Modulus (remainder) | `a % b` | `10 % 3` is `1` |

*   **Integer Division:** When dividing two integers, the result is an integer, and any fractional part is discarded (truncated). For example, `10 / 3` results in `3`.
*   **Modulus Operator (`%`):** Returns the remainder of a division. It can be applied to both integer and floating-point types.

##### b. Increment and Decrement Operators

These are unary operators that add or subtract 1 from their operand.

*   `++`: Increment (adds 1)
*   `--`: Decrement (subtracts 1)

They can be used in two forms: **prefix** and **postfix**. The form matters when the operator is part of a larger expression.

*   **Prefix Form (`++x`):** The value is incremented **first**, and *then* the new value is used in the expression.
    ```java
    int x = 10;
    int y = ++x; // x becomes 11, then y is assigned 11.
    // Result: x is 11, y is 11.
    ```
*   **Postfix Form (`x++`):** The original value is used in the expression **first**, and *then* the variable is incremented.
    ```java
    int x = 10;
    int y = x++; // y is assigned 10, then x becomes 11.
    // Result: x is 11, y is 10.
    ```

##### c. Relational and Logical Operators

These operators are used to compare values and combine boolean expressions. The result of these operations is always a `boolean` value (`true` or `false`).

**Relational Operators:**

| Operator | Meaning |
| :--- | :--- |
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

**Logical Operators:**

| Operator | Meaning |
| :--- | :--- |
| `&` | AND |
| `|` | OR |
| `^` | XOR (exclusive OR) |
| `!` | NOT (unary) |
| `&&` | Short-circuit AND |
| `||` | Short-circuit OR |

##### d. Short-Circuit Logical Operators

The `&&` (AND) and `||` (OR) operators are "short-circuit" versions that can improve efficiency and prevent errors.

*   **Short-circuit AND (`&&`):** If the left operand is `false`, the right operand is **not evaluated** because the entire expression must be `false`.
*   **Short-circuit OR (`||`):** If the left operand is `true`, the right operand is **not evaluated** because the entire expression must be `true`.

**Key Use Case:** Preventing runtime errors, such as a divide-by-zero error.
```java
// If d is 0, the second part (n % d) is never evaluated, preventing an error.
if (d != 0 && (n % d) == 0) {
    System.out.println(d + " is a factor of " + n);
}
```

##### e. Assignment Operators

*   **Simple Assignment (`=`):** Assigns the value on the right to the variable on the left.
*   **Compound Assignment:** A shorthand that combines an arithmetic or bitwise operator with an assignment.
    *   `x += 10;` is the same as `x = x + 10;`
    *   `x -= 5;` is the same as `x = x - 5;`
    *   Other examples: `*=`, `/=`, `%=`, `&=`, `|=`, `^=`.

##### f. Type Conversion and Casting

*   **Automatic (Widening) Conversion:** Java automatically converts a value from a smaller data type to a larger one if they are compatible and there's no risk of losing information.
    *   Example: Assigning an `int` value to a `long` or `double` variable.
    *   `int i = 100; double d = i;` // Valid, `i` is widened to a double.

*   **Explicit Conversion (Casting / Narrowing):** Manually converting a larger type to a smaller type. This is required when there is a potential loss of information.
    *   **Syntax:** `(target-type) value`
    *   **Truncation:** When casting a floating-point value to an integer, the fractional part is lost. `int i = (int) 3.14; // i becomes 3`
    *   **Loss of Information:** When casting a large integer to a smaller type (like `int` to `byte`), the value may be completely different if it's out of the target type's range. `byte b = (byte) 257; // b becomes 1`

##### g. Operator Precedence

Java defines a specific order in which operators are evaluated. Key rules:
1.  Parentheses `()` have the highest precedence and can be used to force a specific order of evaluation.
2.  Unary operators (`++`, `--`, `!`) are evaluated next.
3.  Multiplicative operators (`*`, `/`, `%`) are evaluated before additive operators (`+`, `-`).
4.  Relational operators (`<`, `>`) are evaluated before equality operators (`==`, `!=`).
5.  Logical operators are evaluated after relational operators.
6.  Assignment operators (`=`, `+=`) have one of the lowest precedences.

---

#### 2. Program Control Statements (Chapter 3)

These statements allow you to control the flow of your program's execution by making decisions and creating loops.

##### a. Reading Input from the Keyboard

*   The simplest way to read a single character is using `System.in.read()`.
*   It reads one byte from the input and returns it as an `int`. You must cast it to a `char` to use it as a character.
*   **Important:** Console input is **line-buffered**. You must press `ENTER` after typing your input. This also places a newline character in the input buffer, which may need to be handled in subsequent reads.

##### b. Selection Statements

*   **`if`, `if-else`:**
    *   `if (condition)`: Executes the following statement or block if the condition is `true`.
    *   `else`: Executes if the `if` condition is `false`.
*   **Nested `if`:** An `if` statement that is the target of another `if` or `else`. An `else` always associates with the nearest `if` that is not already part of an `if-else`.
*   **The `if-else-if` Ladder:** A common structure for testing a series of mutually exclusive conditions.
    ```java
    if (x == 1) { ... }
    else if (x == 2) { ... }
    else if (x == 3) { ... }
    else { ... } // Default case
    ```
*   **The `switch` Statement:** An efficient alternative to a long `if-else-if` ladder when a single value is being compared against multiple constants.
    *   **Syntax:** `switch (expression)`
    *   **`case` labels:** `case constant:`
    *   **`break`:** Crucial for exiting the `switch` after a `case` is executed. Without `break`, execution will **fall through** to the next `case`.
    *   **`default`:** An optional label that executes if no other `case` matches.

##### c. Iteration Statements (Loops)

*   **The `for` Loop:** The most flexible loop, ideal when the number of iterations is known.
    *   **Syntax:** `for (initialization; condition; iteration) { ... }`
    *   Any part of the `for` loop control section can be empty. `for(;;)` creates an infinite loop.
*   **The `while` Loop:** Repeats as long as its condition is true. The condition is checked at the *top* of the loop, so the body may never execute.
    *   **Syntax:** `while (condition) { ... }`
*   **The `do-while` Loop:** Similar to `while`, but the condition is checked at the *bottom*. The loop body will always execute at least once.
    *   **Syntax:** `do { ... } while (condition);`
*   **Nested Loops:** A loop inside another loop. The inner loop completes all its iterations for each single iteration of the outer loop.

##### d. Jump Statements

*   **`break`:**
    *   **Unlabeled `break`:** Immediately terminates the innermost loop or `switch` statement in which it resides.
    *   **Labeled `break`:** Can be used to break out of nested loops or any labeled block of code.
        ```java
        outer: for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (i == 1 && j == 1) {
                    break outer; // Exits both loops
                }
            }
        }
        ```
*   **`continue`:**
    *   **Unlabeled `continue`:** Skips the remainder of the current loop iteration and proceeds to the next iteration.
    *   **Labeled `continue`:** Skips the current iteration and proceeds to the next iteration of the *labeled* loop.