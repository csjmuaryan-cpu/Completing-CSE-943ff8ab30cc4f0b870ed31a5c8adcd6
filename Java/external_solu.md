Of course. Here are the answers to the questions from the "Object Oriented Programming with Java" exam paper.

***

### **SECTION A**

**1. Attempt all questions in brief.**

**a. Describe JVM and byte code in Java Architecture.**
*   **JVM (Java Virtual Machine):** The JVM is an abstract machine that provides a runtime environment for executing Java bytecode. It is the component that makes Java "platform-independent". Its primary tasks are to load code, verify code, execute code, and manage memory (including garbage collection).
*   **Bytecode:** When a Java source file (`.java`) is compiled, it is converted into an intermediate, platform-independent code called bytecode (`.class` file). This bytecode is then interpreted and executed by the JVM on any platform that has a compatible JVM installed.

**b. Define the concept of classes and object in Java with a suitable example.**
*   **Class:** A class is a blueprint or template used to create objects. It defines the common properties (attributes or fields) and behaviors (methods) that objects of that type will have.
*   **Object:** An object is a real-world entity and an instance of a class. It has a state (the values of its attributes) and behavior (the actions it can perform via its methods).
*   **Example:**
    ```java
    // Class (Blueprint)
    class Car {
        String color; // Attribute
        void startEngine() { // Behavior
            System.out.println("Engine started!");
        }
    }

    // Creating an Object (Instance)
    Car myCar = new Car();
    myCar.color = "Red"; // Setting state
    myCar.startEngine(); // Performing behavior
    ```

**c. Explain Interfaces in Java with suitable example.**
An **Interface** in Java is a reference type, similar to a class, that can contain only constants, method signatures, default methods, static methods, and nested types. It represents a "contract" that a class can agree to fulfill by using the `implements` keyword. It is a mechanism to achieve 100% abstraction and multiple inheritance of type.

*   **Example:**
    ```java
    // Interface (Contract)
    interface Animal {
        void makeSound(); // Abstract method
    }

    // Class implementing the interface
    class Dog implements Animal {
        public void makeSound() {
            System.out.println("Woof");
        }
    }

    // Class implementing the interface
    class Cat implements Animal {
        public void makeSound() {
            System.out.println("Meow");
        }
    }
    ```

**d. Describe all the keywords used for exception handling in Java.**
The five keywords used for exception handling in Java are:
1.  **`try`**: Defines a block of code to be tested for errors while it is being executed.
2.  **`catch`**: Defines a block of code to be executed if an exception of a specific type occurs in the `try` block.
3.  **`finally`**: Defines a block of code that will be executed regardless of whether an exception is thrown or not. It is typically used for cleanup tasks like closing resources.
4.  **`throw`**: Used to manually throw a specific exception from a method or block of code.
5.  **`throws`**: Used in a method signature to declare the types of exceptions that the method might throw, delegating the handling responsibility to the calling method.

**e. Describe various states achieved by the thread in its life cycle.**
A Java thread can be in one of the following five states:
1.  **New**: A thread is in this state when it has been created but the `start()` method has not yet been called.
2.  **Runnable**: A thread is in this state after `start()` is called. It is ready to run and is waiting for the thread scheduler to allocate CPU time.
3.  **Running**: The thread is currently being executed by the CPU.
4.  **Blocked/Waiting**: The thread is temporarily inactive. It can enter this state by waiting for a lock, calling `sleep()`, `wait()`, or `join()`.
5.  **Terminated (Dead)**: A thread enters this state when it has finished its execution (the `run()` method completes) or is otherwise terminated.

**f. Write a Java program to create an ArrayList<String> with five items and display all the elements using forEach method.**
```java
import java.util.ArrayList;
import java.util.List;

public class ArrayListForEachExample {
    public static void main(String[] args) {
        // Create an ArrayList of String
        List<String> fruits = new ArrayList<>();

        // Add five items to the list
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Cherry");
        fruits.add("Date");
        fruits.add("Elderberry");

        // Display all elements using the forEach method and a lambda expression
        System.out.println("The elements in the ArrayList are:");
        fruits.forEach(fruit -> System.out.println(fruit));
    }
}
```

**g. Explain the concept of Sealed classes in Java with suitable example.**
**Sealed classes** (and interfaces), introduced in Java 17, provide a way to restrict which other classes or interfaces can extend or implement them. This gives the author of a class fine-grained control over inheritance, which is particularly useful for pattern matching in switch expressions.

