Here are the detailed notes on the Collections Framework, Spring Framework, and Spring Boot, based on the provided document.

### 1. Collections Framework

The Java Collections Framework provides an architecture to store and manipulate groups of objects. It offers ready-made data structures and algorithms, overcoming the limitations of traditional arrays.

#### 1.1. Arrays vs. Collections

| Feature | Arrays | Collections |
| :--- | :--- | :--- |
| **Size** | Fixed in size. | Growable (dynamic) in size. |
| **Data Type** | Can hold only homogeneous (same type) data. | Can hold both homogeneous and heterogeneous objects. |
| **Data Structure** | No underlying data structure; it's a fundamental language feature. | Every collection class is based on a standard data structure (e.g., array, linked list, tree). |
| **Methods** | No ready-made methods for operations; must be implemented manually. | Provides a rich set of ready-made methods for manipulation (sorting, searching, etc.). |
| **Type** | Can hold both primitives (e.g., `int`) and objects. | Can hold only objects. Primitives are auto-boxed into wrapper classes (e.g., `int` becomes `Integer`). |
| **Performance** | Generally high performance for storage and retrieval. | Performance varies by implementation and is generally lower than arrays due to overhead. |

---

#### 1.2. Core Interfaces & Classes

The framework is built around a set of core interfaces. The main ones are:

*   **Collection:** The root interface for most collections.
*   **List:** An ordered collection that allows duplicate elements.
*   **Set:** A collection that does not allow duplicate elements.
*   **Queue:** A collection for holding elements prior to processing (typically FIFO).
*   **Map:** An object that maps keys to values (not a true `Collection`).



---

#### 1.3. List Interface

Represents an ordered sequence of elements. Key characteristics:
*   Allows duplicate elements.
*   Preserves insertion order.
*   Access elements by their integer index.

**Key Implementations:**

*   **`ArrayList`**
    *   **Underlying Structure:** Resizable array.
    *   **Best for:** Frequent retrieval operations. `get()` is a constant-time operation `O(1)`.
    *   **Worst for:** Insertion or deletion in the middle of the list, as it requires shifting elements (`O(n)`).
    *   **Note:** Implements the `RandomAccess` marker interface, indicating fast random access.

*   **`LinkedList`**
    *   **Underlying Structure:** Doubly-linked list.
    *   **Best for:** Frequent insertion and deletion operations in the middle.
    *   **Worst for:** Retrieval operations, as it requires traversing the list from the beginning or end (`O(n)`).
    *   **Note:** Also implements `Deque` (double-ended queue), making it suitable for implementing stacks and queues (`addFirst`, `removeLast`, etc.).

*   **`Vector`**
    *   A legacy, thread-safe (synchronized) version of `ArrayList`.
    *   Performance is lower than `ArrayList` due to synchronization overhead.
    *   Generally avoided in favor of `ArrayList` and explicit synchronization (`Collections.synchronizedList`).

*   **`Stack`**
    *   A legacy, LIFO (Last-In-First-Out) data structure that extends `Vector`.
    *   Provides methods like `push()`, `pop()`, and `peek()`.
    *   It's recommended to use a `Deque` implementation like `ArrayDeque` for stack operations in modern code.

---

#### 1.4. Set Interface

Represents a collection of unique elements. Key characteristics:
*   Does not allow duplicate elements.
*   Does not guarantee insertion order (except for `LinkedHashSet`).

**Key Implementations:**

*   **`HashSet`**
    *   **Underlying Structure:** A hash table (internally a `HashMap`).
    *   **Order:** Does not maintain any order. The order can change over time.
    *   **Performance:** Offers constant-time performance `O(1)` for basic operations (add, remove, contains), assuming a good hash function.
    *   **Nulls:** Allows one `null` element.

*   **`LinkedHashSet`**
    *   **Underlying Structure:** A combination of a hash table and a linked list.
    *   **Order:** Maintains insertion order.
    *   **Performance:** Slightly slower than `HashSet` due to the overhead of maintaining the linked list.

*   **`TreeSet`**
    *   **Underlying Structure:** A balanced binary search tree (Red-Black Tree).
    *   **Order:** Stores elements in a sorted order (natural order or specified by a `Comparator`).
    *   **Performance:** Guarantees `O(log n)` time cost for add, remove, and contains.
    *   **Restrictions:** Does not allow heterogeneous objects (throws `ClassCastException`) unless a `Comparator` is provided. Does not allow `null` elements (throws `NullPointerException`).

---

#### 1.5. Map Interface

Represents a collection of key-value pairs. Key characteristics:
*   Each key must be unique.
*   Values can be duplicated.
*   It is **not** a subtype of the `Collection` interface.

**Key Implementations:**

