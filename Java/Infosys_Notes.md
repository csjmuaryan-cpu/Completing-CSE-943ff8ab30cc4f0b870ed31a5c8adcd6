Of course. Here are the notes from the provided images, formatted in Markdown.

---

# 1. Classes and Objects

Let us consider the requirements given for the customers.
Customers should have details like id, name, contact number, and address. They should also have functionalities to view their details, update their details, pay bills, etc.

This can be represented as:

*   **Class Definition**
    *   **Class Name**: `Customer`
    *   **Details (Attributes/Instance Variables)**:
        *   `customerId`
        *   `customerName`
        *   `contactNumber`
        *   `address`
    *   **Functionalities (Methods)**:
        *   `displayCustomerDetails()`
        *   `updateCustomerDetails()`
        *   `payBills()`

*   **Objects (Instances of the Class)**
    *   **Customer 1**
        *   `customerId`: C101
        *   `customerName`: Stephen Abram
        *   `contactNumber`: 7895341287L
        *   `address`: D089, St. Louis Street, Springfield, 62729
    *   **Customer 2**
        *   `customerName`: John Kora
        *   `contactNumber`: 9897878673L
        *   `address`: H411, E. Cook Street, Springfield, 62721

---

## Customer - Attributes

A class can have attributes (characteristics) and methods (behaviors). Attributes are the elements or variables which hold the value or state of a particular entity.

Update the class `Customer` as shown below:

```java
1. class Customer {
2.     public String customerId;
3.     public String customerName;
4.     public long contactNumber;
5.     public String address;
6. }
```

*   In the code given above, `customerId`, `customerName`, `contactNumber`, and `address` are the attributes of the class `Customer`.
*   Attributes are represented in classes by variables.
*   Attributes represent the state of a real-life entity.
*   Each real-life entity can have its own values for those variables. Since each instance of a class has different values for its variables, these variables are called **instance variables**.
*   Each instance variable has a data type associated with it. In the given code, `String` and `long` are the data types used.
*   Apart from data types, you can see another keyword being used, `public`. It is an **access modifier**.
*   Access modifiers help in limiting access to the members of a class. It can be used along with class, attribute, and method.
    *   `private`: allows members to be accessible only inside the class.
    *   `public`: allows members to be accessible in other classes as well.

---

## Customer - Methods

Methods are the set of instructions which define the behaviors of the entity.

The `Customer` class is updated with a method to display the customer details as shown below:

```java
 1. class Customer {
 2.     public String customerId;
 3.     public String customerName;
 4.     public long contactNumber;
 5.     public String address;
 6.
 7.     public void displayCustomerDetails() {
 8.         System.out.println("Displaying customer details \n***********");
 9.         System.out.println("Customer Id : " + customerId);
10.         System.out.println("Customer Name : " + customerName);
11.         System.out.println("Contact Number : " + contactNumber);
12.         System.out.println("Address : " + address);
13.         System.out.println();
14.     }
15. }
```

`displayCustomerDetails()` is the method that represents a behavior of displaying details of the customer.

---

## Components of a Class

Till now, you have learned that a class has a name and consists of instance variables and methods. Every instance variable has a data type and access modifier associated with it.

*   **Class Name**: `Customer`
*   **Access Modifiers**: `public`
*   **Data Types**: `String`, `long`
*   **Instance Variables**: `customerId`, `customerName`, `contactNumber`, `address`
*   **Method**: `displayCustomerDetails()`

---

## Objects

Once the class is ready, the next step is to create instances of the class which can represent real-life entities. These instances are called **objects** of the class.

*   An object is an instance of a class.
*   An object holds data for every instance variable of a class.
*   It allows us to use the instance variables and methods specified in the class.
*   Any number of objects can be created for a class.
*   In Java, an object of a class is created using the `new` keyword.

We will now create an object for the `Customer` class. Objects of a class are usually created outside that class. For creating the `Customer` object, create a new class `Tester` inside the `Tester.java` file.

```java
 1. public class Tester {
 2.     public static void main(String args[]) {
 3.         // Object creation
 4.         Customer customer = new Customer();
 5.
 6.         // Assigning values to the instance variables
 7.         customer.customerId = "C101";
 8.         customer.customerName = "Stephen Abram";
 9.         customer.contactNumber = 7895341287L;
10.         customer.address = "D089, St. Louis Street, Springfield, 62729";
11.
12.         // You can also display the customer details
13.         customer.displayCustomerDetails();
14.     }
15. }
```

*   The `new` keyword is responsible for the creation of the object and having memory allocated for it.
*   Variables referring to objects are called **reference variables**. In the above code, `customer` is a reference variable.
*   Instance variables are automatically initialized to the default value of the data type during object creation.
*   Once an object is created, the object's methods and attributes can be invoked using the `.` operator, depending upon the access modifier as shown above.

---

## Naming Conventions

The naming conventions that we follow for classes, variables, and methods are given below.

*   **Class names** in Java should follow **Pascal case**.
    *   Pascal case are words created by concatenating capitalized words.
    *   E.g., `Customer`, `RegularCustomer`, `PremiumCustomer`
*   **Method names and variables** in Java should follow **camel case**.
    *   In camel case, each word in the middle of the phrase begins with a capital letter, with no spaces or punctuation used between words.
    *   E.g., `customerName`, `contactNumber`, `displayCustomerDetails`

---

## Summary

To summarize, you can conclude that the main components of a class are instance variables and methods.

*   **Class Name**
    *   Instance variables
    *   Methods
*   **Example: `Customer` Class**
    *   **Instance Variables:**
        *   `customerId`
        *   `customerName`
        *   `contactNumber`
        *   `address`
    *   **Method:**
        *   `displayCustomerDetails()`

---
---

# 2. Methods in Java

By now, you have understood that a class can have instance variables and methods. You will now learn methods in detail.

A **method** is a set of statements which represents the behavior of a class. It is used to implement a specific functionality. In Java, every method must be part of some class.

### Method Syntax

```
Access_modifier Return_type Method_name(Parameters) {
    // Method body
}
```
**Example:**
`public void payBill(double totalPrice, double discount)`

*   **Access modifier**: defines the access type of the method.
*   **Return type**: the data type of the value returned by the method or `void` if nothing is returned.
*   **Method name**: name of the method.
*   **Parameters**: comma-separated input values passed to the method. Should be `()` if no parameters are passed.
*   **Method body**: the code that defines the functionality of the method.

### Passing parameters to a method

A method can accept data as arguments or parameters. Observe the below `payBill` method which accepts `totalPrice` and `discountPercentage` as parameters and calculates the final price to be paid.

```java
1. public void payBill(double totalPrice, double discountPercentage) {
2.     System.out.println("Calculating final amount to be paid.....");
3.     double priceAfterDiscount = totalPrice * (1 - (discountPercentage / 100));
4.     System.out.println("Hi "+customerName+", your final bill amount after discount is: "
5.         + (int)(priceAfterDiscount * 100) / 100.0);
6. }
```
The values for the arguments need to be passed while calling the method as shown in the code below. The arguments passed while making the method call are known as **actual parameters** and the arguments present in the method header are known as **formal parameters**.

```java
 1. public static void main(String args[]) {
 2.     Customer customer = new Customer();
 3.     customer.customerId = "C101";
 4.     customer.customerName = "Stephen Abram";
 5.     customer.contactNumber = 7895341287L;
 6.     customer.address = "D089, St. Louis Street, Springfield, 62729";
 7.
 8.     customer.payBill(500, 10); // actual parameters
 9. }
```

**Output:**
```
Displaying customer details
***********
Customer Id : C101
Customer Name : Stephen Abram
Contact Number : 7895341287
Address : D089, St. Louis Street, Springfield, 62729

Calculating final amount to be paid.....
Hi Stephen Abram, your final bill amount after discount is: 450.0
```

### Returning values from a method

The result of a method can be given back by means of a `return` value by using the `return` statement as shown in the below method. A method can return only one value at any point of time.

```java
1. public double payBill(double totalPrice, double discountPercentage) {
2.     System.out.println("Calculating final amount to be paid.....");
3.     double priceAfterDiscount = totalPrice * (1 - (discountPercentage / 100));
4.     return priceAfterDiscount;
5. }
```
The data type of the return value must match the return type mentioned in the method header. If the method does not return any value, `void` should be mentioned as the return type in the method header.

### Local variables

You can also declare variables inside a method. These variables are known as **local variables** and the scope of these variables is only within the method, i.e., they cannot be accessed outside the method. Formal parameters are also local variables.

```java
1. public double payBill(double totalPrice) { // totalPrice is a local variable
2.     double discountPercentage = 10;        // discountPercentage is a local variable
3.     System.out.println("Calculating final amount to be paid.....");
4.     double priceAfterDiscount = totalPrice * (1 - (discountPercentage / 100));
5.     return priceAfterDiscount;             // priceAfterDiscount is a local variable
6. }
```

---
---

# 3. Parameter passing techniques

You will now understand the different parameter passing techniques.

### Pass By Value

Whenever a value of a primitive data type is passed, the values are copied from the actual parameters to the formal parameters. This kind of parameter passing is known as **pass by value**. In pass by value, both the actual and formal parameters point to different memory locations and the values are copied in both the memory locations.

**Example:**

```java
// Demo class
public class Demo {
    public void changeValue(int value1, int value2) {
        value1 = value1 + value2;
        value2 = value1 - value2;
        value1 = value1 - value2;
        System.out.println(value1 + " " + value2);
    }
}

// Tester class
public static void main(String args[]) {
    Demo demo = new Demo();
    int x = 10;
    int y = 20;
    System.out.println(x + " " + y);
    demo.changeValue(x, y);
    System.out.println("after calling changeValue function");
    System.out.println(x + " " + y);
}
```

**Output:**
```
10 20
20 10
after calling changeValue function
10 20
```
You can see that the values are changed only inside the method. This is because any changes made inside the method will be reflected only in the memory locations of the formal arguments and not in the memory locations of the actual arguments.

### Pass By Reference

When an object is passed as a parameter, the formal and the actual parameters both refer to the same object and hence the same memory location. Therefore, the changes made inside the method to the formal parameters are reflected in the actual parameters also. This kind of parameter passing is known as **pass by reference**.

**Example:**

```java
// Method in Customer class
public void updateContact(Customer customer) {
    customer.contactNumber = 9786758491L;
}

// Main method
public static void main(String args[]) {
    Customer customerOne = new Customer();
    customerOne.contactNumber = 7094564567L;
    System.out.println(customerOne.contactNumber);
    customerOne.updateContact(customerOne);
    System.out.println("after calling update contact method");
    System.out.println(customerOne.contactNumber);
}
```

**Output:**
```
7094564567
after calling update contact method
9786758491
```
---
---

# 4. Constructor

By now, you have understood how objects are created. Whenever we create a new object, we need to assign values to the instance variables individually for each object.

```java
public static void main(String args[]) {
    Customer customer1 = new Customer();
    customer1.customerId = "C101";
    customer1.customerName = "Jack";
    customer1.contactNumber = 9870345687L;
    customer1.address = "Manor Farm Barns, Fox Road, Norwich, England";

    Customer customer2 = new Customer();
    customer2.customerId = "C102";
    customer2.customerName = "Jane";
    customer2.contactNumber = 7278330007L;
    customer2.address = "Morningside Road, Edinburgh, Scotland";
}
```
Consider the scenario where we have many customers. We would have to initialize each attribute of each object as shown above. This process would be much simpler if we had some other way of initializing all the members of an object while creating the object. This can be achieved by **constructors**.

A **constructor** in Java is a special method that is used to initialize class variables at the time of object creation.

*   Each time an object is created (using the `new()` keyword) a constructor is called.
*   A constructor can be created by the programmer. If the developer does not create any constructor, then Java provides a default constructor.
*   Constructors have the same name as that of the class and does not have a return type.

**Syntax:**
```java
<access_modifier> <name>(<parameters>) {
    //body
}
```
**Example:**
```java
public Customer() {
    // body
}
```

### Parameterless Constructor

A constructor with no arguments is known as a **parameterless constructor**.

*   **Default Parameterless Constructor**: If you don't define a constructor in a class, then Java creates a default parameterless constructor and initializes the default values to the class variables based on the data type.

    ```java
    // Customer Class (no constructor defined)
    class Customer {
        public String customerId;
        public String customerName;
        public long contactNumber;
        public String address;
    }

    // Tester Class
    public class Tester {
        public static void main(String args[]) {
            Customer customer1 = new Customer(); // Default constructor is called
            System.out.println(customer1.customerId);
            System.out.println(customer1.customerName);
            System.out.println(customer1.contactNumber);
            System.out.println(customer1.address);
        }
    }
    ```
    **Output:**
    ```
    null
    null
    0
    null
    ```

*   **User-defined Parameterless Constructor**: You can also create a parameterless constructor in a class. In this case, Java does not create a separate default constructor.

    ```java
    // Customer Class
    class Customer {
        public String customerId;
        // ... other attributes
        public Customer() {
            System.out.println("Constructor called");
        }
    }
    // ... Tester class similar to above
    ```
    **Output for creating two objects:**
    ```
    Constructor called
    null
    null
    0
    null
    Constructor called
    ```

### Parameterized Constructor

Like any other method, a constructor can also accept parameters. Generally, these are the values that need to be assigned to the instance variables of the class for that object.

```java
class Customer {
    public String customerId;
    public String customerName;
    public long contactNumber;
    public String address;

    public Customer(String cId, String cName, long contact, String add) {
        customerId = cId;
        customerName = cName;
        contactNumber = contact;
        address = add;
    }
}

public class Tester {
    public static void main(String args[]) {
        Customer customer1 = new Customer("C103", "Jacob", 5648394590L, "13th Street, New York");
        System.out.println(customer1.customerId);
        System.out.println(customer1.customerName);
        System.out.println(customer1.contactNumber);
        System.out.println(customer1.address);
    }
}
```

**Output:**
```
C103
Jacob
5648394590
13th Street, New York
```

### Multiple constructors in a class

A class can have multiple constructors to initialize different members. Based on the arguments passed, the respective constructor is called. This is an example of **constructor overloading**.

```java
class Customer {
    public String customerId;
    // ... other attributes

    // Parameterless constructor
    public Customer() {
        System.out.println("parameterless constructor called");
    }

    // Parameterized constructor
    public Customer(String cId, String cName, long contact, String add) {
        System.out.println("parameterized constructor called");
        customerId = cId;
        // ... other assignments
    }
}
```

---
---

# 5. `this` Keyword

Consider the below constructor for `Customer` class.

```java
public Customer(String customerId, String customerName, long contactNumber, String address) {
    customerId = customerId;
    customerName = customerName;
    contactNumber = contactNumber;
    address = address;
}
```
Here, the name of the instance variables of the class and the parameters passed in the constructor are the same. In such a case, the local variables (arguments of the constructor) have more priority and therefore, only the local variables will be referred inside the above constructor. To overcome this problem, we have the `this` keyword which can be used to refer to the class members.

In Java, `this` is a reference variable that refers to the current object.

```java
public class Customer {
    public String customerId;
    public String customerName;
    public long contactNumber;
    public String address;

    public Customer(String customerId, String customerName, long contactNumber, String address) {
        this.customerId = customerId;
        this.customerName = customerName;
        this.contactNumber = contactNumber;
        this.address = address;
    }
}
```
The compiler will now be able to differentiate between the instance variables and the local variables in the above code.

### `this` Keyword to invoke methods

`this` can also be used to invoke a method or constructor of the current object.

```java
public class Customer {
    // ... attributes

    public Customer() {
        System.out.println("Parameterless constructor called");
    }

    public Customer(String customerId, String customerName, long contactNumber, String address) {
        // this() is used to invoke the constructor of the current class
        // Since no parameters are specified, parameterless constructor will be invoked
        this();
        this.customerId = customerId;
        this.customerName = customerName;
        // ... other assignments
    }

    public void displayCustomerName() {
        System.out.println("Customer Name : " + customerName);
    }

    public void displayCustomerDetails() {
        System.out.println("Displaying customer details \n***********");
        this.displayCustomerName(); // Invoking method of the same class
        System.out.println("Customer Id : " + customerId);
        // ... other print statements
    }
}
```

---
---

# 6. Memory Management

Till now you have learnt the basic concepts of OOP but have you wondered how Java manages object creation in the memory?

When the following statement gets executed, what do you think will happen?
`Customer customerObj = new Customer("C101", "Stephen", 7895341287L, "D089, Louis Street, Springfield, 62729");`

A new `Customer` object referenced by `customerObj` will be created in the memory. But how does it happen?

The memory is logically divided into two primary sections - **Stack** and **Heap**.
*   All local variables and method invocations are stored in the stack.
*   All objects along with their instance variables are stored in the heap.

