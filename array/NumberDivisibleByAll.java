// WAP to print the smalllest positive number that is divisible by all the numbers from M to N.

package array1;

public class NumberDivisibleByAll {
	
	public static long gcd(long a, long b) {
		if(a%b !=0)
			return gcd(b,a%b);
		else
			return b;
	}
	
	public static long lcm(long n) {
		long ans=1;
		for(long i=1;i<=n;i++) 
			ans = (ans*i)/(gcd(ans,i));
		return ans;
	}
	
	public static void main(String[] args) {
		long n=10;
		System.out.println(lcm(n)+" is the smallest number divisible by all the numbers from 1 to "+n );

	}

}