*   **Example:**
    A `Shape` class can be sealed to permit only `Circle` and `Square` as subclasses.
    ```java
    // The sealed class specifies its permitted subclasses
    public sealed class Shape permits Circle, Square {
        // ... class members
    }

    // Permitted subclasses must be declared as final, sealed, or non-sealed
    public final class Circle extends Shape { /* ... */ }
    public final class Square extends Shape { /* ... */ }

    // This would cause a compile-time error:
    // public class Triangle extends Shape { /* ... */ }
    ```

***

### **SECTION B**

**2. Attempt any *three* of the following:**

**a. Explain abstraction and abstract classes in Java. Describe abstract method. With a suitable example demonstrate the application of abstract classes.**

*   **Abstraction**: Abstraction is an OOP concept that focuses on hiding the complex implementation details and showing only the essential features of an object. It helps in managing complexity by modeling classes based on their relevant attributes and behaviors.
*   **Abstract Class**: A class declared with the `abstract` keyword. It cannot be instantiated on its own and must be subclassed. It can contain both abstract methods (without a body) and concrete methods (with a body). It is used to achieve partial abstraction.
*   **Abstract Method**: A method declared with the `abstract` keyword and without an implementation (i.e., no method body). It acts as a placeholder, forcing subclasses to provide a concrete implementation.

**Example Application:**
Consider a `Vehicle` class. All vehicles share common characteristics but have specific ways of functioning.

```java
// Abstract class providing a template for vehicles
abstract class Vehicle {
    // Concrete method, common to all vehicles
    public void stop() {
        System.out.println("Vehicle stopped.");
    }

    // Abstract method, must be implemented by subclasses
    public abstract void startEngine();
}

// Concrete subclass Car
class Car extends Vehicle {
    @Override
    public void startEngine() {
        System.out.println("Car engine started with a key turn.");
    }
}

// Concrete subclass Motorcycle
class Motorcycle extends Vehicle {
    @Override
    public void startEngine() {
        System.out.println("Motorcycle engine started with a kick.");
    }
}

public class Main {
    public static void main(String[] args) {
        // Vehicle vehicle = new Vehicle(); // Compile error: Cannot instantiate abstract class
        Vehicle myCar = new Car();
        Vehicle myMotorcycle = new Motorcycle();

        myCar.startEngine(); // Calls Car's implementation
        myCar.stop();        // Calls Vehicle's implementation

        myMotorcycle.startEngine(); // Calls Motorcycle's implementation
        myMotorcycle.stop();        // Calls Vehicle's implementation
    }
}
```

**b. Describe the ways to create the threads in Java with suitable code. Also explain which method is more suitable to create threads.**

There are two primary ways to create a thread in Java:

**1. Extending the `Thread` class:**
A class can extend the `java.lang.Thread` class and override its `run()` method to define the thread's execution logic.
*   **Code:**
    ```java
    class MyThread extends Thread {
        public void run() {
            System.out.println("Thread is running by extending Thread class.");
        }
    }
    // To run:
    // MyThread t1 = new MyThread();
    // t1.start();
    ```

**2. Implementing the `Runnable` interface:**
A class can implement the `java.lang.Runnable` interface and provide the implementation for its `run()` method. An instance of this class is then passed to the `Thread` class's constructor.
*   **Code:**
    ```java
    class MyRunnable implements Runnable {
        public void run() {
            System.out.println("Thread is running by implementing Runnable interface.");
        }
    }
    // To run:
    // MyRunnable myRunnable = new MyRunnable();
    // Thread t2 = new Thread(myRunnable);
    // t2.start();
    ```

**Which method is more suitable?**

Implementing the `Runnable` interface is generally considered the more suitable and preferred method for the following reasons:
*   **Overcomes Single Inheritance Limitation**: Java does not support multiple inheritance of classes. If your class needs to extend another class (e.g., `JFrame`), you cannot also extend `Thread`. However, you can implement multiple interfaces.
*   **Better Object-Oriented Design**: Implementing `Runnable` promotes good design by separating the task (the `run()` logic) from the execution mechanism (the `Thread` object). This promotes composition over inheritance. Your class defines a task that can be run, rather than becoming a specialized type of `Thread`.
*   **Flexibility and Reusability**: The `Runnable` object can be shared among multiple `Thread` objects and can also be used with other services like `ExecutorService`.

**d. Describe Collections framework in Java with a suitable diagram displaying interfaces and classes and their hierarchy. Also explain the List, Set and Queue interface.**

