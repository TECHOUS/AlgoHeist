/* Longest valid parenthisis
using stack

Given a string S consisting of opening and closing parenthesis '(' and ')'. Find length of the longest valid parenthesis substring.

e.g
((() - > 2 
)()()) -> 4

*/
import java.util.*;
public class LongestValidParenthesis{
	public static void main (String[] args)
	 {
	    Scanner scan=new Scanner(System.in);
	    int t=scan.nextInt();
	    scan.nextLine();
	    Stack<Integer> st=new Stack<Integer>();
	    while(t-->0){
	        String s=scan.nextLine();
	        int i=0,popI=-1,count=0;
	        st.push(popI);
	        for(i=0;i<s.length();i++){
	            if(s.charAt(i)=='(')
	            st.push(i);
	            else{
	                st.pop();
	                if(st.empty())
	                st.push(i);
	                else{
	                    count=Math.max(count,i-st.peek());
	                }
	            }
	        }
	        System.out.println(count);
	        st.clear();
	    }
	 }
}