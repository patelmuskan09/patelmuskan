import java.util.Scanner;
public class posneg{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER the value of Integer: ");
        int a= sc.nextInt();
        if(a<0){
            System.out.println("Negative integer");
        }
        else if(a>0){
            System.out.println("Positive integer");
        }
        else{
            System.out.println("Zero");
        }

    }
}