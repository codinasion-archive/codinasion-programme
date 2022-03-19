package com.company;

public class Main {

    public static void main(String[] args) {

     area(10, 17, 21);



    }

    public static int area(int a, int b, int c){

      int s = (a+ b + c) / 2;

      int area = (int) Math.sqrt(s * (s-a) * (s - b) * (s - c));
        System.out.println("Area : " + area);
      return area;


    }


}