| Feature | `HashMap` | `LinkedHashMap` | `TreeMap` | `Hashtable` |
| :--- | :--- | :--- | :--- | :--- |
| **Order** | Unordered | Insertion order | Sorted by key | Unordered |
| **Underlying** | Hash Table | Hash Table + Linked List | Red-Black Tree | Hash Table |
| **Nulls** | One null key, multiple null values | One null key, multiple null values | No null keys, multiple null values | No null keys or values |
| **Thread-Safe** | No | No | No | Yes (Synchronized) |
| **Performance** | `O(1)` average | Slightly slower than `HashMap` | `O(log n)` | Slower due to sync |
| **Legacy** | No | No | No | Yes |

---

#### 1.6. Sorting: `Comparable` vs. `Comparator`

| Feature | `Comparable` | `Comparator` |
| :--- | :--- | :--- |
| **Purpose** | Defines the **natural sorting order** for a class. | Defines a **custom or external sorting order**. |
| **Method** | `int compareTo(Object obj)` | `int compare(Object obj1, Object obj2)` |
| **Package** | `java.lang` | `java.util` |
| **Modification**| The class itself must implement the interface. | A separate class implements the interface. No change to the original class needed. |
| **Usage** | Use when there is a single, obvious way to sort objects (e.g., alphabetically, numerically). | Use for multiple sorting strategies, or when you cannot modify the source code of the class to be sorted. |

---

#### 1.7. Cursors (Iterators)

Cursors are used to traverse elements of a collection one by one.

| Feature | `Enumeration` | `Iterator` | `ListIterator` |
| :--- | :--- | :--- | :--- |
| **Legacy** | Yes | No | No |
| **Applicable for** | Legacy classes (`Vector`, `Hashtable`) | Any `Collection` object | Only `List` objects |
| **Movement** | Forward only | Forward only | Bidirectional (forward & backward) |
| **Operations** | Read only | Read, Remove | Read, Remove, Add, Replace |
| **Methods** | `hasMoreElements()`, `nextElement()` | `hasNext()`, `next()`, `remove()` | `hasNext()`, `next()`, `hasPrevious()`, `previous()`, `remove()`, `add()`, `set()` |

---
### 2. Spring Framework

Spring is a powerful, open-source framework for developing enterprise Java applications. It manages the application's infrastructure, allowing developers to focus on business logic.

#### 2.1. Core Concepts

*   **Inversion of Control (IoC):** A design principle where the control of object creation and lifecycle is transferred from the application to a container or framework. Instead of the application creating its dependencies, the framework "injects" them.
*   **Dependency Injection (DI):** The primary design pattern used to implement IoC. The dependencies (other objects an object needs) are supplied by an external entity (the IoC container). This promotes **loose coupling**.
    *   **Constructor-based DI:** Dependencies are provided through the class constructor.
    *   **Setter-based DI:** The container calls setter methods on the bean after invoking a no-argument constructor.
*   **IoC Container:** The core of the Spring Framework. It creates objects, wires them together, configures them, and manages their complete lifecycle.
    *   **`BeanFactory`:** The most basic IoC container.
    *   **`ApplicationContext`:** A more advanced container that extends `BeanFactory`, providing more enterprise-specific functionality. It is the preferred container.

#### 2.2. Aspect-Oriented Programming (AOP)

AOP complements Object-Oriented Programming (OOP) by providing another way to think about program structure. It aims to increase modularity by allowing the separation of **cross-cutting concerns** (e.g., logging, security, transactions).

*   **Key Terminologies:**
    *   **Aspect:** A class that implements a cross-cutting concern.
    *   **Join Point:** A point during the execution of a program, such as the execution of a method.
    *   **Advice:** The action taken by an aspect at a particular join point. Types include:
        *   `@Before`: Runs before the join point.
        *   `@After`: Runs after the join point (finally block).
        *   `@AfterReturning`: Runs after the join point completes normally.
        *   `@AfterThrowing`: Runs if a method exits by throwing an exception.
        *   `@Around`: Wraps around a join point. Most powerful advice.
    *   **Pointcut:** An expression that selects which join points the advice should be applied to.
    *   **Weaving:** The process of linking aspects with other application types or objects to create an advised object. Spring performs weaving at runtime.

#### 2.3. Spring Beans

In Spring, the objects that form the backbone of your application and are managed by the Spring IoC container are called **beans**.

*   **Bean Scopes:** Define the lifecycle and visibility of a bean instance.
    *   **`singleton`:** (Default) Only one instance of the bean is created per container.
    *   **`prototype`:** A new instance is created every time the bean is requested.
    *   **`request`:** Scopes a single bean definition to the lifecycle of a single HTTP request. (Web-aware)
    *   **`session`:** Scopes a single bean definition to the lifecycle of an HTTP Session. (Web-aware)
    *   **`application`:** Scopes a single bean definition to the lifecycle of a `ServletContext`. (Web-aware)
    *   **`websocket`:** Scopes a single bean definition to the lifecycle of a WebSocket. (Web-aware)