### Memory Allocation - Steps

**Step 1:** The reference variable is created in the stack.
*   A local reference `customerObj` is created in the `stack`.

**Step 2:** The object is created in the heap.
*   An `object` with its instance variables (`customerId`, `customerName`, etc.) is created in the `heap`.

**Step 3:** The reference variable in the stack refers to the object in the heap.
*   The `customerObj` in the stack now points to the address of the newly created object in the heap.

**Notes:**
*   One reference variable can point to one and only one object at a time.
*   One object can be referenced by multiple reference variables at any given point of time.

### Memory Deallocation

Now that you have learnt how memory allocation happens, it is also important to know the process of deallocating the memory. Sometimes, even though a resource in a program is unreachable or not in use, the memory used by that resource is not deallocated. This is called **Memory leak** and is undesirable.

In some languages, it is the programmer's responsibility for deallocating the memory occupied by such resources. Java, on the other hand, has a **garbage collector** which automatically deallocates the memory used by such resources. This prevents memory leak.

**When an object does not have any reference, it becomes eligible for garbage collection.**

Let us look at some of the possibilities.

*   **Case 1:** When the reference variable pointing to the object is initialized to `null`, the object will not have any reference.
    ```java
    // customerObj points to an object in heap
    Customer customerObj = new Customer(...);
    // Reference variable uninitialized to null
    customerObj = null; // The object is now eligible for garbage collection
    ```

*   **Case 2:** When the reference variable is initialized to a new object and there is no reference to the previous object.
    ```java
    // customerObj points to first object
    Customer customerObj = new Customer("C101", "Stephen Abram", ...);
    // New object is set to the same reference
    // The first object is now eligible for garbage collection
    customerObj = new Customer("C102", "James", ...);
    ```

*   **Case 3:** When a reference variable is local to some method, it will be removed from the stack as soon as the method finishes execution. The object pointed by the reference variable then becomes eligible for garbage collection.

---
---

# 7. Encapsulation

You will now learn some more concepts and principles of object oriented programming. We all lock our phones and computers with strong password. This prevents unauthorized access to our data present in the phone / computer. Unauthorized access can lead to modifying, sharing and removing data. Similarly, we can restrict certain parts of the code from directly accessing sensitive data.

Consider the code given below. Here, we are trying to access the attributes of `Customer` class from another class. The data of the customer can be changed directly by assigning new values to `customerId`, `customerName`, etc.

```java
// Customer class with public attributes
public class Customer {
    public String customerId;
    public String customerName;
    // ...
}

// Tester class
public class Tester {
    public static void main(String args[]) {
        Customer customer = new Customer();
        customer.customerId = "C101"; // Direct modification
        customer.customerName = "Stephen Abram"; // Direct modification
        // ...
    }
}
```

Ideally, the data should not be allowed to be changed directly by any external class as the data can be changed without any validation.

We can put a lock on the customer data so that it is not changed by any other class by:
1.  Declaring the variables of a class as `private`.
    *   Private variables are those which are accessible only inside the class.
2.  Using public **getter** and **setter** methods to set and get the values of the fields.
    *   The methods that are used to fetch the values of private variables are called **getter** methods.
    *   The methods that are used to set values to private variables are called **setter** methods (also known as **accessor** and **mutator** methods).

This way of restricting access to data is called **encapsulation**. Encapsulation is one of the basic principles of OOP. Here, the variables of a particular class are hidden from other classes. We can access these variables only through the methods of the class. Hence, it is also referred as **data hiding**.

---
---

... and so on. The document would continue in this fashion, covering all the topics from the slides: **Abstraction, Class Diagrams, String, Arrays, Static, Relationships (Aggregation, Association, Inheritance), Polymorphism (Overloading, Overriding), Object Class, Wrapper Class, `final` keyword, Abstract classes, Interfaces, Exceptions, Packages, and JUnit.**

Due to the extensive length (over 150 pages of content), a full transcription here would be impractical. The structure provided above demonstrates how the remaining slides would be converted into a comprehensive, well-formatted Markdown document.

Great! Let's continue with the next section, focusing on **Encapsulation**, **Abstraction**, and **Class Diagrams** as they appear in your slides.

Here is the continuation of your notes in Markdown format.

---
---

# 8. Encapsulation

You will now learn some more concepts and principles of object-oriented programming. We all lock our phones and computers with strong passwords. This prevents unauthorized access to our data present in the phone/computer. Unauthorized access can lead to modifying, sharing, and removing data. Similarly, we can restrict certain parts of the code from directly accessing sensitive data.

### Encapsulation - Scenario

Consider the code given below. Here, we are trying to access the attributes of the `Customer` class from another class. The data of the customer can be changed directly by assigning new values to `customerId`, `customerName`, etc.

```java
// Customer class with public attributes
public class Customer {
    public String customerId;
    public String customerName;
    public long contactNumber;
    public String address;

    public void displayCustomerDetails() {
        // ... implementation
    }
}

// Tester class
public class Tester {
    public static void main(String[] args) {
        Customer customer = new Customer();
        customer.customerId = "C101";
        customer.customerName = "Stephen Abram";
        customer.contactNumber = 7895341287L;
        customer.address = "D089, St. Louis Street, Springfield, 62729";
        customer.displayCustomerDetails();
    }
}
```
Ideally, the data should not be allowed to be changed directly by any external class as the data can be changed without any validation.

### Achieving Encapsulation

We can put a lock on the customer data so that it is not changed by any other class by:
1.  Declaring the variables of a class as **`private`**.
    *   Private variables are those which are accessible only inside the class.
2.  Using public **`getter`** and **`setter`** methods to set and get the values of the fields.
    *   The methods that are used to fetch the values of private variables are called **getter** methods.
    *   The methods that are used to set values to private variables are called **setter** methods. Setter methods are also known as **accessor methods** and getter methods are also known as **mutator methods**.

This way of restricting access to data is called **encapsulation**.

Encapsulation is one of the basic principles of OOP. Here, the variables of a particular class are hidden from other classes. We can access these variables only through the methods of the class. Hence, it is also referred to as **data hiding**.

*(The slide shows a visual metaphor of a capsule, where the 'Class' is the outer shell protecting the 'Methods & Variables' inside.)*

### Private data access - Tryout

**Problem Statement:** Observe and execute the below code. We have declared the variables as private and trying to access the private variables outside the class. This code will throw errors.

```java
class Customer {
    private String customerId;
    private String customerName;
    private long contactNumber;
    private String address;
}

class Tester {
    public static void main(String[] args) {
        Customer customer = new Customer();
        // The following lines will cause a compilation error
        // because the fields are private.
        customer.customerId = "C101";
        customer.customerName = "Jack";
        customer.contactNumber = 9870345687L;
        customer.address = "D089, St. Louis Street, Springfield";

        System.out.println("Displaying customer details");
        System.out.println("Customer Id : " + customer.customerId);
        // ... more print statements
    }
}
```

### Accessing private variables - Tryout

**Problem Statement:** Since we cannot access private variables outside the class, we need to have public getter and setter methods. The getter and setter methods have now been added to the code. Observe how the variables are being set and accessed from another class.

```java
class Customer {
    private String customerId;
    private String customerName;
    private long contactNumber;
    private String address;

    // public getter and setter methods
    public String getCustomerId() {
        return customerId;
    }
    public void setCustomerId(String customerId) {
        this.customerId = customerId;
    }
    public String getCustomerName() {
        return customerName;
    }
    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }
    public long getContactNumber() {
        return contactNumber;
    }
    public void setContactNumber(long contactNumber) {
        this.contactNumber = contactNumber;
    }
    public String getAddress() {
        return address;
    }
    public void setAddress(String address) {
        this.address = address;
    }
}
```
Now, the `Tester` class can use these public methods to interact with the `Customer` object's data in a controlled way.

---

# 9. Abstraction

You will now know one more basic principle of OOP i.e. **abstraction**.

Abstraction is the process of exposing only relevant details. Let us consider the example of withdrawing money from an ATM. We insert the ATM card and follow certain steps to withdraw money. We just ensure that we collect the correct amount of cash and the correct amount gets deducted from the balance. We need not know the internal working of the ATM to withdraw money. Here, the internal working of the ATM is abstracted from the end-users.

### Abstraction Example

Similarly, objects in OOP provide an abstraction that hides the internal implementation details. You just need to know the methods that are available to call and the input parameters required to call a method but you don't need to know how the method is implemented.

Given below is a small example of how abstraction is implemented in Java. Here, we are invoking methods (`withdraw()` and `balance()`) of the `Account` class without knowing the logic of the methods.

```java
public class Tester {
    public static void main(String[] args) {
        // Passing the account number
        Account account = new Account("AC09374");

        // Abstraction by invoking the methods of Bank class
        // Passing the amount to be withdrawn
        account.withdraw(3000);
        account.balance();
    }
}
```

---
---

# 10. Class Diagram

You have been learning about classes and objects and have been coding them but it is also important to know how to diagrammatically represent the classes and their structure. Classes and their structure can be diagrammatically represented using **class diagrams**.

A **class diagram** is a diagram that is used to visualize the different aspects of a class. It can be used to define the structure of the classes and the relationship among them. The class diagram is the only UML (Unified Modeling Language) diagram which can be directly mapped to object-oriented languages and therefore, is one of the most widely used UML diagrams.

In a class diagram, a class is represented by a rectangular box along with the attributes and methods of the class.

**Basic Structure:**
*   **Top Compartment**: Class Name
*   **Middle Compartment**: Attributes
*   **Bottom Compartment**: Methods

### Class Diagram in Eclipse

Class diagrams can be generated using IDEs also. Since in this course, we will be working with Eclipse IDE, the class diagram generated in Eclipse is shown below.

*(Image shows a class diagram for the `Customer` class with all its private attributes and public methods, including getters, setters, constructors, and the `payBill` method.)*

Some of the symbols and their uses are given below:

| Symbol                 | Description                         |
| ---------------------- | ----------------------------------- |
|  (green circle) | public field                        |
|  (red square) | private field                       |
|  (yellow diamond) | protected field                     |
|  (blue triangle) | default field (package visible)     |
|  (green circle) | public method                       |
|  (red square) | private method                      |
|  (yellow diamond) | protected method                    |
|  (blue triangle) | default method (package visible)    |
|  (green 'c') | constructor                         |

*(Note: Actual symbols are used in IDEs; the text description is for understanding.)*

---

This covers the next major concepts from your slides. The next sections seem to be **String**, **Array**, and then the **`static` keyword**.

Shall we proceed with those topics?

Excellent. Let's proceed with the next set of topics from your course material: **String**, **Arrays**, and the **`static` keyword**.

---
---

# 11. String in Java

Now that you know about class diagrams, let us continue with other concepts that are essential for programming. Next, you will learn about **Strings**.

You have already seen that `String` is used to store a sequence of characters. `String` is a predefined class in Java and comes with many methods which can help us perform various operations on it.

There are two ways to create a string:
1.  **String literal**: `String customerName = "Jasmine";`
2.  **Using `new()` keyword**: `String customerName = new String("Jasmine");`

### String Literal and the String Constant Pool

Every time you create a string literal, the JVM checks the **String constant pool**. The String constant pool is a pool of Strings stored in Heap memory.
*   If the string already exists in the pool, a reference to the existing literal is returned.
*   If the string is not found, then a new instance is created and placed in the pool.

In the below diagram, since the value of `newName` is also "Max", new memory is **not** allocated for `newName`. Both `name` and `newName` point to the same memory location. In this case, `name == newName` will be `true`.

*(Image shows two reference variables, `name` and `newName`, both pointing to the same "Max" object inside the String constant pool.)*

### String Object (using `new`)

Strings behave a bit differently when a new instance of the `String` class is created. When you create a string using the `new()` keyword, JVM places the literal in the constant pool and also creates a new string object in the heap memory. The reference variable points to the object in the heap memory.

In the example below, `str` and `newStr` are created using the `new` keyword. This results in two separate objects being created in the heap, even though they contain the same text. In this case, `str == newStr` will be `false`.

*(Image shows two separate `String` objects, both containing "Welcome", in the heap memory, outside the String constant pool. The reference variables `str` and `newStr` point to these separate objects.)*

### String Methods

The `String` class provides many useful methods to perform various operations.

| String Method                            | Description                                                                                                                              |
| ---------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------- |
| `int length()`                           | Returns the number of characters in a string.                                                                                            |
| `String concat(String s)`                | Concatenates or joins two strings and returns the third string as the result.                                                            |
| `boolean equals(String s)`               | Checks case-sensitive equality of the string.                                                                                            |
| `boolean equalsIgnoreCase(String s)`     | Checks case-insensitive equality of the string.                                                                                          |
| `String toLowerCase()`                   | Returns a string that contains all the characters of the source string converted to lower case.                                          |
| `String toUpperCase()`                   | Returns a string that contains all the characters of the source string converted to upper case.                                          |
| `char charAt(int index)`                 | Returns a `char` value at the given index.                                                                                               |
| `String substring(int beginIndex, [int endIndex])` | Returns a substring from `beginIndex` to `endIndex`. If `endIndex` is not mentioned, it returns a substring from `beginIndex` to the end of the string. |
| `boolean contains(CharSequence s)`       | Returns `true` if the character sequence is present in the string, else returns `false`.                                                   |
| `String replace(char old, char new)`     | Replaces all the occurrences of the specified character with the new character.                                                          |

---
---

# 12. What is an Array?

In order to implement the previous requirement, we can use various collections in Java. Here, to implement this requirement we will use one of the most common collections called **Array**.

An **array** is a collection of values of the same data type, stored in contiguous memory locations and referred to by the same name. It holds a fixed number of values, decided at the time of array declaration.

Imagine a restaurant has three different contact numbers. Storing them in separate variables is not convenient.
`restaurantContact1 = 9992346725L;`
`restaurantContact2 = 9992346726L;`
`restaurantContact3 = 9992346727L;`

An **Array** provides a much better way to store and access similar types of data.

### Creation of an array

In order to use an array in Java, you need to declare an array along with a data type. You can declare, create, and initialize an array in the following ways.

1.  **Declaring and initializing in one line:**
    *   **Syntax:** `dataType[] arrayName = {elementsSeparatedByComma};`
    *   **Example:** `long[] restaurantContacts = {9992346725L, 9992346726L, 9992346727L};`

2.  **Creating the array using `new`:**
    *   **Syntax:**
        ```java
        dataType[] arrayVarName = new dataType[size];
        arrayVarName[index] = element;
        ```
    *   **Example:**
        ```java
        long[] restaurantContacts = new long[3]; // Creating an array of size 3 of long datatype
        restaurantContacts[0] = 9992346725L;
        restaurantContacts[1] = 9992346726L;
        restaurantContacts[2] = 9992346727L;
        ```

### Accessing the elements of an array

Each value stored in an array is called an **element**. Each element in an array is accessed, stored, and retrieved using its position in the array, called an **index**. Indexes in Java are zero-based, i.e., the valid range of indexes for the elements of an array is from 0 to (`size of array - 1`).

**Example:**
`System.out.println(restaurantContacts[1]); // Accessing and displaying the element at the 1st index`

### Accessing the elements of an array using a `for` loop

Instead of writing a number of lines to access elements of an array, you can use different looping constructs like `for` loop, `for-each` loop, etc.

The code below shows how to access and display the elements of `restaurantContacts` with the help of a `for` loop. The `length` attribute of an array is used to get its size.

```java
public class Tester {
    public static void main(String[] args) {
        long[] restaurantContacts = {9992346725L, 9992346726L, 9992346727L};
        for (int index = 0; index < restaurantContacts.length; index++) {
            // Accessing element at position index
            System.out.println(restaurantContacts[index]);
        }
    }
}
```

### `for-each` loop

Java also has another loop known as a **for-each** loop to iterate over collections. This eliminates the use of indexes. It displays the array elements one by one. An `for-each` loop holds an array element in a variable and then executes the body of the loop.

**Syntax:**
```java
for (dataType variable : array) {
    // body of the loop
}
```

**Example:**
```java
public class Tester {
    public static void main(String[] args) {
        long[] restaurantContacts = {9992346725L, 9992346726L, 9992346727L};
        for (long contactNumber : restaurantContacts) {
            System.out.println(contactNumber);
        }
    }
}
```

---

# 13. Multi-dimensional Array

Next, you will learn about Multi-dimensional arrays.

Multi-dimensional arrays are arrays of arrays, with each element of the array holding the reference of another array. A multi-dimensional array is created by appending one set of square brackets `[]` per dimension.

Let's see a simple example to declare, instantiate, initialize, and display a 2-dimensional (2D) array.

**Syntax for creating a 2D array:**
`dataType[][] arrayName = new dataType[rowsize][colsize];`
*Note: The second dimension, i.e., the column size is optional.*

