package AarayList.Array;
import java.util.ArrayList;
import java.util.Scanner;
public class Arraylist {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      // syntax
      ArrayList<Integer> list = new ArrayList<>(5);
      for (int i = 0; i < 5; i++) {
        list.add(in.nextInt());
      }
      for (int i = 0; i < 5; i++) {
        System.out.println(list.get(i));
      }
      System.out.println(list);
    }
  }
}
