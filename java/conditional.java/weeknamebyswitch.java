import java.util.Scanner;
public class weeknamebyswitch {
    public static void main(String[] args) {
        try (Scanner sc=new Scanner(System.in)){
            System.out.println("entre day number");
           int n =sc.nextInt();
           switch(n){
            case 1 -> System.out.println("Monday");
            case 2 -> System.out.println("Tuesday");
            case 3 -> System.out.println("Wednesday");
            case 4 -> System.out.println("Thrusday");
            case 5 -> System.out.println("Friday");
            case 6 -> System.out.println("Saterday");
            case 7 -> System.out.println("Sunday");
        }
    }
}
}