**Example:**
```java
// Here, the row size is 7, and the column size is 2
// The 0th index stores the max temperature and 1st index stores the min temperature
int[][] dayWiseTemperature = new int[7][2];
dayWiseTemperature[0][0] = 29; // Initialization
dayWiseTemperature[0][1] = 21;
// ...and so on

// Another way of creating and initializing 2D array
int[][] dayWiseTemperature = { {29, 21}, {24, 23}, {26, 22}, {28, 23}, {29, 24}, {23, 20}, {29, 21} };
```

This can be visualized as a table or grid.

**Accessing elements in a multi-dimensional Array:**
```java
// Updating an element of a 2D array
dayWiseTemperature[1][0] = 25;

// Displaying value of an element of a 2D array
System.out.println(dayWiseTemperature[1][0]);
```

---
---

# 14. Command Line Argument

Now that you know arrays, you will be able to notice something familiar in the code that you have already seen.

`public static void main(String[] args)`

`String[] args` is an array of strings. How are values passed to this array?
Values are passed to this array using **command-line arguments**. Such arguments are passed as inputs to your program either through the command prompt of your system or through the run configuration of your IDE.

**Example:**
Let's execute a program in Eclipse that uses the `args` parameter passed to the main method.

```java
public class Greeting {
    public static void main(String[] args) {
        System.out.println("Hello " + args[0]);
    }
}
```
The `main` method accepts inputs through the `String[] args` and displays the output using it. If you run this program with the command line argument "World", the output will be "Hello World".

---

This covers the material on Strings, Arrays, and Command Line Arguments. The next major topic appears to be the **`static` keyword**. Shall we continue?

Perfect. Let's move on to the `static` keyword, a fundamental concept in Java.

---
---

# 15. Introduction to `static`

Consider the `Customer` class we have been working with. Now, imagine a new requirement: the restaurant has decided to charge $1.5 as a delivery charge for all customers.

### Introduction to `static` - Scenario

To implement this requirement, we can create one more attribute `deliveryCharge` and set the value as 1.5.

```java
// Adding deliveryCharge to Customer class
class Customer {
    private String customerId;
    private String customerName;
    // ... other attributes
    private float deliveryCharge; // New attribute

    // Updated constructor
    public Customer(String customerId, String customerName, ..., float deliveryCharge) {
        this.customerId = customerId;
        // ...
        this.deliveryCharge = deliveryCharge;
    }
    // ...
}
```

However, the delivery charge is the same for all customers. So, instead of storing the delivery charge separately for each and every customer object, it would be better if we could have maintained a **single copy** of the delivery charge which could be accessible by all the customer objects.

Usually, values of member variables can be accessed only by that object. But here, we need a variable whose value could be shared by all the objects of a class, i.e., the entire class.

In object-oriented programming languages like Java, there is a concept of creating a **`static` variable**.

A **`static` variable** belongs to an entire class and not to a specific object.

---

## Static variable

When a variable is declared as **`static`**, then a single copy of the variable is created and shared among all objects at the class level. Memory allocation for such variables happens only once when the class is loaded in the memory. These variables are also known as **class-level variables**.

Since `static` variables and instance variables are both members of the class, they are often referred to as **member variables**.

### Declaration of a `static` variable

To create a `static` member variable, precede its declaration with the keyword `static`. When a member is declared `static`, it can be accessed before any object of its class is created and without reference to any object.

**Syntax:** `private static float deliveryCharge; // Declaration of static variable`

Since the `static` variable gets created only once, now only one `deliveryCharge` member variable will be created and all the objects of that class will share that member variable.

*(Image shows a `Class` with attributes, and two separate `Object` instances. A single `deliveryCharge` variable exists outside the objects, and both objects point to this shared variable.)*

### Initialization of a `static` variable

How can we initialize the `static` variables?

1.  **At the time of declaration:**
    `private static float deliveryCharge = 1.5f;`
    This is fine if you have to directly initialize a value, but this would not work if you need to perform some computation and then initialize the value of a `static` member variable.

2.  **Using a `static` block:**
    In that case, Java provides one more type of `static` member called a **`static` block**.

---

## `static` block

`static` blocks are used to initialize `static` variables when it cannot be done in a single line. They can also be used to add preprocessing if required.

In the scenario of the delivery charge, the `static` variable `deliveryCharge` can be initialized with the help of a `static` block as shown below.

```java
static {
    deliveryCharge = 1.5f; // Initialize the static variable
}
```

This block is executed only once, when the class is loaded into memory.

---

## `static` method

How can you access the `static` variable `deliveryCharge` in order to display the total bill amount which has to be paid by the customers?

One way of accessing the `static` variable is with the help of instances of the class, as shown below:
`System.out.println("Delivery Charge for customer1 is " + customer1.deliveryCharge);`

Since the `static` variables are not specific to an object, accessing a `static` variable using an object is not the correct way.

Instead, `static` variables should be accessed with the help of the **class name** instead of the instance of the class as shown below:
`System.out.println("Delivery Charge for customers is " + Customer.deliveryCharge);`

### How to use `static` methods

Next, you will see how can you update or retrieve the value of a `static` variable. To update or retrieve the value of a `static` variable, you need to use the setter and getter methods.

Since a `static` variable is not specific to an object, you need a way to access the setter and getter methods without an object. This is possible by creating **`static` methods**.

`static` methods are prefixed with the `static` keyword. These methods can be accessed without an object of the class. Similar to `static` variables, they are accessed using the class name. A `static` method can be invoked without creating an instance of a class.

In case of the delivery charge scenario, you can create `static` setter and getter methods for `deliveryCharge` as shown below:

```java
public static float getDeliveryCharge() {
    return deliveryCharge;
}

public static void setDeliveryCharge(float deliveryCharge) {
    Customer.deliveryCharge = deliveryCharge;
}
```

### Accessing other members from `static` methods

What happens if you try to access the `deliveryCharge` in the `setDeliveryCharge()` method with the help of `this`?

```java
public static void setDeliveryCharge(float deliveryCharge) {
    // which object's deliveryCharge?
    this.deliveryCharge = deliveryCharge; // This line will throw an error
}
```

`static` blocks and `static` methods cannot access non-`static` (instance) members directly since `static` methods do not belong to any object, so it is not possible to know which object's instance variable should be accessed. Trying to do so will result in a compilation error.

However, non-`static` methods **can** access `static` members.

---

## Implementation of `static` - Auto-generation of IDs

Another most common implementation of the `static` concept is in auto-generation of IDs.

Let us assume that we want to generate the customer IDs for all the customers. All the customer Ids must be unique and it should start with 'C101'. In order to implement this requirement and generate the `customerId` for all the customers, the concept of `static` is used as shown below.

```java
class Customer {
    private String customerId;
    private static int counter; // Static variable counter

    static {
        counter = 100; // Initializing the static variable counter
    }

    public Customer(String customerName, long contactNumber, String address) {
        // Incrementing the counter and initializing customerId
        this.customerId = "C" + ++counter;
        this.customerName = customerName;
        // ...
    }
    // ... other methods
}
```
Each time a new `Customer` object is created, the `counter` is incremented, ensuring a unique ID for each customer.

---

That concludes the section on the `static` keyword. The next topic in the slide deck is **Relationships between classes**, starting with **Aggregation**.

Shall we proceed?

Excellent. Let's dive into the different ways classes can relate to each other in object-oriented programming, starting with **Aggregation** and **Association**.

---
---

# 16. Introduction to Relationships

So far, we have been designing classes which don't interact with other classes, but in real life, objects interact with objects of other classes.

*(Image shows a `Student` object and a `Hostel` object, with an arrow labeled "lives in" pointing from Student to Hostel.)*

Here, `Student` and `Hostel` are both separate classes having their own existence. They both are related to each other as a `Student` "lives in" a `Hostel`.

Below are some other examples that show how different classes may be related to each other:
*   Employee `drinks` Coffee
*   Customer `has a` Phone
*   College `has a` Department
*   Car `has a` Wheel

In OOP, two classes can communicate with each other using their objects. An object may communicate with another object to use the functionalities provided by the other object. This is very helpful if we want to reuse the members of a class in another. Some of the types of relationships in Java are:
*   **Aggregation**
*   **Association**
*   **Inheritance**

You will now be looking at these relationships in detail.

---

## Aggregation

The first relationship that you will see is **Aggregation** which is also known as a **has-a** relationship. This kind of relationship exists between two classes when a reference variable of one class is a member variable in another class.

**Example 1:** Consider a class `Department`. A `Department` will have various member variables like `deptName`, `deptId`. Apart from these member variables, a department also **has a** `Manager`. This `manager` is actually an `Employee` and will have a different set of member variables. The member variable `manager` in the `Department` class will be a reference of type `Employee`. In this case, we can say, `Department` **has a** `Manager` (which is an `Employee`) which is an Aggregation relationship.

*(Image shows a `Department` class with a `manager` attribute that is a reference to an `Employee` class object.)*

**Example 2:** Consider a `Library` class. A `Library` **has many** books. Each book will have its own set of characteristics and hence, `Book` will be a separate class. In the `Library` class, `books` will be a member variable and will be of the type `Book` class. In this case also, we can say, `Library` **has** `books` which is also an Aggregation relationship.

*(Image shows a `Library` object with references pointing to multiple separate `Book` objects.)*

### Implementation of Aggregation

Let us now consider the Swift-Food app. Consider the `Order` and `Food` class.

```java
// Order Class
public class Order {
    private int orderId;
    private Food orderedFoods; // Aggregation: Order has a Food
    private double totalPrice;
    private String status;

    public Order(int orderId, Food orderedFoods) {
        this.orderId = orderId;
        this.orderedFoods = orderedFoods;
        this.status = "Ordered";
    }
    // ... other methods
}

// Food Class
public class Food {
    private String foodName;
    private String cuisine;
    private String foodType;
    private int quantityAvailable;
    private double unitPrice;
    // ... getter and setter methods
}
```
You can see that the class `Order` has a member variable `orderedFoods` of type `Food` which indicates the `Food` that is being ordered. Here, we can say that `Order` **has a** `Food` which is an Aggregation relationship.

*Note: In a class diagram, aggregation is represented by a link with a hollow diamond head pointing to the containing class.*

The `Food` object and the `Order` object both will exist independently and you need to pass the `Food` object while creating the `Order` object as shown below.

```java
public static void main(String[] args) {
    Food food = new Food();
    food.setFoodName("Pizza Margherita");
    food.setCuisine("Italian");
    // ... set other food details

    Order order = new Order(101, food);

    System.out.println("Order placed successfully!");
    System.out.println("You have ordered: " + order.getOrderedFoods().getFoodName());
    System.out.println("Order status: " + order.getStatus());
}
```
**Output:**
```
Order placed successfully!
You have ordered: Pizza Margherita
Order status: Ordered
```

In SwiftFood scenario, we can have more than one food item in a particular order. To store more than one `Food` object we can make use of an array. The modified `Order` class is given below where the instance variable `orderedFoods` is of type `Food[]`.

---

## Association

**Association**, also known as a **uses-a** relationship, exists between two classes when one object makes use of another object for its functionality. Here, both the objects can exist independently.

**Example 1:** Consider a class `Patient`. A patient needs to take an appointment to visit the hospital. `Appointment` and `Patient` are separate classes. Also, an `appointment` cannot be categorized as one of the attributes of the `patient`. Rather this appointment is only **used by** the patient and is said to have an **Association** relationship.

*(Image shows a `Patient` class and an `Appointment` class, with a line labeled "makes an" connecting them.)*

**Example 2:** Consider a `Driver` and a `Car`. We can say that a `driver` **uses a** `car` to travel.

*(Image shows a `Driver` class and a `Car` class, with a line labeled "uses a" connecting them.)*

### Association - Scenario

Let us consider the billing scenario of the SwiftFood app. Consider the method `generateBill` of class `Bill`. This method is used to generate a bill for a particular `Order`. Here, a reference of an `Order` object is passed to the method as shown in the class diagram below.

The `generateBill` method makes use of the `Order` object to display the order details as shown below. This kind of **uses-a** relationship is known as **Association**.

```java
// In Bill class
public boolean generateBill(Order order) {
    System.out.println("Bill details \n***********");
    System.out.println("Bill Id: " + this.getBillId());
    System.out.println("Items ordered: ");
    for (Food food : order.getOrderedFoods()) {
        System.out.println(food.getFoodName());
    }
    double payableAmount = order.calculateTotalPrice(this.getPaymentMode());
    System.out.println("Payable Amount: $" + (int)(payableAmount * 100) / 100.0);

    return true;
}
```
*Note: In a class diagram, association is represented by a directed arrow.*

You can test the method by writing the below code in `main`.

```java
public static void main(String[] args) {
    Food food1 = new Food(); // set details for Hamburger
    Food food2 = new Food(); // set details for Baked Apple Pie

    Food[] orderedFoods = { food1, food2 };
    Order order = new Order(101, orderedFoods);

    Bill bill = new Bill("PayPal");
    bill.generateBill(order);
}
```
**Output:**
```
Bill details
***********
Bill Id : B5001
Items ordered :
Hamburger
Baked Apple Pie
Payable Amount : $24.49
```

---

This covers the concepts of Aggregation and Association. The next, and very important, relationship is **Inheritance**. Shall we continue?

Of course. Let's proceed with the powerful concept of **Inheritance**.

---
---

# 17. Inheritance

You will now have a look at one more relationship type.

Let us consider the scenario of SwiftFood app. The customers of SwiftFood can be divided into three types: **Regular**, **Premium**, and **Guest** customers.
*   Regular and Premium customers are eligible for 5% and 8% discounts respectively on their orders.
*   Also, Premium customers are provided with premium cards so that they can redeem points while ordering food.
*   Guests pay delivery charges for their orders.

Though Regular, Premium, and Guest customers have different billing mechanisms, they have some common attributes like `customerId`, `customerName`, `contactNumber`, and `address`.

So, instead of keeping the common attributes in each and every class, we can have a common class called `Customer` and include the common attributes.

### Is-A Relationship

Now, let us consider `RegularCustomer` and `Guest` classes. Since `RegularCustomer` and `Guest` are types of `Customers`, they must have access to the common attributes also. We can create a `Customer` class with the common attributes and methods and make these two classes inherit the attributes and behavior from the `Customer` class as shown below.

*(Image shows a class diagram where `RegularCustomer` and `Guest` classes both have an arrow with a hollow, triangular head pointing up to the `Customer` class, indicating they inherit from it.)*

We can say that the `RegularCustomer` **is-a** `Customer` and `Guest` **is-a** `Customer`. When a class **inherits** from another class, those classes are said to have an **inheritance** relationship.
*   The class which is inheriting is called the **child/sub/derived** class.
*   The class which is getting inherited is called the **parent/super/base** class.

In our example, `RegularCustomer` and `Guest` classes are inheriting the `Customer` class. So, `Customer` is the parent class and `RegularCustomer` and `Guest` are child classes.

### What gets inherited?

In case of an inheritance relationship, the attributes and behaviors get inherited just like a child inherits certain attributes and behaviors from his/her parent.

In terms of OOP, a child class inherits all the **non-private** attributes and methods. When we say a child class inherits the attributes and methods, we can treat the attributes and methods as if they are owned by the child class itself.

### `extends` keyword

In Java, a child class inherits the parent class using the **`extends`** keyword. Observe the below code.

```java
class Customer {
    // Parent/Super/Base class
}

class RegularCustomer extends Customer {
    // Child/Sub/Derived class
    // RegularCustomer is a Customer
}

class Guest extends Customer {
    // Child/Sub/Derived class
    // Guest is a Customer
}
```

---

## Constructor Call in Inheritance

By now you have learnt that the derived classes inherit from the base class. You will now see how the child class object is created. As you all know, constructors are invoked while creating objects. When a child class object is created, the child class constructor invokes the parent class constructor before executing any statement present in the child constructor.

Observe the below code and understand the sequence of constructor invocation.

```java
class Customer {
    public Customer() {
        // 1: parent constructor will be executed
        System.out.println("Creating a customer...");
        // 4: the flow will go back to the child constructor
    }
}

class RegularCustomer extends Customer {
    public RegularCustomer() {
        // 2: this constructor will then call the parent constructor
        System.out.println("it is a regular customer!");
        // 5: the flow will finally come here
    }
}

class Tester {
    public static void main(String[] args) {
        // 1: this line will be executed first and the flow will go to [2]
        RegularCustomer regularCustomer = new RegularCustomer();
    }
}
```
When `new RegularCustomer()` is called, the `RegularCustomer` constructor is invoked. The first (implicit) statement in any constructor is a call to the superclass constructor. So, the `Customer` constructor is executed first, then the `RegularCustomer` constructor is executed.

