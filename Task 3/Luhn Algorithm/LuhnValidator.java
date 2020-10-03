/**
 * Luhn algorithm is a checksum formula used to validate a variety of identifications numbers. <br/>
 * It's used in many domains like banking, cryptography, national identification etc.</br>
 * @see <a href="https://en.wikipedia.org/wiki/Luhn_algorithm">Wikipedia Luhn Algorithm page</a>
 * @author Julien Gracia
 *
 */
public class LuhnValidator {

	/**
	 * Check if the candidate is valid to Luhn Algorithm
	 * Examples: <br/>
	 * "8273 1232 7352 0569" return False
	 * "095 245 88" return True
	 * @param candidate The candidate, a string of numbers
	 * @return a boolean
	 */
	public boolean isValid(String candidate) {

		// We first clean the input
		String candidateClean = candidate.trim().replace(" ", "");

		if(candidateClean.length() <= 1) {
			return false;
		}

		int nSum = 0;

		for (int i = candidateClean.length() - 1; i >= 0; i--) {

			// Get digit
			int d = candidateClean.charAt(i) - '0';

			// Double every second digits
			if (i % 2 == 0)
				d = d * 2;

			// Add the digit to sum
			nSum += d / 10;
			nSum += d % 10;

			isSecond = !isSecond;
		}
		return (nSum % 10 == 0);
	}
}
