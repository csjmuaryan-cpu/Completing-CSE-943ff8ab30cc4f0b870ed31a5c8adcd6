Here are your class notes formatted into a clean and readable Markdown file.

---

# Spring Framework Notes

## Overview

In the last class, we discussed the Spring Framework, specifically focusing on the Dependency Injection Framework and the Dependency Injection design pattern.

## Inversion of Control (IOC)

Inversion of Control (IOC) means transferring control from the programmer to a container.

When a programmer develops an application, they traditionally have the responsibility to create objects, maintain objects, and manage dependencies. With IOC, these tasks are taken away from the **programmer** and given to the **container**.

The container now handles everything:
*   Managing the creation, configuration, and management of objects.
*   Creating and managing dependencies between objects.

The control is "inverted" because the container is managing aspects of the application lifecycle that the programmer would typically handle.

### IOC Containers

There are two types of IOC containers in Spring:
*   **Bean Factory**: The basic IOC container.
*   **Application Context**: An advanced version of Bean Factory with more enterprise-specific features.

You can use either container, but Application Context is generally preferred. The chosen container must be imported and configured for IOC to work.

### Beans

A **Bean** is a re-usable component managed by the Spring IOC container. It's like a ready-made template where you can feed your data, use it, and then the template remains ready for the next use. It can be used again and again by different users or parts of the application.

### Bean Factory / Application Context Role

A Bean Factory or Application Context creates and manages multiple beans when and where they are required.

Consider an interface `SIM` with abstract methods `calling()` and `data()`. Classes like `Jio` and `BSNL` implement the `SIM` interface, providing their own implementations.

Traditionally, to use a Jio SIM, you would create an object like this:
```java
Jio jioSim = new Jio();
jioSim.calling();
jioSim.data();
```
Similarly, for a BSNL SIM:
```java
BSNL bsnlSim = new BSNL();
```
If a new company like `Airtel` comes along and implements `SIM`, adding support for it would require changing the existing code to create an `Airtel` object. This is not ideal, as it means modifying already working code every time a new implementation is added.

IOC and the container address this through configuration, typically using an XML file (`bean.xml`).

### bean.xml

`bean.xml` is a configuration file that acts like an attendance register for the container. In this file, you register your beans.

```xml
<!-- bean.xml -->
<beans>
    <!-- 
      The container will create an instance of the class specified 
      and manage it under the id "sim".
    -->
    <bean id="sim" class="com.example.Jio"/>
    
    <!-- To switch to Airtel, you would change the class attribute -->
    <!-- <bean id="sim" class="com.example.Airtel"/> -->

    <!-- To switch to Vodafone -->
    <!-- <bean id="sim" class="com.example.Vodafone"/> -->
</beans>
```

When the container loads `bean.xml`, it knows which beans are available and how to create them. You don't need to change your core application code to switch implementations; you just update the `bean.xml` file. The container manages the creation of the correct object based on this external configuration.

---

## Aspect Oriented Programming (AOP)

Aspect Oriented Programming (AOP) is a programming paradigm that breaks program logic into distinct parts called **concerns**. AOP helps increase modularity by addressing **cross-cutting concerns**.

### Cross-Cutting Concerns

A concern that affects the whole application and cannot be easily modularized in traditional object-oriented programming.

Examples include:
*   Transaction Management
*   Authentication
*   Logging
*   Security

These concerns often spread across multiple modules or methods in an application. Applying logging, for instance, might require adding logging code to the beginning or end of many different methods.

### Why Use AOP?

AOP provides a flexible way to dynamically add additional concerns (like logging or security checks) **before, after, or around** the actual business logic of a method.

Instead of scattering the code for a cross-cutting concern throughout your application, you define the concern (the "aspect") separately and configure where it should be applied.

This divides modularity further into concerns. If a specific task (e.g., a "Transaction Concern") needs to be applied to a group of methods, you can define this in an external configuration file (often XML). If the requirements change, you only need to update the configuration rather than modifying the core method code itself.

---

## Markup Languages

A markup language works on the basis of a marking pattern, not instructions like loops or conditions. It uses tags (like `<p>`, `<h1>`, `<body>`) to define elements and their structure or meaning. The effect of a tag applies until its corresponding closing tag is encountered.

*   **SGML (Standard Generalized Markup Language)**: The base or "mother" for many markup languages.
*   **HTML (Hypertext Markup Language)**: A fixed set of pre-defined tags primarily used for structuring web content. Browsers interpret HTML and create a Document Object Model (DOM).
*   **XML (Extensible Markup Language)**: Allows you to design your own custom tags (e.g., `<student>`, `<address>`). It was primarily developed for data transportation and migration. You define the structure of your document using a schema. XML's extensibility makes it perfect for configuration files, like Spring's `bean.xml`.

---

## AOP Terminology

*   **Aspect**: A module that encapsulates a cross-cutting concern (e.g., a logging module).
*   **Join Point**: A specific point during the execution of a program. In Spring AOP, a join point is **always a method execution**.
*   **Advice**: The action taken by an aspect at a particular join point. It's the actual code you want to inject (e.g., the logging code).

A **Join Point** is *where* aspects can be connected, and **Advice** defines *what* action is taken at that connection point.

### Types of Advice

*   **Before Advice**: Executes *before* a join point.
*   **After Advice**: Executes *after* a join point, regardless of the outcome (success or exception).
*   **Around Advice**: Wraps around a join point, allowing code to be executed before and after the join point. It can also control whether the join point itself is executed.
*   **After Throwing Advice**: Executes only if a method exits by throwing an exception.
*   **After Returning Advice**: Executes only if a method exits normally (returns without throwing an exception).