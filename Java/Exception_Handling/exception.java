import java.io.*;
import java.util.*;

public class ExceptionExercises {

    // 1. Throws and catches an exception
    public static void throwAndCatch() {
        try {
            throw new Exception("This is a thrown exception!");
        } catch (Exception e) {
            System.out.println("Caught exception: " + e.getMessage());
        }
    }

    // 2. Throws exception if number is odd
    public static void checkEven(int number) throws Exception {
        if (number % 2 != 0) {
            throw new Exception("Number is odd!");
        }
        System.out.println("Number is even.");
    }

    // 3. Reads a file, throws if not found
    public static void readFile(String filename) throws FileNotFoundException {
        File file = new File(filename);
        Scanner sc = new Scanner(file);
        System.out.println("File found: " + filename);
        sc.close();
    }

    // 4. Reads numbers from file, throws if any are positive
    public static void checkNoPositiveNumbers(String filename) throws Exception {
        Scanner sc = new Scanner(new File(filename));
        while (sc.hasNextInt()) {
            int num = sc.nextInt();
            if (num > 0) {
                sc.close();
                throw new Exception("Positive number found: " + num);
            }
        }
        System.out.println("No positive numbers found.");
        sc.close();
    }

    // 5. Throws exception if file is empty
    public static void checkFileNotEmpty(String filename) throws Exception {
        File file = new File(filename);
        if (file.length() == 0) {
            throw new Exception("File is empty!");
        }
        System.out.println("File is not empty.");
    }

    // 6. Throws exception if duplicate integers are entered
    public static void checkNoDuplicates() throws Exception {
        Scanner sc = new Scanner(System.in);
        Set<Integer> set = new HashSet<>();
        System.out.println("Enter integers (type 'end' to finish):");
        while (sc.hasNext()) {
            String input = sc.next();
            if (input.equalsIgnoreCase("end")) break;
            int num = Integer.parseInt(input);
            if (!set.add(num)) {
                throw new Exception("Duplicate number found: " + num);
            }
        }
        System.out.println("No duplicates found.");
    }

    // 7. Throws exception if string has no vowels
    public static void checkContainsVowel(String input) throws Exception {
        if (!input.toLowerCase().matches(".*[aeiou].*")) {
            throw new Exception("String does not contain vowels!");
        }
        System.out.println("String contains vowels.");
    }

    // Main method to demonstrate usage
    public static void main(String[] args) {
        // 1
        throwAndCatch();

        // 2
        try {
            checkEven(3);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        // 3
        try {
            readFile("test.txt");
        } catch (FileNotFoundException e) {
            System.out.println("File not found!");
        }

        // 4
        try {
            checkNoPositiveNumbers("numbers.txt");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        // 5
        try {
            checkFileNotEmpty("empty.txt");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        // 6
        try {
            checkNoDuplicates();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        // 7
        try {
            checkContainsVowel("rhythm");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}