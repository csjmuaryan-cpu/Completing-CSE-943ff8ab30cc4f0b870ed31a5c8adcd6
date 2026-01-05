package basic_program;

import java.util.Scanner;

public class badic_program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 1. Decimal to Hexadecimal
        System.out.print("Input a decimal number: ");
        int dec1 = sc.nextInt();
        System.out.println("Hexadecimal number is : " + Integer.toHexString(dec1).toUpperCase());

        // 2. Decimal to Octal
        System.out.print("Input a Decimal Number: ");
        int dec2 = sc.nextInt();
        System.out.println("Octal number is: " + Integer.toOctalString(dec2));

        // 3. Binary to Decimal
        System.out.print("Input a binary number: ");
        String bin1 = sc.next();
        int dec3 = Integer.parseInt(bin1, 2);
        System.out.println("Decimal Number: " + dec3);

        // 4. Binary to Hexadecimal
        System.out.print("Input a Binary Number: ");
        String bin2 = sc.next();
        int dec4 = Integer.parseInt(bin2, 2);
        System.out.println("HexaDecimal value: " + Integer.toHexString(dec4).toUpperCase());

        // 5. Binary to Octal
        System.out.print("Input a Binary Number: ");
        String bin3 = sc.next();
        int dec5 = Integer.parseInt(bin3, 2);
        System.out.println("Octal number: " + Integer.toOctalString(dec5));

        // 6. Octal to Decimal
        System.out.print("Input any octal number: ");
        String oct1 = sc.next();
        int dec6 = Integer.parseInt(oct1, 8);
        System.out.println("Equivalent decimal number: " + dec6);

        // 7. Octal to Binary
        System.out.print("Input any octal number: ");
        String oct2 = sc.next();
        int dec7 = Integer.parseInt(oct2, 8);
        System.out.println("Equivalent binary number: " + Integer.toBinaryString(dec7));

        // 8. Octal to Hexadecimal
        System.out.print("Input a octal number : ");
        String oct3 = sc.next();
        int dec8 = Integer.parseInt(oct3, 8);
        System.out.println("Equivalent hexadecimal number: " + Integer.toHexString(dec8).toUpperCase());

        // 9. Hexadecimal to Decimal
        System.out.print("Input a hexadecimal number: ");
        String hex1 = sc.next();
        int dec9 = Integer.parseInt(hex1, 16);
        System.out.println("Equivalent decimal number is: " + dec9);

        // 10. Hexadecimal to Binary
        System.out.print("Enter Hexadecimal Number: ");
        String hex2 = sc.next();
        int dec10 = Integer.parseInt(hex2, 16);
        System.out.println("Equivalent Binary Number is: " + Integer.toBinaryString(dec10));

        // 11. Hexadecimal to Octal
        System.out.print("Input a hexadecimal number: ");
        String hex3 = sc.next();
        int dec11 = Integer.parseInt(hex3, 16);
        System.out.println("Equivalent of octal number is: " + Integer.toOctalString(dec11));

        // 12. Compare two numbers
        System.out.print("Input first integer: ");
        int a = sc.nextInt();
        System.out.print("Input second integer: ");
        int b = sc.nextInt();
        if (a == b) System.out.println(a + " == " + b);
        if (a != b) System.out.println(a + " != " + b);
        if (a < b) System.out.println(a + " < " + b);
        if (a > b) System.out.println(a + " > " + b);
        if (a <= b) System.out.println(a + " <= " + b);
        if (a >= b) System.out.println(a + " >= " + b);

        // 13. Sum of digits
        System.out.print("Input an integer: ");
        int num = sc.nextInt();
        int sum = 0, temp = num;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        System.out.println("The sum of the digits is: " + sum);

        // 14. Area of a hexagon
        System.out.print("Input the length of a side of the hexagon: ");
        double s = sc.nextDouble();
        double areaHex = (6 * s * s) / (4 * Math.tan(Math.PI / 6));
        System.out.println("The area of the hexagon is: " + areaHex);

        // 15. Area of a polygon
        System.out.print("Input the number of sides on the polygon: ");
        int n = sc.nextInt();
        System.out.print("Input the length of one of the sides: ");
        double side = sc.nextDouble();
        double areaPoly = (n * side * side) / (4 * Math.tan(Math.PI / n));
        System.out.println("The area is: " + areaPoly);

        sc.close();
    }
}