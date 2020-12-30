import java.util.Scanner;
class Division
{
public static void main(String[] args)
{
float divisor,divident;
System.out.println("enter the value of divisor and divident");
Scanner sc=new Scanner(System.in);
divisor=sc.nextFloat();
divident=sc.nextFloat();
System.out.println("The quotient is"+(divisor/divident));
System.out.println("The remainder is"+(divisor%divident));
}
}