*   **Autowiring:** The process where the Spring container automatically satisfies bean dependencies.
    *   **Modes (in XML):** `no`, `byName`, `byType`, `constructor`, `autodetect`.
    *   **Annotation-based:** `@Autowired` is the modern, preferred approach.

*   **POJO vs. JavaBean:**
    *   **POJO (Plain Old Java Object):** Any Java object that is not bound by special restrictions.
    *   **JavaBean:** A special type of POJO that follows conventions: must have a public no-arg constructor, have private properties accessible via public getters/setters, and be serializable.

*   **Bean Lifecycle Callbacks:** Methods that Spring calls at specific points in a bean's life.
    *   **Annotation-based (Recommended):** `@PostConstruct` (after creation and DI) and `@PreDestroy` (before destruction).
    *   **XML Configuration:** Using `init-method` and `destroy-method` attributes in the `<bean>` definition.

---
### 3. Spring Boot

Spring Boot is an extension of the Spring framework that radically simplifies the setup and development of new Spring applications. It takes an "opinionated" view of the Spring platform, making it easy to create stand-alone, production-grade applications that you can "just run".

#### 3.1. Why Spring Boot?

It solves the primary challenges of the traditional Spring framework: complex configuration and dependency management. It allows developers to get started quickly without worrying about boilerplate setup.

| Basis | Spring | Spring Boot |
| :--- | :--- | :--- |
| **Configuration** | Manual and often extensive XML or Java-based configuration is required. | Provides **autoconfiguration** to automatically configure the application based on dependencies. |
| **Server** | Requires explicit setup and deployment to an external server (e.g., Tomcat). | Includes **embedded servers** (Tomcat, Jetty) by default. |
| **Deployment** | Typically deployed as a WAR (Web Application Archive) file. | Can be easily packaged as a standalone, executable JAR file. |
| **Dependencies** | Dependencies and their versions must be managed manually. | Provides **"starter" dependencies** to simplify build configuration. |
| **Main Goal** | A flexible framework for building enterprise applications. | To simplify the creation of production-ready Spring applications. |

#### 3.2. Key Features

1.  **Autoconfiguration:** Spring Boot automatically configures your application based on the JAR dependencies you have added. For example, if `spring-boot-starter-web` is on the classpath, it auto-configures Tomcat and Spring MVC.
2.  **Starter Dependencies:** A set of convenient dependency descriptors that you can include in your application. For example, `spring-boot-starter-data-jpa` includes all necessary dependencies for working with JPA and Hibernate.
3.  **Embedded Servers:** No need to deploy WAR files. Spring Boot applications can run as standalone JARs with an embedded Tomcat, Jetty, or Undertow server.
4.  **Production-Ready Features:** Provides features like metrics, health checks, and externalized configuration out-of-the-box.
5.  **No Code Generation and No XML:** There is no requirement for XML configuration. Everything is configured through annotations and properties files (`application.properties` or `application.yml`).

#### 3.3. RESTful Web Services with Spring Boot

Spring Boot makes it incredibly easy to create HTTP-based RESTful APIs.

*   **Core Annotations:**
    *   `@RestController`: A convenience annotation that combines `@Controller` and `@ResponseBody`. It marks a class as a request handler and ensures that return values are written directly to the HTTP response body (as JSON/XML).
    *   `@RequestMapping`: Maps web requests to specific handler classes and/or handler methods.
    *   `@GetMapping`, `@PostMapping`, `@PutMapping`, `@DeleteMapping`: More specific versions of `@RequestMapping` for different HTTP methods.
    *   `@PathVariable`: Binds a method parameter to a URI template variable (e.g., `/users/{id}`).
    *   `@RequestParam`: Binds a method parameter to a web request parameter.
    *   `@RequestBody`: Binds the HTTP request body to a method parameter.

*   **Example `GET` Endpoint:**
    ```java
    @RestController
    public class ProductController {

        @GetMapping("/products/{id}")
        public Product getProductById(@PathVariable String id) {
            // Logic to find and return a product
            return new Product(id, "Sample Product");
        }
    }
    ```

#### 3.4. Code Structure

Spring Boot does not enforce a strict layout, but best practices promote high cohesion and low coupling.

*   **Structure by Layer:** Classes are grouped by their technical role (e.g., `controller`, `service`, `repository`). This often leads to low cohesion, as classes related to a single feature are spread across many packages.
*   **Structure by Feature (Recommended):** Classes are grouped by the business feature they implement (e.g., `user`, `product`, `order`). This leads to high cohesion and better modularity.

#### 3.5. Spring Boot Runners

Interfaces used to execute code after the Spring Boot application has started. This is useful for initialization tasks.

*   **`CommandLineRunner`:** Provides access to application arguments as a simple array of `String`.
*   **`ApplicationRunner`:** Provides access to arguments through the `ApplicationArguments` interface, which offers more powerful parsing options.