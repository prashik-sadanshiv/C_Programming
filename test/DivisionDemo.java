import java.util.Scanner;

class Arithmatic
{
    float Division(int iNo1, int iNo2)
    {
        float Result = 0;
        Result = iNo1 / iNo2;
        return Result;
    }
}
class DivisionDemo
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        float Ans = 0.2f;

        Arithmatic aobj = new Arithmatic();

        Scanner scan = new Scanner(System.in);
        try
        {    
            System.out.println("Enter 1st Number: ");
            iNo1 = scan.nextInt();

            System.out.println("Enter 2nd Number: ");
            iNo2 = scan.nextInt();

            Ans = aobj.Division(iNo1, iNo2);
        }
        catch(Exception eobj)
        {
            System.out.println("Error is: "+eobj);
        }

        System.out.println("Division of "+iNo1+" and "+iNo2+" is "+Ans);
    }
}