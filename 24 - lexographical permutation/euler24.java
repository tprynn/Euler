public class euler24 {

	public static void main(String[] args) {
		String original = "0123456789";
		
		String permutation = original;
		for(int i = 1; i < 1000000; i++) {
			permutation = nextPermutation(permutation);
		}
		
		System.out.println(permutation);
		
		return;
	}

	private static String nextPermutation(String permutation) {
		String result = "";
		//Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
		int toSwap = 0;
		for(int i = permutation.length()-1; i > 0; i--)
			if(permutation.charAt(i-1) < permutation.charAt(i)) {
				toSwap = i-1;
				break;
			}
		
		//Find the largest index l such that a[k] < a[l]. Since k + 1 is such an index, l is well defined and satisfies k < l.
		int swapWith = toSwap+1;
		for(int i = permutation.length()-1; i > toSwap+1; i--)
			if(permutation.charAt(i) > permutation.charAt(toSwap)) {
				swapWith = i;
				break;
			}
		
		//Swap a[k] with a[l].
		String temp = "";
		temp += permutation.substring(toSwap+1, swapWith);
		temp += permutation.charAt(toSwap);
		temp += permutation.substring(swapWith+1, permutation.length());
		
		//Reverse the sequence from a[k + 1] up to and including the final element a[n].
		result += permutation.substring(0,toSwap);
		result += permutation.charAt(swapWith);
		for(int i = temp.length()-1; i >= 0; i--)
			result += temp.charAt(i);

		return result;
	}


}