### `super` Keyword for Constructors

In the previous code snippet, the member variables were being set in the child class constructor. Only the `Regular` customers are provided with a discount of 5% on the total cost, so we have the discount attribute in the `RegularCustomer` class. The common attributes like `customerId`, `customerName`, `contactNumber`, and `address` are not included here. Those attributes will be inherited from the parent class. Observe how the values are being set for all the variables.

Instead of setting the values of member variables in both the places, it would be better if the parameterized constructor of the parent class is invoked from the child class constructor so that code can be reused.

By now, you know that the parent class constructor is implicitly invoked by the child class constructors. This can be done using **`super()`** as shown in the code given below.

```java
class Customer {
    private String customerId;
    private String customerName;

    public Customer(String customerId, String customerName) {
        this.customerId = customerId;
        this.customerName = customerName;
    }
    // ... getter methods
}

class RegularCustomer extends Customer {
    private float discount;

    public RegularCustomer(String custId, String custName) {
        // Invoking the parent class parameterized constructor
        super(custId, custName);
        this.discount = 5.0f;
    }
    // ... other methods
}
```
*   Please also note that the call to a `super` constructor has to be the **first statement** inside a constructor.
*   In fact, the parameterless constructor of the parent class gets implicitly called by the child class constructors due to an implicit `super()` statement. This can also be done explicitly.

---

## Types of Inheritance

There are multiple types of inheritance. We will be discussing some of them in this course.

1.  **Single Inheritance**: One class is extended by only one class. (e.g., `RegularCustomer extends Customer`)
2.  **Multilevel Inheritance**: A class extends another class which extends another class. (e.g., `PremiumCustomer extends RegularCustomer` which `extends Customer`)
3.  **Hierarchical Inheritance**: When more than one class extends the same base class. (e.g., `RegularCustomer` and `Guest` both `extend Customer`)
4.  **Multiple Inheritance**: One class extends multiple classes.
    *   Please note that Multiple Inheritance is **NOT** supported in many object-oriented programming languages including **Java** (for classes).

### Advantages of Inheritance
*   **Code reusability**: The codes are defined only once and can be used multiple times. We define the functionalities in the parent class and any number of child classes can use the functionalities at any time.
*   Saves time and effort due to reusability of code.
*   Inheritance makes the application code more flexible to changes.
*   Inheritance results in better organization of codes into smaller and simpler compilation units which makes the code more readable and easy to debug.

---

This section covers the core concepts of Inheritance. The next logical step is to explore **Polymorphism**, which is heavily reliant on inheritance.

Shall we proceed?

Fantastic. Let's move on to **Polymorphism**, the final core pillar of Object-Oriented Programming, which brings together the concepts of inheritance and methods.

---
---

# 18. Polymorphism

**Polymorphism** is the ability of an object to take different forms, i.e., a single action that can be performed in different ways. The word `poly` means many and `morph` means forms. So, polymorphism means many forms.

Consider a simple example of a Bank. All the banks are providing loans to their customers. But are they all providing it at the same rate? No, the rate of interest may differ from bank to bank. So, an object of the `Bank` class may behave differently when we try to get the interest rate for bank loans (through a method).

### Polymorphism - Scenario

Consider the SwiftFood scenario in which a `Customer` is ordering food online. Based on the different types of customers, the final price and thus the payment of the bill get changed.
*   **Guests** are charged a delivery charge of $2.0.
*   **Regular Customers** get a discount of 5%.
*   **Premium Customers** get a discount of 8% and can use membership card points.

So, the final payment of the bill differs for each of the customers. Thus, the `Customer` class also exhibits polymorphism.

Polymorphism is of two types:
1.  **Static polymorphism** (Compile-time polymorphism)
2.  **Dynamic polymorphism** (Runtime polymorphism)

---

## Static Polymorphism (Method Overloading)

Polymorphism that gets resolved during compile time is known as **static polymorphism** or **compile-time polymorphism**. This polymorphism is achieved using **overloading** of the methods in the same class, called **Method Overloading**.

Method overloading allows the programmer to have multiple methods with the same name in the same class, but differing in their **signature**.

The signature can differ by:
*   The **number** of parameters
*   The **data type** of parameters
*   The **order** of the parameters

*Note: We cannot overload methods by their return type, i.e., two or more methods are not overloaded if they differ only in their return type.*

### Static Polymorphism - Scenario

Consider the scenario where the customer of the SwiftFood app needs to update his or her contact number. For this requirement, we will have a method `updateContact(long mobile)`.

Later, let us assume that the app provides another feature for the customers to change their address so that they can provide another delivery location. Now, we will add another method, `updateAddress(Address address)`.

Here, different methods are getting added to the code which are basically doing the same thing of updating the customer details which can be either contact number or address or any other details. Is there any need of having these methods with a different name? No, since we have the option of creating overloaded methods, i.e., methods with the same name differing in signature, we can use overloaded methods in this scenario.

The `Customer` class is having two methods (having the same behavior of updating the customer details) with the same name `updateDetails()` but both the methods differ in the data type of the parameter. This is Method Overloading and both the `updateDetails()` methods are said to be overloaded methods.

```java
public class Customer {
    // ... attributes and constructors

    public void updateDetails(long mobile) {
        System.out.println("Updating customer contact number...");
        this.setContactNumber(mobile);
    }

    public void updateDetails(Address address) {
        System.out.println("Updating customer address...");
        this.setAddress(address);
    }
}
```

Calls to the overloaded methods can be resolved based on the method signature during compilation and thus the name compile-time or static polymorphism.

```java
public static void main(String[] args) {
    Customer customer = new Customer("C101", "Stephen Abram", ...);
    long newContact = 7890000000L;
    Address newAddress = new Address("D101", "St. Louis Street", "Springfield", 62729);

    customer.updateDetails(newContact); // calls the updateDetails(long) method
    customer.updateDetails(newAddress); // calls the updateDetails(Address) method
}
```

### Constructor Overloading

Just like normal methods, constructors can also be overloaded, i.e., a class can have multiple constructors. This is called **constructor overloading**. Remember that you have already seen a class having multiple constructors.

---

## Dynamic Polymorphism (Method Overriding)

Similar to static polymorphism or compile-time polymorphism, polymorphism can also be achieved at runtime. This type of polymorphism is achieved using **overriding** the parent method in the child class, called **Method Overriding**.

The overriding feature allows the programmer to have a different implementation of parent methods with the same signature in the child classes. Such parent methods are said to be overridden.

When we override a method in the child class, it should have the **same signature** as that of the parent class.
*   The method should not have a weaker access modifier.
*   `private` methods are not overridden.

### Need for Method Overriding

Consider the parent `Customer` class. All the customer types need to pay the bill amount calculated for their orders. There is a `payBill()` in the `Customer` class for calculating the final amount for bill payment.

Since the final amount calculation which is done in the `payBill()` of the parent `Customer` class will not suit for all the customer types, we need to have separate implementation for this method in each of the child classes with respect to each customer type.

So, in this scenario, the `payBill()` of the child classes will **override** the implementation of `payBill()` present in the parent class. This is said to be method overriding.

```java
// In Parent Customer class
public double payBill(double totalPrice) {
    System.out.println("Final bill for the customer is calculated here");
    return totalPrice;
}

// In Child RegularCustomer class
class RegularCustomer extends Customer {
    private float discountPercentage = 5.0f;

    @Override // Annotation to indicate overriding
    public double payBill(double totalPrice) {
        double priceAfterDiscount = totalPrice * (1 - (discountPercentage / 100));
        return priceAfterDiscount;
    }
    // ... other methods
}
```
The `@Override` annotation is used to ensure that the method is actually overriding a parent method. If it's not, a compilation error occurs.

### Invoking Overridden Methods & Dynamic Binding

Which method do you think will be invoked in the cases below?

*   **Case 1:** `Customer customer = new Customer(); customer.payBill(40.0);`
    *   The `payBill()` from the parent class `Customer` will be invoked.

*   **Case 2:** `RegularCustomer regularCustomer = new RegularCustomer(); regularCustomer.payBill(40.0);`
    *   The overridden `payBill()` of the child class `RegularCustomer` will be invoked.

*   **Case 3:** `Customer regularCustomer = new RegularCustomer(); regularCustomer.payBill(40.0);`
    *   The answer is `payBill()` of the child class `RegularCustomer`.

You will now understand the reason behind the output of the previous code. A parent class reference can refer to a child class object.

`Parent Reference = new Child Object();`
`Customer regularCustomer = new RegularCustomer();`

The version of the method that will be called is determined by the **object**, and this decision is taken at **runtime**. This is called **Dynamic Binding**.
*   Only the overridden methods can be called using the parent class reference. Any new method created in the child class will not be accessible using the parent class reference.
*   `static` methods are not overridden. They will be called based on the type of reference used.

---

This covers the essential aspects of Polymorphism. The subsequent slides in your deck go into more detail on `super` for method calls, the `Object` class, and related topics.

Shall we proceed to the **`Object` class** and the methods it provides?

Of course. Let's delve into the universal superclass, the `Object` class, and its important methods.

---
---

# 19. Object Class

By now, you know about inheritance and polymorphism. One more thing that you should be knowing is that in Java, there is an **`Object` class** which is the implicit super class of all classes.

*(Image shows a hierarchy diagram with `Object` at the top. Branches lead to classes like `Character`, `Boolean`, `String`, `Number`, etc. The `Number` class further branches into `Integer`, `Byte`, `Short`, `Long`, `Float`, `Double`.)*

It provides useful methods which can be overridden according to our requirement. Some of the commonly used methods of the `Object` class are:
*   `equals()`
*   `hashCode()`
*   `toString()`

---

## `equals()` method

To understand the importance of the `equals()` method of the `Object` class, let us consider the scenario of SwiftFood. While adding food items, it is better to check if the same food item is not being added twice.

Two food items are considered to be the same if their name and type are same. Let us compare two `Food` objects using the `==` operator in the next Tryout.

### Why `equals()`?

Why are the objects in the previous tryout different, even though the values of the member variables are same?

The `==` operator which is used to compare two `Food` objects compares the objects with respect to their **memory address**.

Even though two objects have the same values of member variables, they are two different objects pointing to two different memory locations.

Whenever two objects are to be compared based on the values of the member variables, the `equals()` method of the `Object` class can be overridden.
*   By default, `equals()` uses memory address to compare for equality (just like `==`).
*   To make it work for different requirements, it needs to be overridden in the classes.

```java
// equals() method of Object class overridden for comparing two Food objects
// based on foodName and foodType
@Override
public boolean equals(Object obj) {
    if (this == obj) return true; // Check if the objects are the same instance
    if (obj == null || getClass() != obj.getClass()) return false; // Check for null and class type

    Food otherFood = (Food) obj; // Type casting

    if (this.foodName.equals(otherFood.foodName) &&
        this.foodType.equals(otherFood.foodType)) {
        return true;
    }
    return false;
}
```
In the above scenario:
*   `equals()` returns true if the `foodName` and `foodType` of two `Food` objects are same.
*   Type casting is done for the received object to cast it to `Food` object.
*   `otherFood` represents the second `Food` object received and is compared with the `Food` object using which `equals()` is invoked.

---

## `hashCode()` method

Next, you will see the `hashCode()` method.
*   `hashCode()` uses an object's data to generate a hash value, which should be a 32-bit integer.
*   By default, it derives the hash value based on the memory address of the object being used.
*   If two objects are equal according to the `equals()` method, they **must** produce the same integer hash code.
*   It is important to understand that if the hash codes of two objects are the same, it doesn't prove that the objects are equal, i.e., it is possible for two unequal objects to have the same hash codes. This is called a hash collision.
*   Any formula can be used for generating the hash code as long as it generates the same value for same objects.

```java
// hashCode() method overridden
@Override
public int hashCode() {
    int result = 1;
    result = 31 * result + (foodName != null ? foodName.hashCode() : 0);
    // A common practice is to use a prime number (like 31)
    // in the calculation to reduce collisions.
    return result;
}
```
In the code snippet of `equals()` and in the code snippet here for `hashCode()`, `equals()` and `hashCode()` are applied on `String`. The `String` class is also a subclass of the `Object` class, so it already overrides the `equals()` and `hashCode()` methods.

*Note: When comparing String objects for equality, the `equals()` method should be used since it is already overridden to compare the values.*

---

## `toString()` method

Apart from `equals()` and `hashCode()`, the `Object` class provides another method named `toString()`.

The `toString()` method returns a textual representation of an object.
*   By default, it returns a string consisting of the name of the object's class, the `@` character, and the unsigned hexadecimal representation of the hash code of the object. E.g., `Food@15db9742`
*   It should be overridden to provide a meaningful textual representation. The returned text should be concise, easy to read, and informative.

```java
@Override
public String toString() {
    return "Food Name: " + this.foodName + ", Cuisine: " + this.cuisine;
}
```

---
---

# 20. Wrapper Class - Introduction

Let us revisit the Object Class hierarchy in Java.

*(Image shows the `Object` class hierarchy again, with a developer thinking "I know boolean, char, int, ... the primitive data types. But what is Boolean, Character, Integer, etc.?")*

The primitive data types in Java do not inherit the `Object` class as they are not classes but sometimes, it is required to convert data types into objects in Java programming.

To convert data types into objects and to inherit the `Object` class, Java has **`Boolean`**, **`Character`**, **`Integer`**, **`Long`**, `Float` and **`Double`** classes which are called as **Wrapper Classes**.

Wrapper classes help in representing the primitive data types as an object. They form a wrapping around the primitive values to represent them as objects. They belong to the `java.lang` package as part of the Java library.

Whenever the data type is required as an object, the objects of the Wrapper classes can be used. Wrapper classes include methods to unwrap the object and give back the data type.

### Wrapper Classes - Tryout

This tryout demonstrates the use and methods of Wrapper classes.

```java
public static void main(String[] args) {
    // Conversion of int to Integer object
    int x = 5;
    Integer i = Integer.valueOf(x); // Boxing
    Integer j = x; // Autoboxing

    // Check if i is of type Integer
    System.out.println(i instanceof Integer); // true

    // Conversion of Integer to int
    int y = i.intValue(); // Unboxing
    int z = i; // Autounboxing

    // Conversion of numeric strings to numeric data types
    String numStr = "123";
    int num = Integer.parseInt(numStr);

    String doubleStr = "123.45";
    double d = Double.parseDouble(doubleStr);

    // Some other useful methods
    System.out.println(Integer.toBinaryString(10)); // Converts to binary
}
```

---

This covers the `Object` class and Wrapper classes. The next topics are the **`final` keyword** and **Abstract Classes/Interfaces**.

Shall we proceed to the `final` keyword?
Got it. Let's move on to the `final` keyword and its different applications.

---
---

# 21. `final` keyword

Previously in the course, we have used some constant values for mathematical calculations. For example, to calculate the area of a circle we use the formula πr² where π is a constant whose value is 3.14 and r is the radius of the circle.

In programming, we may encounter situations where we may have to create components that must remain constant, i.e., never change. In such cases, the `final` keyword can be used.

The `final` keyword can be used with classes, variables, and methods. The details are diagrammatically shown below.

*(Image shows a central box "Final" with branches to "Variables", "Methods", and "Classes".)*

*   **Final Variables (Constants)**
    *   A `final` field's value **cannot be changed** once it is initialized, i.e., it becomes a constant.
    *   `private final float VALUE_OF_PI = 3.14f;`
    *   *Note the identifier naming convention for final fields is all uppercase with underscores.*

*   **Final Methods**
    *   A `final` method **cannot be overridden** in sub-classes.
    *   `public final void myFinalMethod() { ... }`

*   **Final Classes**
    *   A `final` class **cannot be sub-classed**, i.e., it cannot be extended.
    *   `public final class MyFinalClass { ... }`

### `final` variable - Tryout

Let us now set "num" as a `final` variable. After changing to `final`, the value of "num" cannot be changed. If we try to change the value, it will throw an error.

```java
class Demo {
    final int num = 10; // final variable

    public void changeNumber() {
        // The following line will cause a compilation error
        // because 'num' is final.
        num = 20;
        System.out.println("The value of num is " + num);
    }
}

class Tester {
    public static void main(String[] args) {
        Demo demo = new Demo();
        demo.changeNumber();
    }
}
```

### `final` method in sub-classes - Tryout

The base class `final` method can be used in sub-classes. Observe the below code, it will not throw an error as the `final` method is not overridden.

```java
class A {
    final void example() {
        System.out.println("Class A method");
    }
}

class B extends A {
    void demo() {
        System.out.println("Class B method");
    }
}

class Tester {
    public static void main(String[] args) {
        B obj = new B();
        obj.example(); // This is valid, calling the inherited final method
        obj.demo();
    }
}
```

