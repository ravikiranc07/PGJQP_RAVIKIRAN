import java.util.Scanner;
class Prime
{
public static void main(String[] args)
{
int num,i;
System.out.println("Enter the number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
for(i=2;i<num;i++)
{
if(num%i==0)
{
System.out.println("It is not a prime number");break;
}
else
{
System.out.println("It is a prime number");break;
}
}
}
}
