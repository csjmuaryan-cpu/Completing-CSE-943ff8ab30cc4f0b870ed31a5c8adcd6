package Abstract_classes;

abstract class Animal {
    abstract void sound();
}

// 1. Lion and Tiger classes
class Lion extends Animal {
    @Override
    void sound() {
        System.out.println("Lion roars");
    }
}

class Tiger extends Animal {
    @Override
    void sound() {
        System.out.println("Tiger growls");
    }
}

// 2. Shape, Circle, Triangle
abstract class Shape {
    abstract double calculateArea();
    abstract double calculatePerimeter();
}

class Circle extends Shape {
    double radius;
    Circle(double radius) { this.radius = radius; }
    double calculateArea() { return Math.PI * radius * radius; }
    double calculatePerimeter() { return 2 * Math.PI * radius; }
}

class Triangle extends Shape {
    double a, b, c;
    Triangle(double a, double b, double c) { this.a = a; this.b = b; this.c = c; }
    double calculateArea() {
        double s = (a + b + c) / 2;
        return Math.sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double calculatePerimeter() { return a + b + c; }
}

// 3. BankAccount, SavingsAccount, CurrentAccount
abstract class BankAccount {
    double balance;
    abstract void deposit(double amount);
    abstract void withdraw(double amount);
}

class SavingsAccount extends BankAccount {
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) {
        if (balance >= amount) balance -= amount;
    }
}

class CurrentAccount extends BankAccount {
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) {
        if (balance >= amount) balance -= amount;
    }
}

// 4. Animal with eat() and sleep()
abstract class Animal2 {
    abstract void eat();
    abstract void sleep();
}

class Lion2 extends Animal2 {
    void eat() { System.out.println("Lion eats meat"); }
    void sleep() { System.out.println("Lion sleeps in the den"); }
}

class Tiger2 extends Animal2 {
    void eat() { System.out.println("Tiger eats deer"); }
    void sleep() { System.out.println("Tiger sleeps under trees"); }
}

class Deer extends Animal2 {
    void eat() { System.out.println("Deer eats grass"); }
    void sleep() { System.out.println("Deer sleeps in the open"); }
}

// 5. Employee, Manager, Programmer
abstract class Employee {
    abstract double calculateSalary();
    abstract void displayInfo();
}

class Manager extends Employee {
    double baseSalary = 50000;
    double bonus = 10000;
    double calculateSalary() { return baseSalary + bonus; }
    void displayInfo() { System.out.println("Manager, Salary: " + calculateSalary()); }
}

class Programmer extends Employee {
    double baseSalary = 40000;
    double overtime = 5000;
    double calculateSalary() { return baseSalary + overtime; }
    void displayInfo() { System.out.println("Programmer, Salary: " + calculateSalary()); }
}

// 6. Shape3D, Sphere, Cube
abstract class Shape3D {
    abstract double calculateVolume();
    abstract double calculateSurfaceArea();
}

class Sphere extends Shape3D {
    double radius;
    Sphere(double radius) { this.radius = radius; }
    double calculateVolume() { return (4.0/3.0) * Math.PI * Math.pow(radius, 3); }
    double calculateSurfaceArea() { return 4 * Math.PI * radius * radius; }
}

class Cube extends Shape3D {
    double side;
    Cube(double side) { this.side = side; }
    double calculateVolume() { return side * side * side; }
    double calculateSurfaceArea() { return 6 * side * side; }
}

// 7. Vehicle, Car, Motorcycle
abstract class Vehicle {
    abstract void startEngine();
    abstract void stopEngine();
}

class Car extends Vehicle {
    void startEngine() { System.out.println("Car engine started"); }
    void stopEngine() { System.out.println("Car engine stopped"); }
}

class Motorcycle extends Vehicle {
    void startEngine() { System.out.println("Motorcycle engine started"); }
    void stopEngine() { System.out.println("Motorcycle engine stopped"); }
}

// 8. Person, Athlete, LazyPerson
abstract class Person {
    abstract void eat();
    abstract void exercise();
}