The **Java Collections Framework** is a unified architecture for representing and manipulating groups of objects (collections). It provides interfaces, concrete implementation classes, and algorithms to work with data structures.

**Hierarchy Diagram:**
```
            +---------------+
            |   Iterable    | (Interface)
            +---------------+
                   ^
                   | extends
            +---------------+
            |  Collection   | (Interface)
            +---------------+
                ^      ^      ^
                |      |      | extends
      +---------+      |      +----------+
      |                |                 |
+-----------+    +-----------+     +-----------+
|   List    |    |    Set    |     |   Queue   | (Interfaces)
+-----------+    +-----------+     +-----------+
      |              |                 |
(implements)   (implements)      (implements)
      |              |                 |
+-------------+  +-----------+     +--------------+
| ArrayList   |  | HashSet   |     | LinkedList   |
| LinkedList  |  | TreeSet   |     | PriorityQueue| (Classes)
| Vector      |  +-----------+     +--------------+
+-------------+
```
*(Note: `Map` is also part of the framework but does not extend `Collection`)*

**Explanation of Interfaces:**
*   **`List` Interface**: An ordered collection that allows duplicate elements. Elements can be accessed by their integer index.
    *   **Common Implementations**:
        *   `ArrayList`: A resizable array implementation. Fast for random access (`get`), but slower for insertions/deletions in the middle.
        *   `LinkedList`: A doubly-linked list implementation. Fast for insertions/deletions, but slower for random access.

*   **`Set` Interface**: A collection that does not allow duplicate elements, modeling the mathematical set abstraction.
    *   **Common Implementations**:
        *   `HashSet`: Uses a hash table for storage. Offers the best performance but makes no guarantees about the iteration order.
        *   `TreeSet`: Stores elements in a sorted (ascending) order.

*   **`Queue` Interface**: A collection designed for holding elements prior to processing. It typically orders elements in a FIFO (First-In, First-Out) manner, though some implementations like `PriorityQueue` order based on priority.
    *   **Common Implementations**:
        *   `LinkedList`: Implements the `Queue` interface, providing FIFO behavior.
        *   `PriorityQueue`: Elements are ordered based on their natural ordering or a supplied `Comparator`.

***

### **SECTION C**

**3. Attempt any *one* part of the following:**

**(a) Illustrate polymorphism and its types in Java. Differentiate between run-time and compile-time polymorphism. Write super class Shape with method displayArea() and sub class Rectangle. Demonstrate method overriding with this example.**

*   **Polymorphism**: The ability of an object to take on many forms. In Java, it allows a single reference variable to refer to objects of different classes (related by inheritance) and a single action (method call) to be performed in different ways depending on the object's actual type.

*   **Types of Polymorphism**:
    1.  **Compile-time Polymorphism (Static Binding)**: Achieved through **method overloading**. The compiler resolves the method call at compile time by checking the method's signature (name and parameter list).
    2.  **Run-time Polymorphism (Dynamic Binding)**: Achieved through **method overriding**. The method call is resolved at runtime by the JVM. The JVM determines which method to execute based on the actual object type, not the reference type.

*   **Difference between Compile-time and Run-time Polymorphism**:
| Feature | Compile-time (Overloading) | Run-time (Overriding) |
| :--- | :--- | :--- |
| **How it's achieved** | Multiple methods in the same class with the same name but different parameters. | A subclass provides a specific implementation for a method from its superclass. |
| **Resolution Time** | Resolved at compile time. | Resolved at run time. |
| **Binding** | Static or Early Binding. | Dynamic or Late Binding. |
| **Involvement** | Occurs within a single class. | Requires inheritance (superclass and subclass). |

*   **Example (Method Overriding):**
    ```java
    // Super class
    class Shape {
        public void displayArea() {
            System.out.println("The area of the shape is not defined.");
        }
    }

    // Sub class
    class Rectangle extends Shape {
        private double length;
        private double width;

        public Rectangle(double length, double width) {
            this.length = length;
            this.width = width;
        }

        // Overriding the displayArea() method
        @Override
        public void displayArea() {
            double area = length * width;
            System.out.println("Area of the Rectangle is: " + area);
        }
    }

    public class PolymorphismDemo {
        public static void main(String[] args) {
            // A Shape reference can hold a Rectangle object
            Shape myShape = new Rectangle(10.0, 5.0);

            // This call is resolved at runtime.
            // JVM checks the actual object type (Rectangle) and calls its method.
            myShape.displayArea(); // Output: Area of the Rectangle is: 50.0
        }
    }
    ```

