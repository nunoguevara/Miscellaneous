public class LinearSearch() {
	public static int linearSearchInt(int source[], int target) {
	for (int i = 0; i <= source.length; i++) {
		if (source[i] == target) {
			return i;
			}
		}
	}
	return -1;
}
