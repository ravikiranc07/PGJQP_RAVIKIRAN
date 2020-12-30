import java.util.Scanner;
class Alphabet
{
public static void main(String[] args)
{
char alp;
System.out.println("Enter alphabet or number");
Scanner sc=new Scanner(System.in);
alp=sc.next();
if(alp>='a' & alp<='z')
{
System.out.println("It is a alphabet");
}
else
{
System.out.println("It is not a alphabet");
}
}
}