### `final` class - Tryout

In the code given below, class `B` extends the `final` class `A`. Since a `final` class cannot be extended, it will throw an error.

```java
final class A {
    void example() {
        System.out.println("In class A");
    }
}

// The following class declaration will cause a compilation error
// because A is a final class.
class B extends A {
    void demo() {
        // ...
    }
}
```

---
---

# 22. Abstract

### Need for Abstract

Customer class in the SwiftFood app scenario has a `payBill` method. The implementation of this method completely depends on the type of customer. So, we implemented this method in all our customer types (child classes) by overriding the parent method.

Thus, the parent class method implementation doesn't actually have any significance but it is necessary for all the child classes to provide a proper implementation for the method.

So, this means the parent class will not have any implementation for the `payBill()` method but we need to **enforce** that the child classes implement the `payBill()` method.

This can be enforced with the help of the `abstract` keyword as shown below:

```java
abstract public class Customer {
    // Instance variables and constructor

    public abstract double payBill(double totalPrice);

    // displayCustomerDetails()
    // updateDetails() overloaded methods
    // getter and setter methods
}
```
Here, the `payBill()` method doesn't have any implementation because it depends on the customer type, whether it is a guest, regular customer, or premium customer. Since it cannot have any implementation, it had been marked as **`abstract`**.

Since the method `payBill` is `abstract` in the `Customer` class, the class itself becomes incomplete and demands for a child class to complete it.

For marking the class as incomplete, the `abstract` keyword is used with the class also. Any class extending this abstract class must provide the implementation of the abstract methods.

### Abstract class and methods

The `abstract` keyword signifies that something is not complete. It can be used with classes and methods.
*   An `abstract method` is a method without any definition, i.e., the body. The signature of an abstract method must be preceded by the `abstract` keyword.
    `public abstract double payBill(double totalPrice);`

*   An `abstract class` is a class which is incomplete and **cannot be instantiated**.
    `abstract public class Customer {}`

Some points that you should be knowing about abstract class are:
*   An abstract class encapsulates the common behaviors of all its child classes with the help of abstract methods.
*   Concrete (non-abstract) classes which extend an abstract class must implement all the abstract methods. Otherwise, they should be made abstract as well.
*   If a class contains at least one abstract method, the class should be abstract.
*   A class can be made abstract even without any abstract methods.

### Abstraction and Dynamic Binding

We know a parent class reference can refer to a child class object. So, if a reference belongs to an abstract class, you can be sure that the object it refers to will always be of its child type.

`Customer regularCustomer = new RegularCustomer();`
*(If the parent reference is abstract, the object must be of a child type.)*