**4. Attempt any *one* part of the following:**

**(a) Differentiate between checked and unchecked exceptions in Java. Write a Java program to demonstrate Arithmetic Exception handlings.**

*   **Difference between Checked and Unchecked Exceptions**:
| Feature | Checked Exceptions | Unchecked Exceptions (Runtime Exceptions) |
| :--- | :--- | :--- |
| **Compiler Check**| Checked at compile-time. The compiler forces handling. | Not checked at compile-time. Occur at runtime. |
| **Parent Class** | Subclasses of `Exception` (excluding `RuntimeException`). | Subclasses of `RuntimeException`. |
| **Handling** | Must be handled with `try-catch` or declared with `throws`. | Handling is optional, but good practice. |
| **Cause** | Typically external factors beyond the program's control (e.g., file not found, network error). | Typically programming errors (e.g., null pointer, division by zero, invalid index). |
| **Examples** | `IOException`, `SQLException`, `ClassNotFoundException`. | `NullPointerException`, `ArrayIndexOutOfBoundsException`, `ArithmeticException`. |

*   **Program demonstrating `ArithmeticException` handling**:
    ```java
    import java.util.InputMismatchException;
    import java.util.Scanner;

    public class ArithmeticExceptionDemo {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            try {
                System.out.print("Enter the numerator: ");
                int numerator = scanner.nextInt();

                System.out.print("Enter the denominator: ");
                int denominator = scanner.nextInt();

                // This line can throw an ArithmeticException if denominator is 0
                int result = numerator / denominator;
                System.out.println("Result of division: " + result);

            } catch (ArithmeticException e) {
                // This block executes if the user enters 0 for the denominator
                System.out.println("Error: Cannot divide by zero.");
            } catch (InputMismatchException e) {
                // This block executes if the user enters non-integer input
                System.out.println("Error: Invalid input. Please enter integers only.");
            } finally {
                // This block always executes, for cleanup
                System.out.println("Program has finished the operation.");
                scanner.close();
            }
        }
    }
    ```

**5. Attempt any *one* part of the following:**

**(a) Explain Java stream API and its applications. Describe Intermediate and terminal operations with suitable example. Write a program to print sum of all even numbers form an ArrayList<Integer> containing all integers from 1 to 10.**

*   **Java Stream API**: Introduced in Java 8, the Stream API provides a functional, declarative way to process sequences of elements from a source (like a Collection). Streams are not data structures; they are a pipeline of operations that process data.
*   **Applications**:
    *   Filtering, mapping, sorting, and reducing data in collections.
    *   Writing more readable and concise code for complex data processing tasks.
    *   Enabling easy parallel processing of data (`.parallelStream()`).

*   **Stream Operations**:
    1.  **Intermediate Operations**: These operations transform a stream into another stream. They are *lazy* (not executed until a terminal operation is called) and can be chained.
        *   Examples: `filter()` (selects elements), `map()` (transforms elements), `sorted()`.
    2.  **Terminal Operations**: These operations produce a final result or a side-effect, consuming the stream. Once a terminal operation is performed, the stream cannot be reused.
        *   Examples: `forEach()` (iterates), `collect()` (creates a collection), `reduce()` (aggregates to a single value), `sum()`, `count()`.

*   **Program to sum even numbers from 1 to 10**:
    ```java
    import java.util.ArrayList;
    import java.util.List;

    public class StreamSumExample {
        public static void main(String[] args) {
            // Create an ArrayList with integers from 1 to 10
            List<Integer> numbers = new ArrayList<>();
            for (int i = 1; i <= 10; i++) {
                numbers.add(i);
            }

            System.out.println("Original list: " + numbers);

            // Use the Stream API to find the sum of even numbers
            int sumOfEvens = numbers.stream()               // 1. Create a stream
                                   .filter(n -> n % 2 == 0)   // 2. Intermediate op: filter for even numbers
                                   .mapToInt(Integer::intValue) // 3. Intermediate op: convert to IntStream
                                   .sum();                     // 4. Terminal op: calculate the sum

            System.out.println("The sum of all even numbers is: " + sumOfEvens); // Output: 30
        }
    }
    ```

**6. Attempt any *one* part of the following:**

**(a) Describe Linked List in Java collection framework. With suitable example describe any five methods available in Linked Lists.**

