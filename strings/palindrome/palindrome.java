class Palindrome{

    public static boolean isPalindrome(String str){

        int len = str.length();

        for(int i=0; i<(len/2); i++){
            // comparing ith character with "Length-i-1"th character
            if( str.charAt(i) != str.charAt(len-i-1) ){
                return false;
            }
        }
        return true;

    }

    public static void main(String args[]){

        // Input is taken through command-line argument

        if( args.length == 0 ){
            System.out.println("No string provided in command-line argument");
        }
        else{
            System.out.print(args[0] + " is ");
            if( ! isPalindrome(args[0]) ){
                System.out.print("not ");
            }
            System.out.println("Palindrome");
        }
    }
}
