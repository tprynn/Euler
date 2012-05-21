public class euler4 {
	public static void main(String[] args) {
		boolean l = isPalindrome(1234321);
		System.out.println(l);
		
		int a;
		int b;
		int c;
		for(a = 999; a > 100; a--) {
			for(b = 999; b > 100; b--) {
				c = a*b;
				if(isPalindrome(c)) {
					System.out.println(c);
					return;
				}
			}
		}
	
		return;
	}
	
	private static boolean isPalindrome(int x) {
		String test = x + "";
		for(int i = 0; i < test.length()/2; i++) {
			if(test.charAt(i) != test.charAt(test.length()-1-i))
				return false;
		}
		return true;
	}
}