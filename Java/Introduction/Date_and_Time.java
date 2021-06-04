import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
import java.time.LocalDate;

class Result {
    public static String findDay(int month, int day, int year) {
        LocalDate dt java = LocalDate.of(year, month, day);
        return dt.getDayOfWeek().toString();
    }

}

class Solution {
    public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int month = sc.nextInt();
		int day = sc.nextInt();
		int year = sc.nextInt();
		System.out.println(Result.findDay(month, day, year));
    }
}
