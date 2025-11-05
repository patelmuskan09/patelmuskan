import java.util.Scanner;
public class input{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your string value:");
        String str=sc.nextLine();
        System.out.println(str);
        System.out.println("Enter your int value:");
        int a= sc.nextInt();
        System.out.println(a);
        System.out.println("Enter your float value:");
        float f=sc.nextFloat();
        System.out.println(f);
        System.out.println("ALL VALUES:");
        System.out.println(str);
        System.out.println(a);
        System.out.println(f);

    }
}