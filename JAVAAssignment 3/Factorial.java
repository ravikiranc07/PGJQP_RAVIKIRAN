import java.util.Scanner;
class Factorial
{
public static void main(String[] args)
{
int i,fact=1,num;
System.out.println("Enter any number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
for(i=1;i<=num;i++)
{
fact=fact*i;
}
System.out.println(fact);
}
}