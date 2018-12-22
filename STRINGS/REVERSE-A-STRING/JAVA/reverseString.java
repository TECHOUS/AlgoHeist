import java.util.*;
public class reverseString
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String str;

        System.out.println("Enter any string");
        str = in.nextLine();

        System.out.println("The reversed string is: " + reversestr(str));
        in.close();
    }

    public static String reversestr(String strng)
    {
        String reverse="";
        for(int i=strng.length()-1;i>=0;i--)
        {
            reverse=reverse+strng.charAt(i);
        }
        return reverse;
    }
}