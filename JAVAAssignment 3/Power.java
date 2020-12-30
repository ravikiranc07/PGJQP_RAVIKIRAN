import java.util.Scanner;
class Power
{
public static void main(String[] args)
{
int base,num=1,exp,i;
System.out.println("Enter the base number");
Scanner sc=new Scanner(System.in);
base=sc.nextInt();
System.out.println("Enter the exponential number");
exp=sc.nextInt();
for(i=1;i<=exp;i++)
{
num=num*base;
}
System.out.println(num);
}
}