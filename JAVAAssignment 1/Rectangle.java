import java.util.Scanner;
class Rectangle
{
public static void main(String[] args)
{
float length,breadth;
System.out.println("Enter the length and breadth");
Scanner sc=new Scanner(System.in);
length=sc.nextFloat();
breadth=sc.nextFloat();
System.out.println("Area of rectangle is:");
System.out.println(length*breadth);
System.out.println("Perimeter of rectangle is:");
System.out.println(2*(length+breadth));
}
}