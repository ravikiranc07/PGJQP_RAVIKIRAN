import java.util.Scanner;
class Vowel
{
public static void main(String[] args)
{
char letter;
System.out.println("enter a letter");
Scanner sc=new Scanner(System.in);
letter=sc.next(0);
{
if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' )
{
System.out.println("the enter letter is vowel");

}
else
{
System.out.println("the enter letter is constant");
}
}
}
}