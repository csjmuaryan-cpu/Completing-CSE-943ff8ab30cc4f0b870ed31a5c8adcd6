package Java_Inheritance;

import java.util.List;
import java.util.ArrayList;
// 1. Shape interface and its implementations
interface Shape {
    double getArea();
}

class Rectangle implements Shape {
    private double width, height;
    public Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }
    public double getArea() {
        return width * height;
    }
}

class Circle implements Shape {
    private double radius;
    public Circle(double radius) {
        this.radius = radius;
    }
    public double getArea() {
        return Math.PI * radius * radius;
    }
}

class Triangle implements Shape {
    private double base, height;
    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }
    public double getArea() {
        return 0.5 * base * height;
    }
}

// 2. Animal interface and Dog class
interface Animal {
    void bark();
}

class Dog implements Animal {
    public void bark() {
        System.out.println("Dog is barking");
    }
}

// 3. Flyable interface and its implementations
interface Flyable {
    void fly_obj();
}

class Spacecraft implements Flyable {
    public void fly_obj() {
        System.out.println("Spacecraft is flying in space.");
    }
}

class Airplane implements Flyable {
    public void fly_obj() {
        System.out.println("Airplane is flying in the sky.");
    }
}

class Helicopter implements Flyable {
    public void fly_obj() {
        System.out.println("Helicopter is hovering in the air.");
    }
}

// 4. Banking system

interface Account {
    void deposit(double amount);
    void withdraw(double amount);
    double calculateInterest();
    double getBalance();
}

class SavingsAccount implements Account {
    private double balance;
    private double interestRate = 0.03;
    public void deposit(double amount) {
        balance += amount;
    }
    public void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
    }
    public double calculateInterest() {
        return balance * interestRate;
    }
    public double getBalance() {
        return balance;
    }
    public void addBonus() {
        balance += 10;
    }
}

class CurrentAccount implements Account {
    private double balance;
    private double overdraftLimit = 500;
    public void deposit(double amount) {
        balance += amount;
    }
    public void withdraw(double amount) {
        if (balance + overdraftLimit >= amount) balance -= amount;
    }
    public double calculateInterest() {
        return 0;
    }
    public double getBalance() {
        return balance;
    }
    public void issueCheque() {
        System.out.println("Cheque issued.");
    }
}

class Bank {
    private List<Account> accounts = new ArrayList<>();
    public void addAccount(Account acc) {
        accounts.add(acc);
    }
    public List<Account> getAccounts() {
        return accounts;
    }
}

// 5. Resizable interface and Rectangle implementation
interface Resizable {
    void resizeWidth(int width);
    void resizeHeight(int height);
}

class ResizableRectangle implements Resizable {
    private int width, height;
    public ResizableRectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }
    public void resizeWidth(int width) {
        this.width = width;
    }
    public void resizeHeight(int height) {
        this.height = height;
    }
    public String toString() {
        return "Rectangle [width=" + width + ", height=" + height + "]";
    }
}

// 6. Drawable interface and shape implementations
interface Drawable {
    void draw();
}

class DrawableCircle implements Drawable {
    public void draw() {
        System.out.println("Drawing a Circle");
    }
}

class DrawableRectangle implements Drawable {
    public void draw() {
        System.out.println("Drawing a Rectangle");
    }
}

class DrawableTriangle implements Drawable {
    public void draw() {
        System.out.println("Drawing a Triangle");
    }
}

// 7. Sortable interface (ascending) and implementations
interface Sortable {
    void sort(int[] array);
}

class BubbleSort implements Sortable {
    public void sort(int[] array) {
        for (int i = 0; i < array.length-1; i++) {
            for (int j = 0; j < array.length-i-1; j++) {
                if (array[j] > array[j+1]) {
                    int t = array[j]; array[j] = array[j+1]; array[j+1] = t;
                }
            }
        }
    }
}

class SelectionSort implements Sortable {
    public void sort(int[] array) {
        for (int i = 0; i < array.length-1; i++) {
            int minIdx = i;
            for (int j = i+1; j < array.length; j++) {
                if (array[j] < array[minIdx]) minIdx = j;
            }
            int t = array[i]; array[i] = array[minIdx]; array[minIdx] = t;
        }
    }
}

// 8. Playable interface and sports implementations
interface Playable {
    void play();
}

class Football implements Playable {
    public void play() {
        System.out.println("Playing Football");
    }
}

class Volleyball implements Playable {
    public void play() {
        System.out.println("Playing Volleyball");
    }
}

class Basketball implements Playable {
    public void play() {
        System.out.println("Playing Basketball");
    }
}

// 9. Searchable interface and implementations
interface Searchable {
    boolean search(String keyword);
}

class Document implements Searchable {
    private String text;
    public Document(String text) {
        this.text = text;
    }
    public boolean search(String keyword) {
        return text.contains(keyword);
    }
}

class WebPage implements Searchable {
    private String html;
    public WebPage(String html) {
        this.html = html;
    }
    public boolean search(String keyword) {
        return html.contains(keyword);
    }
}

// 10. Encryptable interface and implementations
interface Encryptable {
    String encrypt(String data);
    String decrypt(String encryptedData);
}

class AES implements Encryptable {
    public String encrypt(String data) {
        return "AES:" + new StringBuilder(data).reverse().toString();
    }
    public String decrypt(String encryptedData) {
        if (encryptedData.startsWith("AES:")) {
            return new StringBuilder(encryptedData.substring(4)).reverse().toString();
        }
        return null;
    }
}

class RSA implements Encryptable {
    public String encrypt(String data) {
        return "RSA:" + data.toUpperCase();
    }
    public String decrypt(String encryptedData) {
        if (encryptedData.startsWith("RSA:")) {
            return encryptedData.substring(4).toLowerCase();
        }
        return null;
    }
}

// 11. Sortable interface (descending) and implementations
interface DescSortable {
    void sort(int[] array);
}

class QuickSort implements DescSortable {
    public void sort(int[] array) {
        quickSort(array, 0, array.length - 1);
    }
    private void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    private int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] > pivot) {
                i++;
                int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
            }
        }
        int t = arr[i+1]; arr[i+1] = arr[high]; arr[high] = t;
        return i+1;
    }
}

class MergeSort implements DescSortable {
    public void sort(int[] array) {
        mergeSort(array, 0, array.length - 1);
    }
    private void mergeSort(int[] arr, int l, int r) {
        if (l < r) {
            int m = (l + r) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
    private void merge(int[] arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        int[] L = new int[n1];
        int[] R = new int[n2];
        for (int i = 0; i < n1; i++) L[i] = arr[l + i];
        for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (L[i] >= R[j]) arr[k++] = L[i++];
            else arr[k++] = R[j++];
        }
        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];
    }
}