class Athlete extends Person {
    void eat() { System.out.println("Athlete eats healthy food"); }
    void exercise() { System.out.println("Athlete exercises daily"); }
}

class LazyPerson extends Person {
    void eat() { System.out.println("Lazy person eats junk food"); }
    void exercise() { System.out.println("Lazy person rarely exercises"); }
}

// 9. Instrument, Glockenspiel, Violin
abstract class Instrument {
    abstract void play();
    abstract void tune();
}

class Glockenspiel extends Instrument {
    void play() { System.out.println("Playing the glockenspiel"); }
    void tune() { System.out.println("Tuning the glockenspiel"); }
}

class Violin extends Instrument {
    void play() { System.out.println("Playing the violin"); }
    void tune() { System.out.println("Tuning the violin"); }
}

// 10. Shape2D, Rectangle, Circle
abstract class Shape2D {
    abstract void draw();
    abstract void resize(double factor);
}

class Rectangle extends Shape2D {
    double width, height;
    Rectangle(double w, double h) { width = w; height = h; }
    void draw() { System.out.println("Drawing rectangle"); }
    void resize(double factor) { width *= factor; height *= factor; }
}

class Circle2D extends Shape2D {
    double radius;
    Circle2D(double r) { radius = r; }
    void draw() { System.out.println("Drawing circle"); }
    void resize(double factor) { radius *= factor; }
}

// 11. Bird, Eagle, Hawk
abstract class Bird {
    abstract void fly();
    abstract void makeSound();
}

class Eagle extends Bird {
    void fly() { System.out.println("Eagle soars high"); }
    void makeSound() { System.out.println("Eagle screeches"); }
}

class Hawk extends Bird {
    void fly() { System.out.println("Hawk glides swiftly"); }
    void makeSound() { System.out.println("Hawk cries"); }
}

// 12. GeometricShape, Triangle, Square
abstract class GeometricShape {
    abstract double area();
    abstract double perimeter();
}

class TriangleShape extends GeometricShape {
    double a, b, c;
    TriangleShape(double a, double b, double c) { this.a = a; this.b = b; this.c = c; }
    double area() {
        double s = (a + b + c) / 2;
        return Math.sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double perimeter() { return a + b + c; }
}

class Square extends GeometricShape {
    double side;
    Square(double side) { this.side = side; }
    double area() { return side * side; }
    double perimeter() { return 4 * side; }
}

// Main class for demonstration

public class AbstractDemo {
    public static void main(String[] args) {
        // 1. Animal sounds
        Animal lion = new Lion();
        Animal tiger = new Tiger();
        lion.sound();
        tiger.sound();

        // 2. Shape area and perimeter
        Shape circle = new Circle(5);
        Shape triangle = new Triangle(3, 4, 5);
        System.out.println("Circle area: " + circle.calculateArea());
        System.out.println("Triangle perimeter: " + triangle.calculatePerimeter());

        // 3. BankAccount
        BankAccount savings = new SavingsAccount();
        savings.deposit(1000);
        savings.withdraw(200);
        System.out.println("Savings balance: " + savings.balance);

        // 4. Animal2 eat and sleep
        Animal2 deer = new Deer();
        deer.eat();
        deer.sleep();

        // 5. Employee
        Employee manager = new Manager();
        manager.displayInfo();

        // 6. Shape3D
        Shape3D sphere = new Sphere(3);
        System.out.println("Sphere volume: " + sphere.calculateVolume());

        // 7. Vehicle
        Vehicle car = new Car();
        car.startEngine();
        car.stopEngine();

        // 8. Person
        Person athlete = new Athlete();
        athlete.eat();
        athlete.exercise();

        // 9. Instrument
        Instrument violin = new Violin();
        violin.play();
        violin.tune();

        // 10. Shape2D
        Shape2D rect = new Rectangle(2, 3);
        rect.draw();
        rect.resize(2);

        // 11. Bird
        Bird eagle = new Eagle();
        eagle.fly();
        eagle.makeSound();

        // 12. GeometricShape
        GeometricShape square = new Square(4);
        System.out.println("Square area: " + square.area());
    }
}