class anagram{

    public static String sort(String str){

        StringBuffer sb = new StringBuffer(str);
        char ch;

        for(int i=0; i<sb.length(); i++){
            for(int j=0; j<sb.length()-i-1; j++){

                if( sb.charAt(j) > sb.charAt(j+1) ){
                    ch = sb.charAt(j);
                    sb.setCharAt(j, sb.charAt(j+1));
                    sb.setCharAt(j+1, ch);
                }

            }
        }

        return new String(sb);
    }

    public static void main(String args[]){

        //Input is taken through command-line arguments
        if( args.length < 2 ){
            System.out.println("Less than 2 strings were passed through command-line argument");
        }
        else{
            System.out.print(args[0] + " & " + args[1] + " are ");
            // for 2 strings to be Anagrams, their length should be equal & should have same characters
            if( args[0].length() != args[1].length() || ! sort(args[0]).equals(sort(args[1])) ){
                System.out.print("not ");
            }
            System.out.println("anagrams");
        }

    }
}
