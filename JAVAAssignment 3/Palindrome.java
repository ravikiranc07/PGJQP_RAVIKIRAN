import java.util.Scanner;
class Palindrome
{
public static void main(String[] args)
{
int rev=0,rem,num,n;
System.out.println("Enter the number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
n=num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
System.out.println(rev);
if(rev==n)
{
System.out.println("It is a palindrome");
}
else
{
System.out.println("It is not palindrome");
}
}
}

