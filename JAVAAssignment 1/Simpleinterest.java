import java.util.Scanner;
class Simpleinterest
{
public static void main(String[] args)
{
float p,q,r;
System.out.println("Enter a number");
Scanner sc=new Scanner(System.in);
p=sc.nextFloat();
q=sc.nextFloat();
r=sc.nextFloat();
System.out.println("Simple Interest is:");
System.out.println((p*q*r)/100);
}
}