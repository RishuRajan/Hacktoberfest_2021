package com.company;

import java.util.Scanner;

public class Question1{
    public static class Time {
        int hour, minute, second;

        Time() {
            hour = 0;
            minute = 0;
            second = 0;
        }

        Time(int hour, int minute, int second) {
            this.hour = hour;
            this.minute = minute;
            this.second = second;
            formatTime();
        }

        void formatTime() {
            if (second >= 60) {
                minute += 1;
                second -= 60;
            }
            if (minute >= 60) {
                hour += 1;
                minute -= 60;
            }
        }

        void displayTime() {
            formatTime();
            System.out.println(hour + " : " + minute + " : " + second);
        }

        void setTime(int hour, int minute, int second) {
            this.hour = hour;
            this.minute = minute;
            this.second = second;
            formatTime();
        }

        void addTime(Time T1, Time T2) {
            hour = T1.hour + T2.hour;
            minute = T1.minute + T2.minute;
            second = T1.second + T2.second;
            formatTime();
        }

        void subtractTime(Time T1, Time T2) {
            if (T2.second > T1.second) {
                --T1.minute;
                T1.second += 60;
            }
            second = T1.second - T2.second;
            if (T2.minute > T1.minute) {
                --T1.hour;
                T1.minute += 60;
            }
            minute = T1.minute - T2.minute;
            hour = T1.hour - T2.hour;
            formatTime();
        }

        void toSeconds() {
            double seconds = hour * 60 * 60 + minute * 60 + second;
            System.out.println(seconds);
        }

        void toHours() {
            double hours = hour + minute / 60.0 + second / (60.0 * 60.0);
            System.out.println(hours);
        }
    }

    public static void main(String[] args) {
        int hour, minute, second, choice;
        Scanner sc = new Scanner(System.in);
        Time T1 = new Time();
        Time T2 = new Time();
        Time T3 = new Time();
        System.out.println("Enter 1 to set time");
        System.out.println("Enter 2 to display time");
        System.out.println("Enter 3 to add time");
        System.out.println("Enter 4 to subtract time");
        System.out.println("Enter 5 to convert to seconds");
        System.out.println("Enter 6 to convert to hours");
        System.out.println("Enter 0 to exit");
        System.out.print("Enter choice ");
        choice = sc.nextInt();
        while (choice != 0) {
            switch (choice) {
                case 1:
                    System.out.println("Enter hour, minute and second of class T1");
                    hour = sc.nextInt();
                    minute = sc.nextInt();
                    second = sc.nextInt();
                    T1.setTime(hour, minute, second);
                    System.out.println("Enter hour, minute and second of class T2");
                    hour = sc.nextInt();
                    minute = sc.nextInt();
                    second = sc.nextInt();
                    T2.setTime(hour, minute, second);
                    break;
                case 2:
                    System.out.println("Time of T1 is");
                    T1.displayTime();
                    System.out.println("Time of T2 is");
                    T2.displayTime();
                    break;
                case 3:
                    System.out.println("T1 + T2");
                    T3.addTime(T1, T2);
                    T3.displayTime();
                    break;
                case 4:
                    System.out.println("T1 - T2");
                    T3.subtractTime(T1, T2);
                    T3.displayTime();
                    break;
                case 5:
                    System.out.println("T1 in seconds");
                    T1.toSeconds();
                    System.out.println("T2 in seconds");
                    T2.toSeconds();
                    break;
                case 6:
                    System.out.println("T1 in hours");
                    T1.toHours();
                    System.out.println("T2 in hours");
                    T2.toHours();
                    break;
            }
            System.out.print("Enter choice ");
            choice = sc.nextInt();
        }
    }
}


