//import java.util.ArrayList;
//import java.util.List;
//import java.util.Scanner;
import java.util.*;
import java.io.*;
 
class Student{
    private int Id_;
    private double cgpa_;
    private String name_;
    
    Student(int Id, String name, double cgpa){
        Id_ = Id;
        cgpa_ = cgpa;
        name_ = name;
    }
    
    int getId(){return Id_;}
    String getName(){return name_;}
    double getCGPA(){return cgpa_;}
}

class Priorities {
    public List < Student > getStudents(List < String > events) {
        PriorityQueue < Student > student_queue = new PriorityQueue(Comparator.comparing(Student::getCGPA).reversed().thenComparing(Student::getName).thenComparing(Student::getId));
        
        List < Student > students = new ArrayList < Student > ();
        for (String e: events) {
            Scanner in =new Scanner(e);
            String event = in.next();
            if (event.equals("ENTER")) {
                String name = in.next();
                float cgpa = in.nextFloat();
                int token = in.nextInt();

                Student student = new Student(token, name, cgpa);
                student_queue.add(student);
            } else if (event.equals("SERVED")) {
                Student first = student_queue.poll();
            } in .close();
        }
        Student first = student_queue.poll();
        if (first == null) {
            return students;
        } else {
            while (first != null) {

                students.add(first);
                first = student_queue.poll();

            }
            return students;
        }
    }
}


class Solution {
    private final static Scanner scan = new Scanner(System.in);
    private final static Priorities priorities = new Priorities();
    
    public static void main(String[] args) {
        int totalEvents = Integer.parseInt(scan.nextLine());    
        List<String> events = new ArrayList<>();
        
        while (totalEvents-- != 0) {
            String event = scan.nextLine();
            events.add(event);
        }
        
        List<Student> students = priorities.getStudents(events);
        
        if (students.isEmpty()) {
            System.out.println("EMPTY");
        } else {
            for (Student st: students) {
                System.out.println(st.getName());
            }
        }
    }
}