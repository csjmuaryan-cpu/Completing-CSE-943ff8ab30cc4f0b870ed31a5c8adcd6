package Java_Inheritance;

class Animal {
    void makeSound() {
        System.out.println("Animal makes a sound");
    }
}

class Cat extends Animal {
    @Override
    void makeSound() {
        System.out.println("Cat barks");
    }
}

class Vehicle {
    void drive() {
        System.out.println("Driving a vehicle");
    }
}

class Car extends Vehicle {
    @Override
    void drive() {
        System.out.println("Repairing a car");
    }
}

class Shape {
    double getArea() {
        return 0.0;
    }
}

class Rectangle extends Shape {
    double width, height;

    Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    @Override
    double getArea() {
        return width * height;
    }
}

class Employee {
    void work() {
        System.out.println("Employee working");
    }

    double getSalary() {
        return 0.0;
    }
}

class HRManager extends Employee {
    @Override
    void work() {
        System.out.println("HR Manager working");
    }

    void addEmployee() {
        System.out.println("Employee added");
    }
}

class BankAccount {
    protected double balance;

    BankAccount(double balance) {
        this.balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
    }

    void withdraw(double amount) {
        balance -= amount;
        System.out.println("Withdrawn: " + amount);
    }
}

class SavingsAccount extends BankAccount {
    SavingsAccount(double balance) {
        super(balance);
    }

    @Override
    void withdraw(double amount) {
        if (balance - amount < 100) {
            System.out.println("Withdrawal denied. Balance cannot fall below 100.");
        } else {
            super.withdraw(amount);
        }
    }
}

class Animal2 {
    void move() {
        System.out.println("Animal moves");
    }
}

class Cheetah extends Animal2 {
    @Override
    void move() {
        System.out.println("Cheetah runs");
    }
}

class Person {
    private String firstName;
    private String lastName;

    Person(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }

    String getFirstName() {
        return firstName;
    }

    String getLastName() {
        return lastName;
    }
}

class Employee2 extends Person {
    private String jobTitle;
    private int employeeId;

    Employee2(String firstName, String lastName, String jobTitle, int employeeId) {
        super(firstName, lastName);
        this.jobTitle = jobTitle;
        this.employeeId = employeeId;
    }

    @Override
    String getLastName() {
        return super.getLastName() + " (" + jobTitle + ")";
    }

    int getEmployeeId() {
        return employeeId;
    }
}

class Shape2 {
    double getPerimeter() {
        return 0.0;
    }

    double getArea() {
        return 0.0;
    }
}

class Circle extends Shape2 {
    double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    @Override
    double getPerimeter() {
        return 2 * Math.PI * radius;
    }

    @Override
    double getArea() {
        return Math.PI * radius * radius;
    }
}

abstract class Vehicle2 {
    String make, model, fuelType;
    int year;

    Vehicle2(String make, String model, int year, String fuelType) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.fuelType = fuelType;
    }

    abstract double fuelEfficiency(); // km/l

    abstract double maxSpeed(); // km/h

    double distanceTraveled(double fuel) {
        return fuel * fuelEfficiency();
    }
}

class Truck extends Vehicle2 {
    Truck(String make, String model, int year, String fuelType) {
        super(make, model, year, fuelType);
    }

    @Override
    double fuelEfficiency() {
        return 5.0;
    }

    @Override
    double maxSpeed() {
        return 120.0;
    }
}

class Car2 extends Vehicle2 {
    Car2(String make, String model, int year, String fuelType) {
        super(make, model, year, fuelType);
    }

    @Override
    double fuelEfficiency() {
        return 15.0;
    }

    @Override
    double maxSpeed() {
        return 180.0;
    }
}

class Motorcycle extends Vehicle2 {
    Motorcycle(String make, String model, int year, String fuelType) {
        super(make, model, year, fuelType);
    }

    @Override
    double fuelEfficiency() {
        return 30.0;
    }

    @Override
    double maxSpeed() {
        return 160.0;
    }
}

class Employee3 {
    String name, address, jobTitle;
    double salary;

    Employee3(String name, String address, double salary, String jobTitle) {
        this.name = name;
        this.address = address;
        this.salary = salary;
        this.jobTitle = jobTitle;
    }

    double calculateBonus() {
        return salary * 0.10;
    }

    String performanceReport() {
        return name + " performance: Satisfactory";
    }
}

class Manager extends Employee3 {
    Manager(String name, String address, double salary) {
        super(name, address, salary, "Manager");
    }

    void manageProject() {
        System.out.println(name + " is managing a project.");
    }
}

class Developer extends Employee3 {
    Developer(String name, String address, double salary) {
        super(name, address, salary, "Developer");
    }

    void manageProject() {
        System.out.println(name + " is developing a project.");
    }
}

class Programmer extends Employee3 {
    Programmer(String name, String address, double salary) {
        super(name, address, salary, "Programmer");
    }

    void manageProject() {
        System.out.println(name + " is programming a project.");
    }
}

// Example main method to test some classes
public class sound_prg {
    public static void main(String[] args) {
        Cat cat = new Cat();
        cat.makeSound();

        Car car = new Car();
        car.drive();

        Rectangle rect = new Rectangle(5, 10);
        System.out.println("Rectangle area: " + rect.getArea());

        HRManager hr = new HRManager();
        hr.work();
        hr.addEmployee();

        SavingsAccount sa = new SavingsAccount(200);
        sa.withdraw(150);
        sa.withdraw(50);

        Cheetah cheetah = new Cheetah();
        cheetah.move();

        Employee2 emp = new Employee2("John", "Doe", "Developer", 123);
        System.out.println(emp.getFirstName() + " " + emp.getLastName() + ", ID: " + emp.getEmployeeId());

        Circle circle = new Circle(7);
        System.out.println("Circle area: " + circle.getArea());
        System.out.println("Circle perimeter: " + circle.getPerimeter());

        Car2 car2 = new Car2("Toyota", "Corolla", 2020, "Petrol");
        System.out.println("Car2 distance with 10L: " + car2.distanceTraveled(10));

        Manager manager = new Manager("Alice", "123 Main St", 80000);
        System.out.println(manager.performanceReport());
        manager.manageProject();
    }
}