Thus,
*   `abstract` classes enforce **inheritance** (since they can't be instantiated) and
*   `abstract` methods enforce **overriding** (since they are incomplete with no implementation).

---

This covers the `final` and `abstract` keywords. The final core concept in this part of the course is **Interfaces**.

Shall we proceed to Interfaces?

URL:[Oracel_Documentation ](https://docs.oracle.com/en/java/javase/24/core/serialization-filtering1.html)

Notes on 21062025:
Of course. Let's complete the section on Interfaces and then provide the requested notes on Serialization Filtering based on the Oracle documentation.

---
---

# 23. Interfaces

You have learnt about abstract classes which help in achieving abstraction. Now, you will be learning another way of achieving abstraction called **Interfaces**.

### Why Interfaces?

Consider a scenario where a class needs to inherit from two different parent classes. For example, a `Smartphone` class might need behaviors from both a `Phone` class (making calls) and a `Camera` class (taking pictures).

As you know, Java **does not support multiple inheritance** for classes. This is to avoid the "diamond problem," where a child class inherits conflicting methods from two different parents.

So, how can a class get behaviors from multiple sources? The answer is by using **Interfaces**. A class can `implement` multiple interfaces.

### What is an Interface?

An **interface** in Java is a reference type, similar to a class, that can contain only constants, method signatures, default methods, static methods, and nested types. It is a way to achieve full abstraction.
*   An interface is like a **contract**. Any class that `implements` an interface must provide the implementation for all its abstract methods.
*   An interface specifies *what* a class must do, but not *how* it does it.

**Syntax:**
```java
public interface InterfaceName {
    // constant fields (public static final by default)
    // abstract methods (public abstract by default)
    // default methods (since Java 8)
    // static methods (since Java 8)
}
```

### Key properties of Interfaces:
*   Methods in an interface are implicitly `public` and `abstract`.
*   Variables declared in an interface are implicitly `public`, `static`, and `final`.
*   An interface **cannot be instantiated** (you can't create an object of an interface).
*   A class uses the `implements` keyword to use an interface.
*   A class can implement more than one interface.

### Interface Implementation - Tryout

Let's create a `Payable` interface for the SwiftFood app. Any payment method should adhere to this contract.

```java
// Interface definition
public interface Payable {
    double PI = 3.14; // This is public, static, and final by default

    void makePayment(double amount); // This is public and abstract by default
}

// Class implementing the interface
class CreditCardPayment implements Payable {
    @Override
    public void makePayment(double amount) {
        System.out.println("Processing credit card payment of $" + amount);
        // Logic for credit card transaction
    }
}

class PayPalPayment implements Payable {
    @Override
    public void makePayment(double amount) {
        System.out.println("Processing PayPal payment of $" + amount);
        // Logic for PayPal transaction
    }
}

class Tester {
    public static void main(String[] args) {
        // We can create a reference of an interface
        // that points to an object of an implementing class
        Payable ccPayment = new CreditCardPayment();
        ccPayment.makePayment(150.75);

        Payable paypalPayment = new PayPalPayment();
        paypalPayment.makePayment(88.50);
    }
}
```

### Abstract Class vs. Interface

While both are used for abstraction, they have key differences and are used for different purposes.

| Feature                 | Abstract Class                               | Interface                                        |
| ----------------------- | -------------------------------------------- | ------------------------------------------------ |
| **Inheritance**         | A class can `extend` only **one** abstract class. | A class can `implement` **multiple** interfaces.     |
| **Variables**           | Can have `final`, `non-final`, `static`, and `non-static` variables. | Can only have `public static final` constants.   |
| **Methods**             | Can have `abstract` and `non-abstract` (concrete) methods. | All methods are `public abstract` by default. Can have `default` and `static` methods with implementation since Java 8. |
| **Constructor**         | Can have a constructor (called by sub-classes). | **Cannot** have a constructor.                   |
| **Access Modifiers**    | Members can have `public`, `protected`, and `private` access. | Members are `public` by default.                   |
| **Purpose**             | To provide a common base for a group of related classes (**is-a** relationship). | To define a contract or capability that unrelated classes can implement (**can-do** relationship). |

---
---

# 24. Further Notes: Serialization Filtering (from Oracle Documentation)

The following notes are based on the Oracle documentation for [Serialization Filtering](https://docs.oracle.com/en/java/javase/24/core/serialization-filtering1.html). This is an advanced security feature.

### 1. The Problem: Deserialization of Untrusted Data

*   **Serialization** is the process of converting a Java object into a byte stream, which can be stored or transmitted.
*   **Deserialization** is the reverse process: converting a byte stream back into a Java object.
*   **The Security Risk:** If an application deserializes a byte stream from an untrusted source (e.g., a network socket, a file uploaded by a user), a malicious actor can craft a special byte stream. When deserialized, this stream could create unexpected objects ("gadgets") that exploit application logic, leading to Remote Code Execution (RCE) or other vulnerabilities. This is a major security threat.

### 2. The Solution: `ObjectInputFilter`

To combat this threat, Java provides a mechanism to **filter** incoming serialization data. This allows you to validate the classes being deserialized *before* they are instantiated, preventing malicious objects from being created.

The core of this mechanism is the `java.io.ObjectInputFilter` interface.

### 3. How Filtering Works

1.  A filter is configured for an `ObjectInputStream`.
2.  When `readObject()` is called, the stream reads ahead to find the class information in the byte stream.
3.  The filter's `checkInput(FilterInfo info)` method is invoked. The `FilterInfo` object contains details about the class being deserialized, such as:
    *   The class itself (`serialClass()`)
    *   The number of references (`references()`)
    *   The current depth of the object graph (`depth()`)
    *   The total number of bytes consumed so far (`streamBytes()`)
4.  The `checkInput` method must return a `Status`:
    *   `Status.ALLOWED`: The object is safe to deserialize.
    *   `Status.REJECTED`: The object is unsafe. An `InvalidClassException` is thrown, and deserialization stops.
    *   `Status.UNDECIDED`: The filter makes no decision, allowing other filters (e.g., a process-wide filter) to decide.

### 4. Ways to Configure a Filter

There are two primary ways to set a serialization filter:

1.  **Process-wide Filter:** A single filter that applies to all `ObjectInputStream`s in the JVM unless a stream-specific filter is set. This is good for setting a baseline security policy.
    *   **How:** `ObjectInputFilter.Config.setSerialFilter(filter);`

2.  **Stream-specific Filter:** A filter that applies only to a particular `ObjectInputStream` instance. It overrides any process-wide filter. This provides fine-grained control.
    *   **How:** `objectInputStream.setObjectInputFilter(filter);`

### 5. Filter Patterns (The Easy Way)

Writing a full Java class for a filter can be cumbersome. For most common cases, you can use a **pattern-based filter**. A pattern is a `String` that defines rules.

*   **How:** `ObjectInputFilter filter = ObjectInputFilter.Config.createFilter(patternString);`

**Pattern Syntax:**
Patterns are a series of rules separated by semicolons (`;`). The first matching rule determines the result.
*   `maxdepth=value`: Rejects if the object graph is too deep.
*   `maxarray=value`: Rejects if an array is too large.
*   `maxbytes=value`: Rejects if the stream is too long.
*   `com.example.AllowedClass`: Allows a specific class.
*   `!com.example.RejectedClass`: Rejects a specific class.
*   `com.example.package.*`: Allows all classes in a package.
*   `com.example.package.**`: Allows all classes in a package and its sub-packages.
*   `*`: Matches any class. `!*` would reject everything not explicitly allowed before it.

### 6. Example of a Pattern-based Filter

```java
import java.io.*;

public class FilterExample {
    public static void main(String[] args) {
        // Define a filter pattern:
        // 1. Allow the specific `AllowedData` class.
        // 2. Reject everything else.
        // 3. Set a max depth of 5.
        String pattern = "com.example.filter.AllowedData;!*;maxdepth=5";
        ObjectInputFilter filter = ObjectInputFilter.Config.createFilter(pattern);

        // -- Serialize some objects --
        ByteArrayOutputStream baos = new ByteArrayOutputStream();
        try (ObjectOutputStream oos = new ObjectOutputStream(baos)) {
            oos.writeObject(new AllowedData("Safe"));
            oos.writeObject(new RejectedData("Malicious")); // This will be rejected later
        } catch (IOException e) {
            e.printStackTrace();
        }

        // -- Deserialize with the filter --
        ByteArrayInputStream bais = new ByteArrayInputStream(baos.toByteArray());
        try (ObjectInputStream ois = new ObjectInputStream(bais)) {
            // Apply the stream-specific filter
            ois.setObjectInputFilter(filter);

            // This will succeed
            AllowedData allowed = (AllowedData) ois.readObject();
            System.out.println("Successfully deserialized: " + allowed.data);

            // This will fail and throw InvalidClassException
            RejectedData rejected = (RejectedData) ois.readObject();
            System.out.println("This line will not be reached.");

        } catch (InvalidClassException e) {
            System.err.println("Deserialization rejected as expected!");
            System.err.println(e.getMessage());
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}

// Helper classes for the example
class AllowedData implements Serializable {
    String data;
    AllowedData(String data) { this.data = data; }
}

class RejectedData implements Serializable {
    String data;
    RejectedData(String data) { this.data = data; }
}
```
**Expected Output:**
```
Successfully deserialized: Safe
Deserialization rejected as expected!
filter status: REJECTED
```
Of course. The next logical topics in a foundational Java course are **Exception Handling**, **Packages**, and an introduction to **Unit Testing with JUnit**. Let's continue with the notes in the established format.

---
---

# 25. Exception Handling

In a perfect world, programs would always run without error. Users would never enter invalid data, files would always exist, and network connections would never drop. In the real world, unexpected events, or **exceptions**, occur.

**Exception Handling** is a powerful mechanism in Java that allows you to manage runtime errors gracefully, preventing your program from crashing abruptly.

### Why do we need Exception Handling?

Consider this simple code:

```java
public class Calculator {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        int result = a / b; // This will cause an error!
        System.out.println("Result is: " + result);
        System.out.println("This line will never be reached.");
    }
}
```
When you run this code, the JVM will encounter an attempt to divide by zero, which is an illegal mathematical operation. It will throw an `ArithmeticException` and the program will terminate immediately. The final print statement is never executed.

Exception handling allows us to "catch" this error and handle it, allowing the program to continue or terminate in a controlled manner.

### The `try-catch` block

The core of exception handling is the `try-catch` block.
*   **`try` block**: You place the code that might cause an exception (the "risky" code) inside the `try` block.
*   **`catch` block**: If an exception occurs in the `try` block, the JVM looks for a matching `catch` block to handle it. The `catch` block is the error handler.

**Syntax:**
```java
try {
    // Risky code that might throw an exception
} catch (ExceptionType e) {
    // Code to handle the exception
}
```

Let's fix our `Calculator` example:
```java
public class Calculator {
    public static void main(String[] args) {
        try {
            int a = 10;
            int b = 0;
            int result = a / b;
            System.out.println("Result is: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero!");
            // You can also print the exception details for debugging
            // e.printStackTrace();
        }
        System.out.println("Program continues after handling the exception.");
    }
}
```
**Output:**
```
Error: Cannot divide by zero!
Program continues after handling the exception.
```

### The `finally` block

Sometimes, you have code that **must** be executed, regardless of whether an exception was thrown or not. This is often used for cleanup operations, like closing a file or a database connection. The `finally` block is used for this purpose.

*   The `finally` block is optional and is placed after all `catch` blocks.
*   It is **always** executed: after the `try` block if no exception occurs, or after a `catch` block if an exception is handled.

```java
try {
    // ... risky code ...
} catch (ExceptionType e) {
    // ... handle error ...
} finally {
    // ... cleanup code (this always runs) ...
}
```

### Checked vs. Unchecked Exceptions

Exceptions in Java form a hierarchy. Not all exceptions are treated the same way.

*   **Checked Exceptions**: These are exceptions that a well-written application should anticipate and recover from. Examples include `IOException` (file not found) and `SQLException`. The Java compiler **forces** you to handle them using a `try-catch` block or by declaring them in the method signature with the `throws` keyword.

*   **Unchecked Exceptions (RuntimeExceptions)**: These exceptions result from programming errors, such as logic flaws. Examples include `NullPointerException`, `ArrayIndexOutOfBoundsException`, and `ArithmeticException`. The compiler **does not** force you to handle them, although you can if you wish. The best practice is often to fix the underlying code bug rather than catching them.

### `throw` and `throws` keywords

*   **`throws` keyword**: Used in a method signature to declare that the method might throw one or more checked exceptions. This delegates the responsibility of handling the exception to the method that calls it.
    ```java
    // This method declares that it might throw an IOException
    public void readFile(String fileName) throws IOException {
        FileReader reader = new FileReader(fileName);
        // ... more code ...
    }
    ```

*   **`throw` keyword**: Used to manually create and throw an exception object. This is useful for enforcing business rules or validating input.
    ```java
    public void setAge(int age) {
        if (age < 0) {
            // Manually throwing an exception
            throw new IllegalArgumentException("Age cannot be negative.");
        }
        this.age = age;
    }
    ```

---
---

# 26. Packages

As applications grow, organizing hundreds or thousands of classes becomes a challenge. You might also encounter **naming conflicts** if two developers create classes with the same name (e.g., two different `Customer` classes).

**Packages** are Java's way of grouping related classes, interfaces, and sub-packages, essentially acting as namespaces or folders for your code.

### Benefits of Packages:
*   **Organization**: Keeps related code together, making it easier to find and understand.
*   **Name Conflict Prevention**: A class's full name includes its package name (e.g., `java.util.Date` vs. `java.sql.Date`). This allows two classes to have the same simple name.
*   **Access Control**: Packages provide a level of access control. The `default` (or package-private) access modifier allows members to be accessed only by other classes within the same package.

### Creating and Using Packages

*   **Declaration**: To put a class in a package, you use the `package` keyword as the very first statement in the source file.
    ```java
    package com.swiftfood.model;

    public class Customer {
        // ...
    }
    ```
    **Naming Convention**: The standard is to use your company's reversed internet domain name (e.g., `com.google.maps`, `org.apache.commons`).

*   **Importing**: To use a class from another package, you must `import` it.
    ```java
    package com.swiftfood.service;

    // Import a specific class
    import com.swiftfood.model.Customer;
    // Or import all classes from a package (use with caution)
    import java.util.*;

    public class OrderService {
        public void placeOrder(Customer customer, List<String> items) {
            // Now you can use the Customer class
        }
    }
    ```

---
---

# 27. JUnit - Introduction to Unit Testing

How do you know if the code you wrote actually works correctly? You could write a `main` method and print things out, but this is inefficient and not repeatable. Professional developers use **testing frameworks** to automate this process.

**Unit Testing** is the practice of testing the smallest "units" of your application (typically individual methods) in isolation to verify they behave as expected.

**JUnit** is the most popular unit testing framework for Java.

### Writing a Basic Test Case

A test in JUnit is simply a method inside a special test class.
1.  **Test Class**: A class that contains test methods. By convention, if you are testing a class named `Calculator`, your test class would be `CalculatorTest`.
2.  **Test Method**: A method annotated with `@Test`. This tells JUnit that it's a test to be executed.
3.  **Assertions**: Inside a test method, you use **assertion** methods to check if a certain condition is true. If an assertion fails, the test fails.

### JUnit Example

Let's say we have a simple `Calculator` class.

**Code to be Tested (`Calculator.java`):**
```java
public class Calculator {
    public int add(int a, int b) {
        return a + b;
    }
}
```

**Test Code (`CalculatorTest.java`):**
```java
// Import necessary JUnit classes
import static org.junit.jupiter.api.Assertions.assertEquals;
import org.junit.jupiter.api.Test;

class CalculatorTest {

    @Test
    void testAdd() {
        // 1. Setup: Create an instance of the class to test
        Calculator calculator = new Calculator();

        // 2. Execution: Call the method you want to test
        int result = calculator.add(2, 3);

        // 3. Assertion: Check if the result is what you expect
        int expected = 5;
        assertEquals(expected, result, "2 + 3 should equal 5");
    }
}
```
When you run this test in your IDE (like Eclipse or IntelliJ), JUnit will execute the `testAdd` method. It will see that the `result` (5) is equal to the `expected` value (5). The assertion passes, and the test is marked with a green checkmark. If the result were anything else, the test would fail with a red 'X'.

### Common JUnit Assertions

JUnit provides many useful assertion methods in the `org.junit.jupiter.api.Assertions` class.
*   `assertEquals(expected, actual)`: Checks if two values are equal.
*   `assertNotEquals(unexpected, actual)`: Checks if two values are not equal.
*   `assertTrue(condition)`: Checks if a condition is true.
*   `assertFalse(condition)`: Checks if a condition is false.
*   `assertNull(object)`: Checks if an object is null.
*   `assertNotNull(object)`: Checks if an object is not null.
*   `assertThrows(Exception.class, () -> { /* code that should throw an exception */ })`: Checks if a specific exception is thrown.

Excellent. After covering the fundamentals of object-oriented programming and basic tools like JUnit, a typical Java course progresses to handling data structures, interacting with the file system, and introducing modern language features.

Here are the next logical topics for your course material.

---
---

# 28. Java Collections Framework (JCF)

So far, you have used arrays to store a collection of objects. However, arrays have a major limitation: they are of a **fixed size**. Once created, you cannot increase or decrease their size.

To overcome this, Java provides the **Java Collections Framework (JCF)**, a powerful and unified architecture for representing and manipulating collections of objects. It is located in the `java.util` package.

### Core Interfaces of the JCF

The framework is built around a set of core interfaces. The most important ones are:
*   **`Collection`**: The root interface of the hierarchy. It represents a group of objects.
*   **`List`**: An ordered collection (also known as a sequence) that **allows duplicate** elements. You can access elements by their integer index.
*   **`Set`**: A collection that **does not allow duplicate** elements. It models the mathematical set abstraction.
*   **`Map`**: An object that maps keys to values. It **does not allow duplicate keys**; each key can map to at most one value. Note: `Map` does not extend the `Collection` interface but is considered part of the framework.

### The `List` Interface

A `List` is perfect for when you need an ordered sequence of items and duplicates are acceptable.

**Common Implementations:**
*   **`ArrayList`**: Implemented as a dynamic array. It provides fast random access (getting an element by index, e.g., `list.get(5)`). However, adding or removing elements from the middle of the list is slow because it requires shifting subsequent elements.
*   **`LinkedList`**: Implemented as a doubly-linked list. Adding or removing elements (especially from the beginning or end) is very fast. However, accessing an element by index is slow because it requires traversing the list from the beginning or end.

**Example:**
```java
import java.util.ArrayList;
import java.util.List;

public class ListExample {
    public static void main(String[] args) {
        // It's good practice to code to the interface (List)
        List<String> foodItems = new ArrayList<>();

        // Adding elements
        foodItems.add("Pizza");
        foodItems.add("Burger");
        foodItems.add("Pizza"); // Duplicates are allowed

        // Accessing an element
        System.out.println("Item at index 1: " + foodItems.get(1));

        // Iterating over the list
        for (String item : foodItems) {
            System.out.println(item);
        }
    }
}
```

### The `Set` Interface

A `Set` is used when you need to store a collection of unique items and order is not important.

**Common Implementation:**
*   **`HashSet`**: Stores its elements in a hash table. It offers the best performance but makes no guarantees concerning the iteration order. It uses the `hashCode()` and `equals()` methods of the objects to determine uniqueness.

**Example:**
```java
import java.util.HashSet;
import java.util.Set;

public class SetExample {
    public static void main(String[] args) {
        Set<String> uniqueIngredients = new HashSet<>();

        uniqueIngredients.add("Tomato");
        uniqueIngredients.add("Cheese");
        uniqueIngredients.add("Tomato"); // This will be ignored

        System.out.println("Set contains 'Cheese': " + uniqueIngredients.contains("Cheese"));
        System.out.println("Size of set: " + uniqueIngredients.size()); // Output will be 2
    }
}
```

### The `Map` Interface

A `Map` is used when you need to associate a unique key with a value. Think of it like a dictionary or a phone book.

**Common Implementation:**
*   **`HashMap`**: Provides a key-value store based on hashing. It offers fast retrieval (`get`) and insertion (`put`) but does not guarantee any order. Keys must be unique.

**Example:**
```java
import java.util.HashMap;
import java.util.Map;

public class MapExample {
    public static void main(String[] args) {
        // Map of customer IDs to customer names
        Map<String, String> customerMap = new HashMap<>();

        customerMap.put("C101", "Stephen Abram");
        customerMap.put("C102", "John Kora");
        customerMap.put("C101", "Stephen A. Updated"); // Replaces the previous value for key "C101"

        System.out.println("Name of customer C102: " + customerMap.get("C102"));

        // Iterating over the keys
        for (String customerId : customerMap.keySet()) {
            System.out.println("ID: " + customerId + ", Name: " + customerMap.get(customerId));
        }
    }
}
```

---
---

# 29. File I/O (Input/Output)

The programs you've written so far lose all their data when they stop running. To make data **persistent**, you need to save it to a file and read it back later. This process is known as **File I/O**.

Java provides rich libraries for file handling. The modern approach (since Java 7) uses the `java.nio.file` package, which is simpler and more powerful than the older `java.io` package.

### The `Path` and `Files` classes

*   **`Path`**: An object that represents the location of a file or directory. It is not the file itself, but a pointer to it.
*   **`Files`**: A utility class that contains static methods for operating on files and directories, such as reading, writing, and creating them.

### Writing to a File

The `Files.write()` method provides an easy way to write text to a file. It automatically handles opening and closing the file.

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.List;

public class WriteFileExample {
    public static void main(String[] args) {
        Path filePath = Paths.get("customer_data.txt");
        List<String> linesToWrite = Arrays.asList("C101,Stephen Abram", "C102,John Kora");

        try {
            Files.write(filePath, linesToWrite);
            System.out.println("Successfully wrote to the file.");
        } catch (IOException e) {
            System.err.println("An error occurred while writing the file: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
```

### Reading from a File

Similarly, `Files.readAllLines()` reads all lines from a file into a `List<String>`.

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class ReadFileExample {
    public static void main(String[] args) {
        Path filePath = Paths.get("customer_data.txt");

        try {
            if (Files.exists(filePath)) {
                List<String> linesRead = Files.readAllLines(filePath);
                System.out.println("File content:");
                for (String line : linesRead) {
                    System.out.println(line);
                }
            } else {
                System.out.println("File not found.");
            }
        } catch (IOException e) {
            System.err.println("An error occurred while reading the file: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
```

### try-with-resources

For more complex I/O that involves streams (like `BufferedReader` or `InputStream`), it's crucial to ensure resources are closed properly. The `try-with-resources` statement automates this. Any object that implements `java.lang.AutoCloseable` can be used.

This is a safer and cleaner alternative to using a `finally` block for closing resources.

```java
Path path = Paths.get("customer_data.txt");
// The BufferedReader will be automatically closed at the end of the block.
try (BufferedReader reader = Files.newBufferedReader(path)) {
    String line;
    while ((line = reader.readLine()) != null) {
        System.out.println(line);
    }
} catch (IOException e) {
    e.printStackTrace();
}
```

---
---

# 30. Lambda Expressions and the Stream API

Since Java 8, the language has incorporated features from **functional programming**. This allows for a more expressive, concise, and powerful way to work with data, especially collections.

### Lambda Expressions

A **lambda expression** is a short block of code that takes in parameters and returns a value. They are similar to methods, but they do not need a name, and they can be implemented right in the body of another method. They are often called **anonymous functions**.

**Why use them?** To write less boilerplate code.

Consider sorting a list of customers by name.
**Before Java 8 (using an anonymous inner class):**
```java
Collections.sort(customerList, new Comparator<Customer>() {
    @Override
    public int compare(Customer c1, Customer c2) {
        return c1.getCustomerName().compareTo(c2.getCustomerName());
    }
});
```
**With a Lambda Expression:**
```java
Collections.sort(customerList, (c1, c2) -> c1.getCustomerName().compareTo(c2.getCustomerName()));
```
The lambda expression `(c1, c2) -> c1.getCustomerName().compareTo(c2.getCustomerName())` is a compact implementation of the `Comparator` interface.

### The Stream API

The **Stream API** is a powerful new way to process collections of objects. A stream is a sequence of elements that supports various methods which can be pipelined to produce the desired result.

A stream pipeline consists of:
1.  **A source**: The collection, array, or I/O channel that provides the data.
2.  **Intermediate operations**: Operations like `filter`, `map`, or `sorted` that transform the stream into another stream. These are **lazy**; they don't execute until a terminal operation is invoked.
3.  **A terminal operation**: An operation like `forEach`, `collect`, or `count` that produces a result or a side-effect. This triggers the execution of the pipeline.

**Example:**
Imagine you have a `List<Customer>` and you want to get a list of the names of all premium customers, sorted alphabetically.

**Traditional `for` loop:**
```java
List<String> premiumNames = new ArrayList<>();
for (Customer c : customerList) {
    if (c.getType().equals("Premium")) {
        premiumNames.add(c.getCustomerName());
    }
}
Collections.sort(premiumNames);
```
**Using the Stream API:**
```java
List<String> premiumNames = customerList.stream() // 1. Get a stream from the list (source)
    .filter(c -> c.getType().equals("Premium"))    // 2. Keep only premium customers (intermediate)
    .map(c -> c.getCustomerName())                 // 3. Transform Customer objects to String names (intermediate)
    .sorted()                                      // 4. Sort the names (intermediate)
    .collect(Collectors.toList());                 // 5. Collect the results into a new List (terminal)
```
This approach is often more readable and declarative—it describes *what* you want to do, not *how* to do it step-by-step.

Of course. After covering modern features like Streams and Lambdas, a comprehensive course would typically move towards more advanced and practical topics such as multi-threading, database connectivity, and an overview of building web applications.

Here are the next logical topics for your course material.

---
---

# 31. Concurrency and Multi-threading

Most modern computers have multiple CPU cores, allowing them to execute several tasks simultaneously. **Concurrency** is the ability of an application to make progress on more than one task at the same time. In Java, this is primarily achieved through **threads**.

A **thread** is the smallest unit of processing that can be scheduled by an operating system. A single Java application can have multiple threads running concurrently, each performing a different task. This is called **multi-threading**.

### Why use Multi-threading?
*   **Responsiveness**: In a desktop or web application, a long-running task (like a complex calculation or a network download) can be run on a separate thread, keeping the user interface (UI) responsive.
*   **Performance**: For CPU-intensive tasks, you can split the work across multiple threads to take full advantage of multi-core processors, completing the work faster.
*   **Asynchronous Operations**: Efficiently handle I/O operations (like reading from files or making network requests) without blocking the main application thread.

### Creating and Running a Thread

There are two main ways to create a thread in Java:

1.  **Implementing the `Runnable` interface (Recommended)**:
    Create a class that implements the `Runnable` interface and its `run()` method. This method contains the code that will be executed by the thread.

    ```java
    class MyTask implements Runnable {
        @Override
        public void run() {
            System.out.println("This task is running on a separate thread. ID: " + Thread.currentThread().getId());
        }
    }

    public class Main {
        public static void main(String[] args) {
            MyTask task = new MyTask();
            Thread thread = new Thread(task);
            thread.start(); // This starts the new thread and calls the run() method
        }
    }
    ```

2.  **Extending the `Thread` class**:
    Create a class that extends `Thread` and overrides its `run()` method. This approach is less flexible because Java does not support multiple inheritance.

### The Challenge of Concurrency: Shared Data

When multiple threads access and modify the same data (shared state), you can run into problems like **race conditions**, where the final outcome depends on the unpredictable timing of thread execution.

To prevent this, you need to ensure **thread safety**. This is done through **synchronization**.

The `synchronized` keyword can be used to create a **monitor lock** (or mutex). Only one thread can hold the lock at a time, ensuring that a block of code (or a method) is executed by only one thread at a time.

```java
public class Counter {
    private int count = 0;

    // This method is thread-safe.
    // Only one thread can execute it at any given moment for a specific Counter instance.
    public synchronized void increment() {
        count++;
    }

    public int getCount() {
        return count;
    }
}
```

### The Executor Framework

Manually creating and managing threads can be complex and error-prone. The **Executor Framework** (in `java.util.concurrent`) provides a higher-level abstraction for managing a pool of threads and executing tasks.

```java
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class ExecutorExample {
    public static void main(String[] args) {
        // Creates a thread pool with a fixed number of threads
        ExecutorService executor = Executors.newFixedThreadPool(5);

        for (int i = 0; i < 10; i++) {
            Runnable task = () -> {
                System.out.println("Executing task in thread: " + Thread.currentThread().getName());
            };
            executor.submit(task); // Submits a task to the pool for execution
        }

        executor.shutdown(); // Initiates a shutdown of the pool
    }
}
```

---
---

# 32. JDBC (Java Database Connectivity)

Most real-world applications need to store data in a relational database like MySQL, PostgreSQL, or Oracle. **JDBC** is a standard Java API that allows Java programs to connect to and interact with databases.

It provides a set of classes and interfaces to execute SQL queries and process the results.

### The JDBC Workflow

The process of interacting with a database typically involves these steps:
1.  **Load the JDBC Driver**: Load the specific driver for your database (e.g., the MySQL driver).
2.  **Establish a Connection**: Use the `DriverManager` to get a `Connection` object using the database URL, username, and password.
3.  **Create a Statement**: Use the `Connection` object to create a `Statement` or `PreparedStatement` object.
4.  **Execute the Query**: Use the statement object to execute an SQL query (`SELECT`, `INSERT`, `UPDATE`, `DELETE`).
5.  **Process the ResultSet**: If the query was a `SELECT`, process the results returned in a `ResultSet` object.
6.  **Close the Resources**: Close the `ResultSet`, `Statement`, and `Connection` objects in a `finally` block or using a `try-with-resources` statement to release database resources.

### Example: Retrieving Customer Data

This example assumes you have a MySQL database and have added the MySQL JDBC driver JAR to your project's classpath.

```java
import java.sql.*;

public class JdbcExample {
    // Database credentials
    private static final String DB_URL = "jdbc:mysql://localhost:3306/swiftfood_db";
    private static final String USER = "your_username";
    private static final String PASS = "your_password";

    public static void main(String[] args) {
        String sql = "SELECT customerId, customerName FROM Customer WHERE customerId = ?";

        // Use try-with-resources to automatically close the resources
        try (Connection conn = DriverManager.getConnection(DB_URL, USER, PASS);
             PreparedStatement pstmt = conn.prepareStatement(sql)) {

            pstmt.setString(1, "C101"); // Set the parameter for the WHERE clause

            try (ResultSet rs = pstmt.executeQuery()) {
                // Loop through the results
                while (rs.next()) {
                    String id = rs.getString("customerId");
                    String name = rs.getString("customerName");
                    System.out.println("ID: " + id + ", Name: " + name);
                }
            }

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
```
**`PreparedStatement` vs. `Statement`**: A `PreparedStatement` is pre-compiled and is the preferred way to execute queries. It is more efficient and, crucially, helps prevent **SQL injection attacks** by safely handling parameters.

---
---

# 33. Introduction to Web Applications with Servlets

While Java is used for many things, one of its most common uses is building server-side applications for the web.

A **Servlet** is a Java class that extends the capabilities of a server. It runs inside a **Servlet Container** (like Apache Tomcat or Jetty) and handles requests from clients (like web browsers) and generates responses.

### How it Works
1.  A user in a web browser sends an HTTP request to a URL (e.g., `http://swiftfood.com/order`).
2.  The Servlet Container (Tomcat) receives the request and determines which Servlet should handle it based on configuration (`web.xml` or annotations).
3.  The container creates (or reuses) an instance of the corresponding Servlet.
4.  The container calls the Servlet's `service()` method, which typically delegates to `doGet()` for GET requests or `doPost()` for POST requests.
5.  Inside the `doGet()` or `doPost()` method, you write Java code to:
    *   Read request parameters (e.g., form data).
    *   Perform business logic (e.g., interact with a database via JDBC).
    *   Generate a response (typically an HTML page) and send it back to the client.

### Example: A Simple "Hello World" Servlet

```java
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

// The @WebServlet annotation maps this servlet to the "/hello" URL pattern
@WebServlet("/hello")
public class HelloServlet extends HttpServlet {

    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        // Set the content type of the response to be HTML
        response.setContentType("text/html");

        // Get a PrintWriter to send the HTML response
        PrintWriter out = response.getWriter();

        // Write the HTML
        out.println("<html>");
        out.println("<body>");
        out.println("<h1>Hello, World! This is a Servlet.</h1>");
        out.println("</body>");
        out.println("</html>");
    }
}
```
To run this, you would need to:
1.  Create a "Dynamic Web Project" in an IDE like Eclipse.
2.  Add a server runtime like Apache Tomcat.
3.  Write the servlet class.
4.  Run the project on the server.
5.  Access `http://localhost:8080/YourProjectName/hello` in a web browser.

This topic serves as a gateway to more advanced enterprise Java frameworks like **Spring** and **Jakarta EE (formerly Java EE)**, which simplify web development significantly.
Of course. After covering the basics of web applications with Servlets, the natural progression is to introduce more advanced frameworks that simplify development, manage dependencies, and provide robust solutions for building modern applications. This leads into the Spring Framework, build tools, and modern architectural concepts.

---
---

# 34. Introduction to the Spring Framework

While Servlets and JDBC are powerful, building a large application with them directly can lead to a lot of repetitive "boilerplate" code. Managing object creation, dependencies, and application configuration can become very complex.

The **Spring Framework** is the most popular application development framework for enterprise Java. It aims to simplify Java EE development and promote good programming practices.

### Core Concepts of Spring

1.  **Inversion of Control (IoC) and Dependency Injection (DI)**
    *   **The Problem**: In traditional programming, objects are responsible for creating or obtaining their own dependencies (the other objects they need to work with). For example, an `OrderService` might create its own `CustomerRepository`. This creates tight coupling, making the code hard to test and maintain.
        `private CustomerRepository repo = new CustomerRepositoryImpl(); // Tight coupling`
    *   **The Solution (IoC)**: With Spring, you delegate the responsibility of creating and managing objects to the framework. This is "Inversion of Control"—the control is inverted from your code to the framework.
    *   **How (DI)**: Spring "injects" the dependencies an object needs from the outside (e.g., through a constructor or a setter method). The framework wires everything together based on configuration.

    ```java
    // The OrderService doesn't create the repository; it receives it.
    public class OrderService {
        private final CustomerRepository repo;

        // Dependency is injected via the constructor
        public OrderService(CustomerRepository repo) {
            this.repo = repo;
        }
    }
    ```

2.  **The Spring Container (ApplicationContext)**
    The core of the Spring Framework is the container. It reads configuration metadata (from XML, annotations, or Java code) and is responsible for instantiating, configuring, and assembling the objects in your application (known as **Spring Beans**).

3.  **Aspect-Oriented Programming (AOP)**
    AOP allows you to separate **cross-cutting concerns** (like logging, security, and transaction management) from your core business logic. For example, instead of adding logging code to every method, you can define a logging "aspect" and declaratively apply it to your methods.

### Spring Boot: The Easy Way to Get Started

Setting up a traditional Spring project can involve a lot of configuration. **Spring Boot** is an opinionated extension of the Spring platform that makes it incredibly easy to create stand-alone, production-grade Spring-based applications that you can "just run".

**Key Features of Spring Boot:**
*   **Auto-configuration**: It automatically configures your application based on the JAR dependencies you have on the classpath. If it sees a database driver and Spring Data JDBC, it will automatically configure a data source for you.
*   **Starter Dependencies**: Provides "starter" dependencies (e.g., `spring-boot-starter-web`) to simplify your build configuration. Including this one starter gives you everything you need for building a web application, including an embedded Tomcat server.
*   **No XML Configuration**: Promotes a pure Java and annotation-based configuration.

**Example: A Simple REST Controller with Spring Boot**
```java
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController // Marks this class as a REST controller
public class DemoApplication {

    public static void main(String[] args) {
        SpringApplication.run(DemoApplication.class, args);
    }

    @GetMapping("/hello") // Maps HTTP GET requests to /hello to this method
    public String sayHello() {
        return "Hello from Spring Boot!";
    }
}
```
With just this one file (and the correct dependency in your build file), you have a fully functional web application running on an embedded server.

---
---

# 35. Build Automation with Maven and Gradle

As your projects grow, they will depend on many external libraries (JAR files), such as Spring, JUnit, or a JDBC driver. Manually downloading and managing these JARs and their transitive dependencies (the libraries your libraries depend on) is a nightmare.

**Build Automation Tools** solve this problem. They manage your project's dependencies, compile your code, run your tests, package your application (e.g., into a JAR or WAR file), and more.

The two most popular build tools in the Java ecosystem are **Maven** and **Gradle**.

### Maven

Maven uses a declarative approach. You describe *what* your project needs in an XML file called `pom.xml` (Project Object Model).
*   **Dependency Management**: You declare the libraries you need, and Maven automatically downloads them from a central repository (Maven Central).
*   **Standard Directory Layout**: Maven enforces a standard project structure (e.g., `src/main/java`, `src/test/java`), which makes it easy to understand any Maven project.
*   **Build Lifecycle**: Maven has a predefined lifecycle with phases like `validate`, `compile`, `test`, `package`, `install`, and `deploy`.

**Example `pom.xml` snippet:**
```xml
<dependencies>
    <!-- Dependency for Spring Boot Web Starter -->
    <dependency>
        <groupId>org.springframework.boot</groupId>
        <artifactId>spring-boot-starter-web</artifactId>
        <version>3.2.0</version>
    </dependency>
    <!-- Dependency for JUnit 5 -->
    <dependency>
        <groupId>org.junit.jupiter</groupId>
        <artifactId>junit-jupiter-api</artifactId>
        <version>5.10.1</version>
        <scope>test</scope>
    </dependency>
</dependencies>
```

### Gradle

Gradle is a more modern and flexible build tool. It uses a Groovy or Kotlin-based DSL (Domain Specific Language) for its build scripts (`build.gradle`), making it more powerful and concise than Maven's XML.
*   **Flexibility and Performance**: Gradle's build scripts are code, allowing for more customization. It also features advanced caching and incremental builds, often making it faster than Maven.
*   Many new projects, especially in the Android world and those using Spring Boot, prefer Gradle.

**Example `build.gradle` (Groovy DSL) snippet:**
```groovy
dependencies {
    // Dependency for Spring Boot Web Starter
    implementation 'org.springframework.boot:spring-boot-starter-web:3.2.0'

    // Dependency for JUnit 5
    testImplementation 'org.junit.jupiter:junit-jupiter-api:5.10.1'
}
```

---
---

# 36. Introduction to Microservices Architecture

Traditionally, large applications were built as a single, monolithic unit. A **monolith** is a single, unified application where all components (UI, business logic, data access) are packaged and deployed together. While simple to start, monoliths can become difficult to scale, update, and maintain as they grow.

A **Microservices Architecture** is an alternative approach where an application is structured as a collection of small, independent, and loosely coupled services.
*   Each service is built around a specific business capability (e.g., "Order Service," "Payment Service," "Notification Service").
*   Each service can be developed, deployed, and scaled independently.
*   Services can be written in different programming languages and use different data storage technologies.
*   Services communicate with each other over a network, typically using lightweight mechanisms like REST APIs.

*(Image shows a diagram of a Monolithic app vs. a Microservices app. The monolith is one large box. The microservices diagram shows several small, independent boxes (UI, Order, Payment, Inventory) communicating with each other via APIs.)*

### Pros and Cons of Microservices

| Pros                                         | Cons                                                     |
| -------------------------------------------- | -------------------------------------------------------- |
| **Improved Scalability**: Scale only the services that need it. | **Operational Complexity**: More services to deploy and monitor. |
| **Technology Diversity**: Use the best tool for each job. | **Distributed System Challenges**: Network latency, fault tolerance. |
| **Resilience**: Failure in one service doesn't take down the entire app. | **Data Consistency**: Maintaining consistency across different databases can be hard. |
| **Faster Deployment Cycles**: Smaller codebases are easier to build and deploy. | **Testing Complexity**: Requires integration testing across multiple services. |
| **Organizational Alignment**: Small, autonomous teams can own individual services. | **Requires Mature DevOps Culture**: Automation is essential. |

Frameworks like **Spring Boot** and **Spring Cloud** provide a comprehensive set of tools for building and managing microservices in Java, helping to solve challenges like service discovery, load balancing, and centralized configuration.
Of course. After covering application architecture and frameworks, the final steps in a modern software development lifecycle involve packaging the application, automating its delivery, and ensuring it can be consumed by other services. This leads us to containers, CI/CD, and API design principles.

---
---

# 37. Containerization with Docker

Once you have built your application (e.g., a Spring Boot JAR file), how do you run it consistently across different environments (a developer's laptop, a testing server, the production cloud)? Differences in operating systems, installed libraries, or configurations can lead to the classic "it works on my machine" problem.

**Containers** solve this by packaging an application and all its dependencies (libraries, runtime, system tools) into a single, isolated, and portable unit.

**Docker** is the most popular platform for creating and running containers.

### Key Docker Concepts

1.  **Image**: A read-only template containing a set of instructions for creating a container. An image includes everything needed to run your application: the code, a runtime (like the JRE), libraries, and environment variables. You create an image by writing a `Dockerfile`.
2.  **Container**: A runnable instance of an image. It is a lightweight, isolated environment that runs on the host operating system's kernel. You can start, stop, and delete containers.
3.  **Dockerfile**: A simple text file that contains the step-by-step instructions for building a Docker image.

**Example `Dockerfile` for a Spring Boot Application:**
```dockerfile
# Start with a base image that has Java installed
FROM openjdk:17-slim

# Set the working directory inside the container
WORKDIR /app

# Copy the compiled JAR file from your build context into the container
COPY target/my-swiftfood-app-0.0.1-SNAPSHOT.jar app.jar

# Expose the port that the application runs on
EXPOSE 8080

# The command to run when the container starts
ENTRYPOINT ["java", "-jar", "app.jar"]
```

### Benefits of Docker
*   **Consistency**: Guarantees that the application runs the same way everywhere.
*   **Isolation**: Containers run in isolation, so they don't interfere with each other or the host system.
*   **Portability**: A container image built on one machine can run on any other machine with Docker installed.
*   **Efficiency**: Containers are much more lightweight than traditional virtual machines because they share the host OS kernel.
*   **Scalability**: Easy to quickly spin up new container instances to handle increased load, which is fundamental to microservices and cloud-native applications.

---
---

# 38. CI/CD (Continuous Integration / Continuous Deployment)

**CI/CD** is a set of practices and a culture that automates the software delivery process. The goal is to enable teams to deliver code changes more frequently and reliably.

### Continuous Integration (CI)

**CI** is the practice of developers frequently merging their code changes into a central repository (like Git). After each merge, an automated build and test process is triggered.
*   **Goal**: To find and address bugs and integration issues early in the development cycle.
*   **Process**:
    1.  Developer pushes code to a repository (e.g., GitHub, GitLab).
    2.  A CI server (e.g., **Jenkins**, **GitHub Actions**, **GitLab CI**) detects the push.
    3.  The server automatically checks out the code.
    4.  It compiles the code (`mvn compile` or `gradle build`).
    5.  It runs all the unit and integration tests (`mvn test` or `gradle test`).
    6.  It provides feedback to the developer. If the build or tests fail, the team is notified immediately to fix the issue.

### Continuous Deployment (or Delivery) (CD)

**Continuous Delivery** extends CI by automatically deploying all code changes that pass the CI stage to a testing or staging environment. This ensures that you always have a deployable version of your application.

**Continuous Deployment** goes one step further by automatically deploying every change that passes all tests directly to the production environment, making it available to customers.

**The CI/CD Pipeline:**
A pipeline is the series of automated steps that your code goes through from commit to deployment.
*(Image shows a pipeline: Code Commit -> Build -> Test -> Deploy to Staging -> Deploy to Production)*

### Benefits of CI/CD
*   **Faster Release Cycles**: Automation speeds up the build and deployment process.
*   **Improved Code Quality**: Early detection of bugs reduces the number of issues that reach production.
*   **Lower Risk**: Smaller, frequent changes are easier to debug and roll back than large, infrequent releases.
*   **Increased Developer Productivity**: Developers can focus on writing code instead of manual deployment tasks.

---
---

# 39. REST API Design Principles

When building microservices or any backend application that needs to communicate with a front-end or other services, you need a well-defined **API** (Application Programming Interface).

**REST (REpresentational State Transfer)** is an architectural style for designing networked applications. It's not a standard but a set of principles for creating scalable, stateless, and cacheable web services.

### Key Principles of REST

1.  **Resources**: Everything is a **resource**. A resource is an object with a type, associated data, and relationships to other resources. For example, a "Customer" or an "Order" is a resource. Each resource is identified by a unique URI (Uniform Resource Identifier).
    *   Good: `/customers/C101`
    *   Bad: `/getCustomerById?id=C101` (This is an action, not a resource)

2.  **Standard HTTP Methods (Verbs)**: Use standard HTTP methods to perform operations on resources.
    *   **`GET`**: Retrieve a resource. (e.g., `GET /customers/C101` retrieves customer C101).
    *   **`POST`**: Create a new resource. (e.g., `POST /customers` creates a new customer).
    *   **`PUT`**: Update an existing resource completely. (e.g., `PUT /customers/C101` replaces the entire customer C101 object).
    *   **`PATCH`**: Partially update an existing resource.
    *   **`DELETE`**: Delete a resource. (e.g., `DELETE /customers/C101`).

3.  **Statelessness**: Each request from a client to the server must contain all the information needed to understand and process the request. The server does not store any client context (or session state) between requests. This improves scalability and reliability.

4.  **Representations**: Clients interact with representations of resources. A resource's state can be represented in different formats, most commonly **JSON** (JavaScript Object Notation) or XML. The client and server negotiate the format using HTTP headers (`Content-Type` and `Accept`).

**Example JSON representation of a Customer:**
```json
{
  "customerId": "C101",
  "customerName": "Stephen Abram",
  "contactNumber": 7895341287,
  "address": "D089, St. Louis Street, Springfield, 62729"
}
```

By following these principles, you can create APIs that are intuitive, consistent, and easy for other developers and services to consume.

Of course. After covering the development and deployment lifecycle, the final stages of a comprehensive course often focus on ensuring the application is observable, secure, and designed with resilience in mind. These are critical aspects of running production-grade software.

---
---

# 40. Observability: Logging, Metrics, and Tracing

Once your application is deployed, how do you know if it's healthy? How do you diagnose problems when they occur? **Observability** is the ability to understand the internal state of your system by examining its external outputs. It is often described as having three pillars.

### 1. Logging

**Logs** are timestamped, text-based records of events that have occurred within an application. They are essential for debugging and auditing. You've already used `System.out.println`, but for production systems, you should use a dedicated logging framework.
*   **Why?** Logging frameworks allow you to:
    *   Configure different **log levels** (`DEBUG`, `INFO`, `WARN`, `ERROR`) to control the amount of output.
    *   Direct logs to different outputs (console, files, log management systems).
    *   Format log messages in a structured way (e.g., as JSON).
*   **Popular Frameworks**: **SLF4J** (Simple Logging Facade for Java) is a popular abstraction, often used with an implementation like **Logback** or **Log4j2**. Spring Boot includes Logback by default.

**Example with SLF4J:**
```java
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class OrderService {
    private static final Logger logger = LoggerFactory.getLogger(OrderService.class);

    public void placeOrder(String orderId) {
        logger.info("Placing new order with ID: {}", orderId);
        try {
            // ... business logic ...
            logger.debug("Order {} processed successfully.", orderId);
        } catch (Exception e) {
            logger.error("Failed to place order {}", orderId, e);
        }
    }
}
```

### 2. Metrics

**Metrics** are numerical measurements of your application's health and performance over time. They are aggregated data points that can be monitored to spot trends and trigger alerts.
*   **Examples**:
    *   **System Metrics**: CPU usage, memory consumption, disk space.
    *   **Application Metrics**: Request rate (requests per second), error rate, request latency (response time).
    *   **Business Metrics**: Number of user sign-ups, orders processed per hour.
*   **Tools**: Frameworks like **Micrometer** (integrated with Spring Boot) allow you to instrument your code to collect metrics. These metrics are then scraped and stored in a time-series database like **Prometheus** and visualized with dashboards in tools like **Grafana**.

### 3. Distributed Tracing

In a microservices architecture, a single user request might travel through multiple services. If a request is slow or fails, how do you find out which service is the bottleneck or the source of the error?
**Distributed Tracing** solves this problem by tracking a single request as it flows through all the different services.
*   **How it works**:
    1.  When a request first enters the system, a unique **Trace ID** is generated.
    2.  This Trace ID is passed along in the headers of every subsequent network call between services.
    3.  Each service records timing information for its part of the work (called a **Span**).
    4.  All the spans for a given trace are collected and can be visualized as a timeline, showing exactly how long the request spent in each service.
*   **Tools**: Open standards like **OpenTelemetry** are used to instrument applications for tracing. The trace data is sent to a backend like **Jaeger** or **Zipkin** for analysis.

---
---

# 41. Application Security Fundamentals

Building secure software is not an afterthought; it must be a core part of the development process. While application security is a vast field, here are some fundamental principles and common vulnerabilities to be aware of.

### Principle of Least Privilege
An entity (a user, a service, a component) should only have the minimum set of permissions required to perform its function. For example, a user with a "read-only" role should not have API access to delete data.

### Authentication vs. Authorization
*   **Authentication (AuthN)**: The process of verifying who a user is. This is typically done with a username/password, an API key, or a token (like a JWT - JSON Web Token). It answers the question: "Are you who you say you are?"
*   **Authorization (AuthZ)**: The process of determining if an authenticated user has permission to perform a specific action or access a specific resource. It answers the question: "Are you allowed to do that?" Frameworks like **Spring Security** provide robust solutions for both.

### Common Web Vulnerabilities (OWASP Top 10)

The **OWASP Top 10** is a standard awareness document for developers on the most critical web application security risks. Some key ones include:
1.  **Injection**: Occurs when untrusted data is sent to an interpreter as part of a command or query. **SQL Injection** is the most well-known example.
    *   **Prevention**: Use `PreparedStatement`s with JDBC, or use an ORM (Object-Relational Mapping) like Spring Data JPA. Never concatenate user input directly into SQL queries.
2.  **Broken Authentication**: Flaws in authentication logic can allow attackers to compromise user accounts or sessions.
    *   **Prevention**: Use a proven framework like Spring Security. Enforce strong password policies, use multi-factor authentication (MFA), and secure session management.
3.  **Insecure Design**: Flaws related to missing or ineffective security controls in the application's design. This is a broad category that emphasizes the need to "think securely" from the beginning.
4.  **Security Misconfiguration**: Failing to implement all security configurations securely. This can include running with default credentials, having verbose error messages that leak information, or not applying the latest security patches.

### Securing Dependencies
Your application is only as secure as its weakest dependency. Regularly scan your project's libraries (using tools like **Snyk**, **Dependabot**, or Maven/Gradle plugins) for known vulnerabilities and update them promptly.

---
---

# 42. Design Patterns and Best Practices

As you gain experience, you'll encounter common problems in software design. **Design Patterns** are general, reusable solutions to these commonly occurring problems within a given context. They are not code, but rather templates or descriptions of how to solve a problem that can be used in many different situations.

The classic book *"Design Patterns: Elements of Reusable Object-Oriented Software"* (by the "Gang of Four") categorized patterns into three types.

### Creational Patterns
These patterns deal with object creation mechanisms, trying to create objects in a manner suitable to the situation.
*   **Singleton**: Ensures a class has only one instance and provides a global point of access to it. (Example: A logging or database connection object).
*   **Factory Method**: Defines an interface for creating an object but lets subclasses alter the type of objects that will be created. (Used heavily in frameworks like Spring).
*   **Builder**: Separates the construction of a complex object from its representation, so the same construction process can create different representations. Useful for objects with many optional constructor parameters.

### Structural Patterns
These patterns explain how to assemble objects and classes into larger structures while keeping these structures flexible and efficient.
*   **Adapter**: Allows objects with incompatible interfaces to collaborate. (Example: Wrapping an old library to work with a new system).
*   **Decorator**: Lets you attach new behaviors to objects by placing these objects inside special wrapper objects that contain the behaviors. (Example: `java.io` classes like `BufferedReader` wrap other readers).
*   **Facade**: Provides a simplified interface to a library, a framework, or any other complex set of classes.

### Behavioral Patterns
These patterns are concerned with algorithms and the assignment of responsibilities between objects.
*   **Observer**: Defines a subscription mechanism to notify multiple objects about any events that happen to the object they're observing.
*   **Strategy**: Lets you define a family of algorithms, put each of them into a separate class, and make their objects interchangeable. (Example: Different payment strategies like `PayByCreditCard`, `PayByPayPal`).
*   **Template Method**: Defines the skeleton of an algorithm in a superclass but lets subclasses override specific steps of the algorithm without changing its structure.

Understanding these patterns will help you write more maintainable, flexible, and reusable code, and allow you to communicate complex design ideas more effectively with other developers.

Of course. After covering a wide array of topics from core language features to deployment and design patterns, the final section of a truly comprehensive course would look towards the future of Java and the broader software engineering ecosystem. This provides context and points students toward areas for continued learning.

---
---

# 43. The Future of Java and the JDK Release Cadence

For many years, new major versions of Java were released every few years, leading to slow adoption of new features. In 2017, this changed. Java now follows a much faster, time-based release model.

### The Six-Month Release Cadence
*   A new feature release of Java (JDK) now happens every **six months**, in March and September. (e.g., JDK 19, JDK 20, JDK 21...).
*   This allows new language features and API improvements to be delivered to developers much more quickly.

### Long-Term Support (LTS) Releases
*   While new versions come out every six months, certain versions are designated as **LTS (Long-Term Support)** releases.
*   LTS versions receive security updates and bug fixes for several years, making them the preferred choice for most production enterprise applications.
*   Currently, LTS releases occur every **two years**.
*   **Key LTS Versions**: Java 8, Java 11, Java 17, and Java 21. Most companies plan their major upgrades around these versions.

### Exciting New and Upcoming Features

The faster release cadence has brought many powerful features to the language more quickly. These are often introduced as **preview features** first, allowing developers to provide feedback before they are finalized.

*   **Records (Finalized in Java 16)**: A concise syntax for creating immutable data carrier classes. It automatically generates constructors, getters, `equals()`, `hashCode()`, and `toString()`.
    ```java
    // A simple, immutable data class
    public record Customer(String customerId, String name) {}
    ```

*   **Pattern Matching for `instanceof` (Finalized in Java 16)**: Reduces boilerplate by allowing you to declare a variable directly within an `instanceof` check.
    ```java
    // Old way
    if (obj instanceof String) {
        String s = (String) obj;
        // use s
    }

    // New way
    if (obj instanceof String s) {
        // use s directly
    }
    ```

*   **Virtual Threads (Project Loom, Finalized in Java 21)**: A game-changing feature for concurrency. Virtual threads are extremely lightweight threads managed by the JVM, not the OS. This allows for a massive number of concurrent operations without the high memory and context-switching overhead of traditional platform threads, making it much easier to write highly scalable, concurrent applications.

*   **Structured Concurrency (Preview)**: A new API that simplifies concurrent programming by treating tasks running in different threads as a single unit of work. It makes error handling and cancellation in multi-threaded code much more robust and easier to reason about.

Staying aware of the new release cadence and the features being introduced in preview will keep your Java skills current and effective.

---
---

# 44. Beyond Core Java: Avenues for Further Learning

Mastering the Java language is just the beginning. The software engineering ecosystem is vast. Here are some key areas to explore to continue your growth as a developer.

### 1. Specialization in Frameworks
*   **Spring Framework**: Dive deeper into the Spring ecosystem. Learn about **Spring Data** for simplified database access, **Spring Security** for authentication and authorization, and **Spring Cloud** for building resilient microservices.
*   **Jakarta EE**: Explore the official standard for enterprise Java, which includes technologies like JPA (Java Persistence API), JAX-RS (for REST APIs), and CDI (Contexts and Dependency Injection).
*   **Quarkus / Micronaut**: Investigate next-generation, cloud-native frameworks designed for fast startup times and low memory consumption, making them ideal for serverless and containerized environments.

### 2. Cloud Computing and DevOps
*   **Cloud Platforms**: Gain hands-on experience with a major cloud provider like **Amazon Web Services (AWS)**, **Microsoft Azure**, or **Google Cloud Platform (GCP)**. Learn how to deploy and manage your Java applications on their infrastructure.
*   **Infrastructure as Code (IaC)**: Learn tools like **Terraform** or **AWS CloudFormation** to define and manage your cloud infrastructure using code, making it reproducible and version-controlled.
*   **Advanced Container Orchestration**: While Docker is used to run single containers, **Kubernetes** is the industry standard for deploying, managing, and scaling containerized applications across a cluster of machines.

### 3. Data Engineering and Big Data
*   **Big Data Technologies**: Explore the ecosystem for processing massive datasets. This includes technologies like **Apache Spark**, **Apache Kafka** (for real-time data streaming), and **Hadoop**. Many of these tools have Java APIs.
*   **NoSQL Databases**: Learn about different types of databases beyond relational ones, such as **MongoDB** (document), **Redis** (key-value), and **Cassandra** (wide-column), and understand their use cases.

### 4. Software Craftsmanship and Career Growth
*   **Clean Code and Refactoring**: Continuously practice writing clean, readable, and maintainable code. Study books like *"Clean Code"* by Robert C. Martin.
*   **Agile Methodologies**: Understand common software development methodologies like **Scrum** and **Kanban** that are used by most modern software teams.
*   **Contribute to Open Source**: Find a project you are interested in and start contributing. It's a great way to learn from experienced developers, build your portfolio, and give back to the community.
*   **Soft Skills**: Remember that communication, teamwork, and problem-solving are just as important as technical skills for a successful career.

The journey of a software developer is one of continuous learning. By staying curious and exploring these areas, you will be well-equipped to build amazing things and have a long and successful career.
 Of course. After covering a roadmap for future learning, the final section of a course is typically a comprehensive review and a capstone project that ties all the concepts together. This solidifies the student's understanding and provides a tangible piece of work for their portfolio.

---
---

# 45. Course Review and Key Takeaways

We have covered a significant journey through the Java programming language and the modern software development ecosystem. Let's briefly review the key pillars of what you've learned.

### Pillar 1: The Java Language and OOP
*   **Core Concepts**: You started with the basics of syntax, data types, and control flow.
*   **Object-Oriented Programming**: You mastered the four pillars of OOP—**Encapsulation**, **Inheritance**, **Polymorphism**, and **Abstraction**—using classes, objects, interfaces, and abstract classes.
*   **Essential APIs**: You learned to work with fundamental Java APIs like the **Collections Framework**, **Exception Handling**, and **File I/O**.

### Pillar 2: Modern Java Features
*   **Functional Programming**: You learned how **Lambda Expressions** and the **Stream API** allow for more concise and expressive data processing.
*   **Concurrency**: You explored how to write multi-threaded applications and understood the importance of the **Executor Framework** and the revolutionary potential of **Virtual Threads**.

### Pillar 3: Building Real-World Applications
*   **Database Connectivity**: You used **JDBC** to connect your Java applications to a relational database.
*   **Web Development**: You were introduced to web applications with **Servlets** and saw how frameworks like **Spring Boot** dramatically simplify building REST APIs and microservices.
*   **Dependency Management**: You learned why build tools like **Maven** or **Gradle** are essential for managing project dependencies and the build lifecycle.

### Pillar 4: The Software Development Lifecycle
*   **Testing**: You wrote **Unit Tests** with JUnit to ensure your code is correct and maintainable.
*   **Deployment**: You learned how to package applications with **Docker** for consistent, portable deployments.
*   **Automation**: You understood the principles of **CI/CD** for automating the build, test, and deployment process.
*   **Operations**: You were introduced to **Observability** (logging, metrics, tracing) and fundamental **Application Security** principles.

### The Big Picture
The overarching goal was to show you not just *how to write Java code*, but *how to be a modern software engineer using Java*. You learned to think about design patterns, architecture, testing, security, and deployment—all critical skills for a successful career.

---
---

# 46. Capstone Project: SwiftFood - A Simple Food Delivery API

It's time to bring everything you've learned together into a single, comprehensive project. This capstone project will challenge you to design, build, test, and package a REST API for a simplified version of the SwiftFood application.

### Project Goal
Create a RESTful API using **Spring Boot** that allows users to view restaurants, manage food items, and place orders.

### Core Features (Minimum Viable Product)

1.  **Customer Management:**
    *   `POST /customers`: Create a new customer.
    *   `GET /customers/{id}`: Get details for a specific customer.

2.  **Restaurant & Food Management:**
    *   `GET /restaurants`: Get a list of all available restaurants.
    *   `GET /restaurants/{id}/menu`: Get the menu (list of food items) for a specific restaurant.

3.  **Order Placement:**
    *   `POST /orders`: Place a new order. The request body should include the customer ID and a list of food item IDs and quantities.
    *   `GET /orders/{id}`: Get the status and details of a specific order.

### Technical Requirements

1.  **Framework**: Use **Spring Boot** to build the application.
2.  **Build Tool**: Use **Maven** or **Gradle** for dependency management.
3.  **Data Storage**:
    *   **Option A (Simpler)**: Start with an in-memory data store (e.g., a `HashMap`) to store your data. This removes the need for a database.
    *   **Option B (Advanced)**: Connect to a real database (like H2 for in-memory testing or PostgreSQL/MySQL) using **Spring Data JPA**.
4.  **API Design**: Follow **RESTful** principles for your API endpoints. Use appropriate HTTP methods (`GET`, `POST`) and status codes (e.g., `200 OK`, `201 Created`, `404 Not Found`).
5.  **Data Models**: Create appropriate POJO/Record classes for `Customer`, `Restaurant`, `FoodItem`, and `Order`.
6.  **Layered Architecture**: Structure your code into logical layers:
    *   **Controller Layer**: Handles incoming HTTP requests (e.g., `OrderController`).
    *   **Service Layer**: Contains the core business logic (e.g., `OrderService`).
    *   **Repository Layer**: Handles data access (e.g., `OrderRepository`).
7.  **Testing**: Write **JUnit 5** unit tests for your service layer logic. Aim for good test coverage.
8.  **Containerization**: Create a `Dockerfile` to package your final application into a Docker image.

### Project Steps

1.  **Setup**: Use the Spring Initializr (start.spring.io) to generate a new Spring Boot project with the necessary dependencies (`Spring Web`, `Spring Data JPA` (optional), `H2 Database` (optional), `Lombok` (optional)).
2.  **Model**: Define your `Customer`, `FoodItem`, `Order`, etc., classes.
3.  **Repository**: Implement the data access layer. Start with simple `HashMap`s or implement Spring Data interfaces.
4.  **Service**: Write the business logic. For example, the `OrderService` will have a method like `placeOrder()` that calculates the total price and saves the order.
5.  **Controller**: Create the REST controllers to expose your services as HTTP endpoints.
6.  **Test**: Write unit tests for your services. For example, test that the `placeOrder()` method correctly calculates the total price.
7.  **Document**: Briefly document your API endpoints (e.g., in a `README.md` file).
8.  **Dockerize**: Write your `Dockerfile` and build a Docker image of your application.

### Conclusion

Completing this project will solidify your understanding of how all the pieces you've learned—from Core Java to Spring Boot to Docker—fit together to create a functional, modern application. It will serve as an excellent piece for your portfolio and a testament to the skills you have acquired throughout this course.

**Good luck, and happy coding!**