*   **LinkedList in Java**: The `LinkedList` class is an implementation of the `List` and `Deque` (Double-Ended Queue) interfaces. It is based on a doubly-linked list data structure, where each element (node) holds a reference to the previous and next element in the sequence.
*   **Characteristics**:
    *   Fast for adding and removing elements from the beginning, end, or middle (if an iterator is used).
    *   Slow for random access (`get(index)`) because it may require traversing the list from the start or end.
    *   Consumes more memory than `ArrayList` due to the overhead of storing pointers.
    *   Allows duplicate elements and `null` values.

*   **Five Methods with Example**:
    1.  `add(E element)`: Appends an element to the end of the list.
    2.  `addFirst(E element)`: Inserts an element at the beginning of the list.
    3.  `remove(int index)`: Removes the element at the specified index.
    4.  `get(int index)`: Returns the element at the specified index.
    5.  `size()`: Returns the number of elements in the list.

*   **Example Code**:
    ```java
    import java.util.LinkedList;

    public class LinkedListMethodsDemo {
        public static void main(String[] args) {
            LinkedList<String> languages = new LinkedList<>();

            // 1. add()
            languages.add("Java");
            languages.add("Python");
            System.out.println("After add(): " + languages); // [Java, Python]

            // 2. addFirst()
            languages.addFirst("C++");
            System.out.println("After addFirst(): " + languages); // [C++, Java, Python]

            // 3. get()
            String firstLang = languages.get(0);
            System.out.println("Element at index 0: " + firstLang); // C++

            // 4. remove()
            languages.remove(1); // Removes "Java"
            System.out.println("After removing element at index 1: " + languages); // [C++, Python]

            // 5. size()
            int listSize = languages.size();
            System.out.println("Current size of the list: " + listSize); // 2
        }
    }
    ```

**7. Attempt any *one* part of the following:**

**(b) Describe following 3. Spring boot framework and its benefits 4. RESTFUL API with Spring boot**

**3. Spring Boot Framework and its Benefits**
*   **Spring Boot**: An open-source, opinionated framework built on top of the core Spring framework. It is designed to simplify the process of creating stand-alone, production-grade Spring-based applications that you can "just run". It follows a "convention over configuration" approach.
*   **Benefits**:
    *   **Auto-Configuration**: Automatically configures the application based on the dependencies present on the classpath. For instance, if `spring-boot-starter-web` is included, it automatically configures an embedded Tomcat server and Spring MVC.
    *   **Starter Dependencies**: Provides "starter" dependencies (e.g., `spring-boot-starter-data-jpa`) that simplify build configuration by providing a curated set of dependencies for a specific purpose.
    *   **Embedded Servers**: Allows applications to be packaged as executable JAR files with embedded servers (like Tomcat, Jetty, or Undertow), eliminating the need for external server setup and WAR deployments.
    *   **Production-Ready Features**: Includes built-in support for production features like health checks, metrics, and externalized configuration, making it easy to monitor and manage applications.
    *   **No XML Configuration**: Drastically reduces the need for boilerplate code and XML configuration, favoring annotation-based and Java-based configuration.

**4. RESTful API with Spring Boot**
*   **RESTful API**: An API (Application Programming Interface) that adheres to the constraints of the REST (REpresentational State Transfer) architectural style. It uses standard HTTP methods (GET, POST, PUT, DELETE) to perform CRUD (Create, Read, Update, Delete) operations on resources.
*   **Building with Spring Boot**: Spring Boot makes building RESTful APIs extremely simple.
    1.  **Add Starter**: Include the `spring-boot-starter-web` dependency.
    2.  **Create Controller**: Annotate a class with `@RestController`. This tells Spring that the class will handle web requests and that method return values should be written directly to the response body (typically as JSON).
    3.  **Map Endpoints**: Use mapping annotations like `@GetMapping`, `@PostMapping`, etc., to map HTTP requests to controller methods.

*   **Simple Code Example**:
    ```java
    import org.springframework.web.bind.annotation.*;

    // A simple representation of a User
    record User(int id, String name) {}

    @RestController
    @RequestMapping("/api/users") // Base path for all methods in this controller
    public class UserController {

        @GetMapping("/{id}")
        public User getUserById(@PathVariable int id) {
            // In a real app, this would fetch from a database
            return new User(id, "John Doe"); // Spring Boot automatically converts this to JSON
        }

        @PostMapping
        public String createUser(@RequestBody User user) {
            // In a real app, this would save the user to a database
            System.out.println("Creating user: " + user.name());
            return "User " + user.name() + " created successfully.";
        }
    }
    ```